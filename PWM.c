// set pin numbers:
int ledPin1 = 5, // the number of the LED1 pin
ledPin2 = 6, // the number of the LED2 pin
ledPin3 = 9, // the number of the LED3 pin
ledPin4 = 10; // the number of the LED4 pin

void setup() {
  // initialize the LED pin as an output:
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
pinMode(ledPin3, OUTPUT);
pinMode(ledPin4, OUTPUT);
}

void loop()
{
// set the ports output PWM waves with different duty cycle
analogWrite(ledPin1, map(2, 0, 100, 0, 255));
analogWrite(ledPin2, map(5, 0, 100, 0, 255));
analogWrite(ledPin3, map(15, 0, 100, 0, 255));
analogWrite(ledPin4, map(75, 0, 100, 0, 255));
}