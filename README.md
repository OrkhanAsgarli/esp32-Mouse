# ESP32 BLE Motion Mouse (MPU9250)

This project is a **wireless motion-controlled mouse system** built using ESP32 and MPU9250 sensor. The device reads hand movement from the IMU sensor and sends it via Bluetooth Low Energy (BLE) to control the mouse cursor.

---

## 🚀 Features

- ESP32 BLE Mouse (wireless control)
- MPU9250 accelerometer-based motion tracking
- Real-time cursor movement
- Calibration mode (reset reference angle)
- Low latency response
- PlatformIO based project

---

## 🧠 How it works

1. MPU9250 reads acceleration data (X, Y axes)
2. ESP32 processes sensor values
3. Data is converted into mouse movement
4. ESP32 sends movement via BLE HID (wireless mouse)

---

## 🔧 Hardware Required

- ESP32 Dev Module
- MPU9250 sensor module
- Jumper wires
- Breadboard (optional)

---

## 🔌 Wiring

| MPU9250 | ESP32 |
|--------|------|
| VCC    | 3.3V |
| GND    | GND  |
| SDA    | GPIO 21 |
| SCL    | GPIO 22 |

---

## ⚙️ PlatformIO Configuration

```ini
[env:esp32dev]
platform = espressif32
board = esp32dev
framework = arduino
monitor_speed = 115200

lib_deps =
  https://github.com/T-vK/ESP32-BLE-Mouse.git
```
# ESP32 BLE Hərəkətli Mouse (MPU9250)

Bu layihə ESP32 və MPU9250 sensoru istifadə edərək hazırlanmış **wireless (Bluetooth) hərəkətə əsaslanan mouse sistemidir**.

Sensor əl hərəkətlərini oxuyur və ESP32 həmin hərəkətləri BLE vasitəsilə kompüterə mouse hərəkəti kimi göndərir.

---

## 🚀 Xüsusiyyətlər

- ESP32 BLE Mouse (kabelsiz işləmə)
- MPU9250 ilə hərəkət oxuma (accelerometer)
- Real vaxtda cursor hərəkəti
- Calibration (reset angle) sistemi
- Aşağı gecikmə (low latency)
- PlatformIO ilə hazırlanıb

---

## 🧠 Necə işləyir?

1. MPU9250 əl hərəkətini ölçür (X və Y oxları)
2. ESP32 bu məlumatı oxuyur
3. Dəyərlər mouse hərəkətinə çevrilir
4. BLE (Bluetooth Low Energy) ilə kompüterə göndərilir
5. Cursor hərəkət edir

---

## 🔧 Lazım olan hissələr

- ESP32 Dev Module
- MPU9250 sensor
- Jumper kabellər
- Breadboard (istəyə bağlı)

---

## 🔌 Qoşulma (Wiring)

| MPU9250 | ESP32 |
|--------|------|
| VCC    | 3.3V |
| GND    | GND  |
| SDA    | GPIO 21 |
| SCL    | GPIO 22 |

---

## ⚙️ PlatformIO Konfiqurasiyası

```ini
[env:esp32dev]
platform = espressif32
board = esp32dev
framework = arduino
monitor_speed = 115200

lib_deps =
  https://github.com/T-vK/ESP32-BLE-Mouse.git
```
<img width="960" height="1280" alt="WhatsApp Image 2026-05-12 at 00 40 38" src="https://github.com/user-attachments/assets/665cc9ed-c0af-4f3f-a0c8-82973ff973e0" />

