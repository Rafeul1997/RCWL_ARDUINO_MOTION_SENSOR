
//Subscribe "Guru of Microcontroller"
//Learn Automation

int sensor = 4;
int load = 8;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(sensor, INPUT);
  pinMode(load, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int State = digitalRead(sensor);
  // print out the state of the button:
  Serial.println(State);
  delay(10);  // delay in between reads for stability


  if (State == 1) {
    digitalWrite(load, LOW);
    //delay(5000);
  } else {
    digitalWrite(load, HIGH);
  }

}
