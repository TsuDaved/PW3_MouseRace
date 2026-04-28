// ===== PIN DEFINITIONS =====
const int leftSensor  = A0;
const int rightSensor = A1;
const int leftMotorPWM  = 10;
const int rightMotorPWM = 11;

// ===== PARAMETERS =====
int baseSpeed = 150;
float K = 0.6;
int deadband = 8;

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
  int diff = VL - VR;

  // ---- Deadband (ignore very small differences) ----
  if (abs(diff) < deadband)
  {
    diff = 0;
  }

  // ---- Proportional steering ----
  int correction = K * diff;
  int leftSpeed  = baseSpeed - correction;
  int rightSpeed = baseSpeed + correction;

  // ---- Limit PWM range ----
  leftSpeed  = constrain(leftSpeed, 0, 255);
  rightSpeed = constrain(rightSpeed, 0, 255);

  // ---- Send PWM to motors ----
  analogWrite(leftMotorPWM, leftSpeed);
  analogWrite(rightMotorPWM, rightSpeed);
}