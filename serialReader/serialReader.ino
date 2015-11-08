/*
  Serial Call and Response
 Language: Wiring/Arduino

 This program sends an ASCII A (byte of value 65) on startup
 and repeats that until it gets some data in.
 Then it waits for a byte in the serial port, and
 sends three sensor values whenever it gets a byte in.

 Thanks to Greg Shakar and Scott Fitzgerald for the improvements

   The circuit:
 * potentiometers attached to analog inputs 0 and 1
 * pushbutton attached to digital I/O 2

 Created 26 Sept. 2005
 by Tom Igoe
 modified 6 November 2015
 by Yudha Pane

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/SerialCallResponse

 */

int firstSensor   = 0;    // first analog sensor
int secondSensor  = 0;   // second analog sensor
int thirdSensor   = 0;  // digital sensor
int pwmValue      = 0;  // pwm duty cycle
const int pwmPin  = 9;  // Analog output pin that the LED is attached to
//unsigned char inByte = 0;         // incoming serial byte
unsigned char inByte = 0;         // incoming serial byte
void setup()
{
  pinMode(13, OUTPUT); 
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  // start serial port at 9600 bps:
  Serial.begin(9600);
  while (!Serial) {
      digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
      delay(200); // wait for serial port to connect. Needed for Leonardo only
  }
  digitalWrite(8, HIGH);

  pinMode(2, INPUT);   // digital sensor is on digital pin 2
  //establishContact();  // send a byte to establish contact until receiver responds
}

void loop()
{
  // if we get a valid byte, read analog ins:
 // Serial.write(100);
 //printf("Start program \n");
  if (Serial.available() > 0) {
    // get incoming byte:
    inByte = Serial.read();
    //if (inByte=='a')
    Serial.write(inByte);
    //Serial.print(inByte);
    if (inByte <= 128)
    {
      digitalWrite(7, HIGH);
      digitalWrite(8, LOW);      
      pwmValue = inByte;
    }
    else
    {
      digitalWrite(7, LOW);
      digitalWrite(8, HIGH);      
      pwmValue = 256-inByte;
    }
    analogWrite(pwmPin, pwmValue); // approx 490 Hz
  }
  //Serial.print(inByte);
  delay(20);
}

//void establishContact() {
//  while (Serial.available() <= 0) {
//    Serial.print('A');   // send a capital A
//    delay(300);
//  }
//}

