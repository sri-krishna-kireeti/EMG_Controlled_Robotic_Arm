# EMG_Controlled_Robotic_Arm

Basic IOT project to control SERVO motors based on EMG sensor readings.

1.1 Problem Statement: 

   To create a robotic arm, which is controlled by the sensory signals, captured by an EMG sensor.

1.2 Problem solution:

   The robotic arm itself has been made out of cardboard. We have made a cardboard cutout of an arm, with sufficient space to accommodate the required circuitry within the cardboard model itself to eliminate the hassle of wires. Using a cardboard model also helped us to greatly reduce the overall cost of the project without compromising on the durability of the model. The cardboard arm contains a breadboard on the side, which is used to provide the necessary connections between the arm, servo motors, Arduino board, and the EMG sensor. The motion of the fingers is controlled by strings wound over each finger, which are in turn connected to servo motors.

1.3 Functional Description:  

   The entire circuitry has been assembled on the side of the model using a breadboard and wires. The connections are discussed in detail as we go further. The EMG sensor is to be attached to the user using three electrodes. The sensory signals obtained by the EMG sensor are sent as input to the Arduino board. The Arduino board, which has already been fed a cod which will be explained in detail later, rotates the servo motors after the signal received from the sensor cross a value which has been predetermined earlier in the code. The servo motors are in turn tied to strings, which are wound around the fingers of the model. Hence when the servo motors rotate, the fingers close, enabling the user to grip and release objects whenever they want. 
We have used an Arduino Uno board in our project. 
