int sensor = A0;
int sensorInput = 0;
int maxThresh = 1000;
int minThresh = 700;
int redLight = 13;
int greenLight = 11;
void setup() {
  // put your setup code here, to run once:
  pinMode(greenLight,OUTPUT);
  pinMode(redLight,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 
  sensorInput = analogRead(sensor);
 Serial.println(sensorInput);
  if(sensorInput>minThresh && sensorInput< maxThresh){
    digitalWrite(redLight,HIGH);
    digitalWrite(greenLight,LOW);
   }
  else{
    digitalWrite(greenLight,HIGH);
    digitalWrite(redLight,LOW);
  }
}
