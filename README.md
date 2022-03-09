# ESP-NOW-Weather-Observer
ESP-Now outside,  BME280 sensor on batteries and inside receiver on mains power.

Both ESP32 boards used in this project were from Amazon, HiLetGo ESP32 (Node32s type board).

[HiLetGo, ESP32 availale from Amazon](https://www.amazon.com/HiLetgo-ESP-WROOM-32-Development-Microcontroller-Integrated/dp/B0718T232Z/ref=sr_1_1?crid=J5YL6F93FHVI&keywords=HiLetgo+ESP-WROOM-32+ESP32+ESP-32S+Development+Board&qid=1646810255&sprefix=hiletgo+esp-wroom-32+esp32+esp-32s+development+board%2Caps%2C491&sr=8-1)

Sender current measurement was done measuring the voltage drop accross a Dupont Jumper of 1.19 ohms and measuring the voltage beween ends of this Dupont jumper wire.  Voltage was observered on the 5 volt input pin of the ESP32 sender.

Awake current ~ 72 mA  (BME280 active, WiFi active, ADC and Bluetooth not used.  Active time 3.8 seconds

Sleep current ~ 2.6 mA  (BME280 in sleep mode, ADC off, WiFi off, and Bluetooth off)  Sleep time 15 minutes.

This was not a "bare" ESP32; but a development board with on-board led and voltage regulator.  Plus; used an external led to indicate active or sleep condition.
