#include <Arduino.h>
#include <Wire.h>
#include <BleMouse.h>

BleMouse bleMouse;

#define MPU_ADDR 0x68

#define PWR_MGMT_1 0x6B
#define ACCEL_XOUT_H 0x3B

void writeMPU(byte reg, byte data) {
  Wire.beginTransmission(MPU_ADDR);
  Wire.write(reg);
  Wire.write(data);
  Wire.endTransmission();
}

void readMPU(int16_t &ax, int16_t &ay, int16_t &az) {
  Wire.beginTransmission(MPU_ADDR);
  Wire.write(ACCEL_XOUT_H);
  Wire.endTransmission(false);

  Wire.requestFrom(MPU_ADDR, 6);

  ax = Wire.read() << 8 | Wire.read();
  ay = Wire.read() << 8 | Wire.read();
  az = Wire.read() << 8 | Wire.read();
}

void setup() {
  Serial.begin(115200);
  Wire.begin(21, 22);

  // 🔥 WAKE UP SENSOR (ÇOX VACİB)
  writeMPU(PWR_MGMT_1, 0);

  bleMouse.begin();

  Serial.println("MPU RAW MODE STARTED");
}

void loop() {
  int16_t ax, ay, az;

  readMPU(ax, ay, az);

  Serial.print("RAW AX: ");
  Serial.print(ax);
  Serial.print(" AY: ");
  Serial.print(ay);
  Serial.print(" AZ: ");
  Serial.println(az);

  int moveX = ax / 200;
  int moveY = ay / 200;

  if (abs(moveX) < 2) moveX = 0;
  if (abs(moveY) < 2) moveY = 0;

  if (bleMouse.isConnected()) {
    bleMouse.move(moveX, moveY);
  }

  delay(5);
}