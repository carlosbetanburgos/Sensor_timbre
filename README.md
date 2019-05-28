# sensor_timbre
Sensor para timbre inalambrico

## Descripcion

Por medio de la conexion con ESPNow, se permite enviar los datos del botom del dispositivo que está transmitiendo (Master) y que lo reciba el que escucha (slave) reproduciendo un sonido.


|Item|Respuesta|
|----|-------|
|Nombre de proyecto|Sensor para timbre inalambrico|
|Descripción|Se desea por medio de un sensor que emite y otro que escucha, realizar un timbre inalámbrico, esto por medio de ESPNow|
|Case|Sensor: Case con salida de un botom de tacto o presión, case de recepción con parlante incorporado|
|Solar o alimentación alternativa|Alimentación y batería grande para ambos sensores|
|Presentación de datos al usuario|Existen gráficas de AdafruitIO. Los dispositivos de alerta tienen una pantalla con el número de eventos en la última hora|
|Entrada de datos por el usuario|Ninguno|
|Etapas: 1.|Prueba en San José: Solo un sensor de rayería, un dispositivo de alerta. Comparar con [Lightning maps](https://www.lightningmaps.org/)|
|2.|Producción en Isla del Coco: Tres sensores individuales de rayería, en posiciones opuestas. Varios sensores de alerta.|
|3.|Futuro: Realizar cálculo de Time-of-Arrival (TOA), para poder localizar rayos en un mapa. Compatibilidad con [Blitzortung](http://es.blitzortung.org/cover_your_area.php)|
|Hardware: Dispositivo Sensor|TTGO-TBeam, batería 18650, [sensor EMP](https://www.tindie.com/products/SMDKing/emp-sensor-detect-lightning-and-other-phenomena/)|
|Hardware: Dispositivo de Alerta|TTGO ESP32+OLED, batería, cargador inductivo. Alertas visuales y auditivas a definir.|
|Servicios|Adafruit.IO|
|Software|En Arduino, y Node-Red|
|Posibles problemas|Sensor de rayería, carga inductiva, case en epoxy transparente, AdafruitIO en Node-RED|
