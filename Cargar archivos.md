Instrucciones:

Se tiene que tener cargada las librerias de:
-IBM LMIC framework
-ESP8266 and ESP32 Oled Driver for SSD1306 display
-Adafruit IO Arduino
-ArduinoHttpClient
-Time
-PubSubClient
-IOTAppStory-ESP

Por medio de arduino IDE, se carga los codigos de master y de slave. El master se carga en el ESP32 LORA TTGO OLED, el cual se encarga de enviar la señal para que se active el timbre, el boton es el de PRG.
El slave se carga en el TTGO T-Beam igualmente con Arduino IDE, se conectan los cables correspondientes en los pines 14 y GND, al recibir la señal del master, apaga la luz y se enciende 1 en la tarjeta de sonido, ejecutando el timbre.
