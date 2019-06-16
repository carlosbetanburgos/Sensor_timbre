# sensor_timbre
Sensor para timbre inalambrico

## Descripcion

Por medio de la conexion con ESPNow, se permite enviar los datos del botom del dispositivo que está transmitiendo (Master) y que lo reciba el que escucha (slave) reproduciendo un sonido.


|Item|Respuesta|
|----|-------|
|Nombre de proyecto|Sensor para timbre inalambrico|
|Descripción|Se desea por medio de un sensor que emite y otro que escucha, realizar un timbre inalámbrico, esto por medio de ESPNow|
|Case|Sensor: Case con salida de un botom de tacto o presión, case de recepción con parlante incorporado|
| Solar o alimentación alternativa | Alimentación y batería grande para ambos sensores |
|Presentación de datos al usuario|Cada vez que se emite el toque del  dispositivo, se emite un sonido y se enciende una luz|
|Entrada de datos por el usuario|Ninguno|
|Etapas: 1.|Se prueba la conectividad de ESPNow en la que se active un led cuando reciba la senal|
|Etapas: 2.|Se implementa la tarjeta de audio y el parlante necesario para reproducir el sonido.|
|Etapas: 3.|Futuro: Realizar la implementacion de una interfaz en pantalla que muestre la alerta de timbre y el nombre de la familia, tambien su aplicacion con TTN que permita por algun medio jalar una alerta como mensaje de texto que indique que se toco el timbre, tambien complementar con alguna sistema con camara para visualizar quien esta en la puerta|
|Hardware: Dispositivo de Alerta|TTGO-TBeam, Adafruit Audio FX, amplificador PAM8302a, Parlante generico|
|Hardware: Dispositivo Sensor|TTGO ESP32+OLED, batería, cargador inductivo. Alertas visuales y auditivas a definir.|
|Servicios|ESPNow|
|Software|En Arduino|
|Posibles problemas|Se necesita realizar una instalación electrica estable y en donde no sea posible alcanzar para personas del exterior, para evitar hurtos y desconexiones|

La aplicación del proyecto es buscar una manera de simplificar la implementación de un timbre en los diferentes hogares, de manera que no sea necesario tanta instalación de cables, y el cual pueda ser implementado en cualquier habitación de la casa.
El proyecto surge por la necesidad de los mismo, no existe un timbre en mi casa y se complica instalar uno, además en el trabajo existe solo 1 instalado y no se escucha en todo el edificion, por lo que aplicando la tecnología de ESPNOW se pueden conectar hasta 20 dispositivos slave al mismo master, suficientes para colocar 1 en cada habitación. 
