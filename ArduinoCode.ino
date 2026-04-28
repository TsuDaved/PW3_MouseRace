// ===== PIN DEFINITIONS =====
const int leftSensor  = A0;
const int rightSensor = A1;
const int leftMotorPWM  = 10;
const int rightMotorPWM = 11;

void setup()
{
  pinMode(leftMotorPWM, OUTPUT);
  pinMode(rightMotorPWM, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  // ---- Sensor averaging (reduces noise) ----
  int VL = (analogRead(leftSensor) + analogRead(leftSensor) + analogRead(leftSensor)) / 3;
  int VR = (analogRead(rightSensor) + analogRead(rightSensor) + analogRead(rightSensor)) / 3;
}