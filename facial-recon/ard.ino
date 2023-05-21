void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    char command = Serial.read();  // Read the incoming command

    if (command == 'LED_ON') {
      digitalWrite(10, HIGH);  // Turn on the LED
    } else if (command == 'LED_OFF'){
      digitalWrite(10, LOW);   // Turn off the LED
    }
    Serial.println(command);
  }
}



int my_led = 10;
String IncomingData = "";
String Temp = "";
char var;

void setup()
{
  Serial.begin(9600);
  Serial.println("Ready");
  pinMode(my_led, OUTPUT);
}
void loop()
{
  while(Serial.available())
  {
    var = Serial.read();
    Temp = String(var);
    IncomingData+= Temp;
  }
 if (IncomingData == "1"){
    digitalWrite(my_led, HIGH);
 }
 if (IncomingData == "0"){
    digitalWrite(my_led, LOW);
 }
 IncomingData = "";
}