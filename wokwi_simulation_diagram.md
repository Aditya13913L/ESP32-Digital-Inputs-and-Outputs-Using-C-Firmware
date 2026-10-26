{
  "version": 1,
  "author": "Basic ESP32 Project",
  "editor": "wokwi",
  "parts": [
    { "type": "wokwi-esp32-devkit-v1", "id": "esp", "top": -48, "left": -28.8, "attrs": {} },
    { "type": "wokwi-pushbutton", "id": "btn1", "top": 35.4, "left": -163.2, "attrs": { "color": "green", "label": "BTN1 (14)" } },
    { "type": "wokwi-pushbutton", "id": "btn2", "top": 112.2, "left": -163.2, "attrs": { "color": "blue", "label": "BTN2 (27)" } },
    { "type": "wokwi-led", "id": "led1", "top": -32.4, "left": 169.8, "attrs": { "color": "green", "label": "LED1 (25)" } },
    { "type": "wokwi-led", "id": "led2", "top": 25.2, "left": 169.8, "attrs": { "color": "red", "label": "LED2 (26)" } },
    { "type": "wokwi-buzzer", "id": "bz1", "top": 96, "left": 172.8, "attrs": { "volume": "0.1" } },
    { "type": "wokwi-resistor", "id": "r1", "top": -9.6, "left": 115.2, "attrs": { "value": "220" } },
    { "type": "wokwi-resistor", "id": "r2", "top": 48, "left": 115.2, "attrs": { "value": "220" } }
  ],
  "connections": [
    [ "esp:TX0", "$serialMonitor:RX", "", [] ],
    [ "esp:RX0", "$serialMonitor:TX", "", [] ],
    [ "btn1:1.r", "esp:D14", "green", [ "v0" ] ],
    [ "btn1:2.r", "esp:GND.1", "black", [ "v0" ] ],
    [ "btn2:1.r", "esp:D27", "blue", [ "v0" ] ],
    [ "btn2:2.r", "esp:GND.1", "black", [ "v0" ] ],
    [ "esp:D25", "r1:1", "green", [ "v0" ] ],
    [ "r1:2", "led1:A", "green", [ "v0" ] ],
    [ "led1:C", "esp:GND.2", "black", [ "v0" ] ],
    [ "esp:D26", "r2:1", "red", [ "v0" ] ],
    [ "r2:2", "led2:A", "red", [ "v0" ] ],
    [ "led2:C", "esp:GND.2", "black", [ "v0" ] ],
    [ "esp:D33", "bz1:2", "orange", [ "v0" ] ],
    [ "bz1:1", "esp:GND.2", "black", [ "v0" ] ]
  ],
  "dependencies": {}
}