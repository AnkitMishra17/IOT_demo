#define FIREBASE_HOST "https://iot-minor-ff1fd.firebaseio.com/"
#define FIREBASE_AUTH "rpXE8fX86HhL5fpKeerKwUjiZAxbAaGAzuDFXr2b"


int beat = A0;
int value;
NodeMCU Pin D1 > TRIGGER | Pin D2 > ECHO

void setup() {
  
  Serial.begin (9600);
  pinMode(TRIGGER, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(BUILTIN_LED, OUTPUT);
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}

void loop() {
  
  value = analogRead(beat);
  Serial.print(value);
  Serial.println("bps");
  beat1 = String(value);
  Firebase.setString("ValueA",beat1);
  delay(1000);
}