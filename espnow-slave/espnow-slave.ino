//Libs do espnow e wifi
#include <esp_now.h>
#include <WiFi.h>
 
//Pinos que iremos escrever (digitalWrite) cujos valores são recebios do Master
//É importante que o código fonte do Master tenha este mesmo array com os mesmos gpios
//na mesma ordem
uint8_t gpios[] = {0, 14};
 
//No setup iremos calcular a quantidade de pinos e colocar nesta variável,
//assim não precisamos trocar aqui toda vez que mudarmos a quantidade de pinos,
//tudo é calculado no setup
int gpioCount;

//Função que serve de callback para nos avisar
//quando chegou algo do Master
void OnDataRecv(const uint8_t *mac_addr, const uint8_t *data, int data_len) {
  char macStr[18];
  //Copiamos o Mac Address origem para uma string
  snprintf(macStr, sizeof(macStr), "%02x:%02x:%02x:%02x:%02x:%02x",
           mac_addr[0], mac_addr[1], mac_addr[2], mac_addr[3], mac_addr[4], mac_addr[5]);
  //Mostramos o Mac Address que foi a origem da mensagem
  Serial.print("Received from: "); 
  Serial.println(macStr);
  Serial.println("");
 
  //Para cada pino
  for(int i=0; i<gpioCount; i++){
    //Colocamos o valor recebido do Master na saída do respectivo pino
    digitalWrite(gpios[i], data[i]);
  }
}


void InitESPNow() {
  //Se a inicialização foi bem sucedida
  if (esp_now_init() == ESP_OK) {
    Serial.println("ESPNow Init Success");
  }
  //Se houve erro na inicialização
  else {
    Serial.println("ESPNow Init Failed");
    ESP.restart();
  }
}

void setup() {
  Serial.begin(115200);
   
  //Cálculo do tamanho do array de gpios
  //sizeof(gpios) retorna a quantidade de bytes que o array gpios aponta
  //Sabemos que todos os elementos do array são do tipo uint8_t
  //sizeof(uint8_t) retorna a quantidade de bytes que o tipo uint8_t possui
  //Sendo assim para saber quantos elementos o array possui
  //fazemos a divisão entre a quantidade total de bytes do array e quantos
  //bytes cada elemento possui
  gpioCount = sizeof(gpios)/sizeof(uint8_t);
 
  //Colocamos o ESP em modo station
  WiFi.mode(WIFI_STA);
   
  //Mostramos no Monitor Serial o Mac Address deste ESP quando em modo station
  //Se quiser que o Master mande para ESPs em específico, altere no 
  //array de slaves (no código fonte do Master) para que ele possua apenas os Mac Addresses printados aqui
  Serial.print("Mac Address in Station: "); 
  Serial.println(WiFi.macAddress());
 
  //Chama a função que inicializa o ESPNow
  InitESPNow();

//Registra o callback que nos informará quando o Master enviou algo
  //A função que será executada é OnDataRecv e está declarada mais abaixo
  esp_now_register_recv_cb(OnDataRecv);
 
  //Para cada pino que está no array gpios
  for(int i=0; i<gpioCount; i++){
    //Colocamos em modo de output
    pinMode(gpios[i], OUTPUT);
  }
}


//Não precisamos fazer nada no loop
//Sempre que chegar algo do Master
//a função OnDataRecv é executada automaticamente
//já que adicionamos como callback utilizando a função
//esp_now_register_recv_cb
void loop() {
}
