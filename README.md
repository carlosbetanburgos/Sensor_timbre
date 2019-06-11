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
|Etapas: 3.|Futuro: Realizar la implementacion de una interfaz en pantalla que muestre la alerta de timbre y el nombre de la familia|
|Hardware: Dispositivo de Alerta|TTGO-TBeam, Adafruit Audio FX, Parlante generico|
|Hardware: Dispositivo Sensor|TTGO ESP32+OLED, batería, cargador inductivo. Alertas visuales y auditivas a definir.|
|Servicios|ESPNow|
|Software|En Arduino|
|Posibles problemas|Dependiendo de la distancia en que se conecte cada sensor puede fallar la conexion|
