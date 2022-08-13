# Development-and-analysis-of-a-CAN-system

The communication protocol of Controller Area Network (CAN) bus
is seen in detail in the following programs by establishing it between two
ESP32 micro-controller boards and analysing its functionality. Firstly,
the CAN bus communication is established between two ESP32 boards
and the message from one board is received in another board. Remote
Transmission Request (RTR) function of the CAN bus communication has
been checked by sending remote request from one board and observing it
on the other board. Then, the process of increasing the intensity of LED
was done by sending single byte number in a loop. Finally, the CAN bus
frame formats (Data, Remote and Error) was observed and decoded by
measuring the bus voltage levels using Pico scope for the various frame
rates of 200Kb/s, 512kb/s and 1Mb/s. Additionally, Bit stuffing and
arbitration process was also observed using Pico Scope.

# Standard CAN and Extended CAN frame format

![image](https://user-images.githubusercontent.com/77397380/184477830-8ceccb6c-7a96-41a5-ba51-9ab902b22a5e.png)
