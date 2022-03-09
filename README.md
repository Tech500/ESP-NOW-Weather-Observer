# ESP-NOW-Weather-Observer
ESP-Now outside,  BME280 sensor on batteries and inside receiver on mains power.

Both ESP32 boards used in this project were from Amazon, HiLetGo ESP32 (Node32s type board).

Sender current measurement was done measuring the voltage drop accross a Dupont Jumper of 1.19 ohms and measuring the voltage beween ends of this Dupont jumper wire.  Voltage was observered on the 5 volt input pin of the ESP32 sender.

Awake current ~ 85 mA  (BME280 active, WiFi active, ADC and Bluetooth not used.  Active time 3.8 seconds

Sleep current ~ 2.6 mA  (BME280 in sleep mode, ADC off, WiFi off, and Bluetooth off)  Sleep time 15 minutes.

This was not a "bare" ESP32; but a development board with on-board led and voltage regulator.  Plus; used an external led to indicate active or sleep condition.
