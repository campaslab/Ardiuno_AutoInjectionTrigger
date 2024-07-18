int noPulses = 350;      //number of pulses
int PulseWidth = 10;   //time width of the pulse in ms
int PulseInt = 5000;    //interval between two pulses in ms (start to start)
int TTL = 10;           //pin out for the TTL pulse 
int x = 0;

void setup() {
  //pinMode(TTL, INPUT_PULLUP);  //this is for eliminating the preliminary signal coming out from Arduino
  Serial.begin(9600); 
  delay(2000);
  pinMode(TTL, OUTPUT);
}

void loop() {
  digitalWrite(TTL, HIGH);
  delay(PulseWidth);

  digitalWrite(TTL, LOW);
  delay(PulseInt);

  x++;
  Serial.println(x);

  if (x >= noPulses) {
    exit(0);
  }
}
