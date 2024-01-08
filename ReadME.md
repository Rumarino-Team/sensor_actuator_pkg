This is the code documentation for the hydrus actuator packages and Hydrus Hardware implementation.

Sensor actuator pkg consists is build upon the [Rosserial Arduino Library](http://wiki.ros.org/rosserial_arduino). 
This library is a extension of the C++ arduinos libraries that includes ROS. Based on the [Rosserial](http://wiki.ros.org/rosserial) documentation,
Rosserial is a protocol for wrapping standard ROS serialied messages  , multiple topics and services over a character device such as a serial port or 
a network socket. Rosserual Arduino is then a package for an Arduino Extension  for running a rosserial_client on a Arduino. [rosserial_client](http://wiki.ros.org/rosserial_client) is then a generic  of a client-side rosserial implementation designed for microcontrollers and for our case for our [Keyestudio Atmega 2560 
Microcontroller](s).

To further understand this code we will have to understand the Hardware Scheme of Hydrus.

Here is the full description of the hardware of the AUV

![Alt text](<RUMArino Architecture Collection - Page 1.png>)

In the case of this repository because this only defined the code for the Arduino code. we are going to heed our attention in the Microcontroller part




![Alt text](selected.png)


Lets see what are all the individual parts.

- Keystudio Atmega 2560 Microcontrller. This is the microcontroller that makes interface with the embedding devices. This is connected though usb by the Nvidia Jetson. We use the Rosserial Arduino library to make continous communication with ros and this board. This  board is the responsible for sending the  PWD signal to the thusters.

- Bluerobotics T200 Thruster: The thruster that propolses the submarine. This are input the PWD signal that gives them a voltage for running them. For a full dewscription of the thsters go to the following [link](https://bluerobotics.com/store/thrusters/t100-t200-thrusters/t200-thruster-r2-rp/).


TODO: Make a description for the other parts  that are connected to the microcontroller.








TODO: 
 - Keep Writting the documentation
 - Implement the changes in the code
 - Make the dependencies downloable  not in the Github repository

