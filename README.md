# 🛡️ Multi-Sensor Security System – Shoebox Vault Model (Arduino)

A miniature security system built for a **Computer Architecture project**, simulating a vault protection mechanism inside a shoebox using **IR**, **PIR**, and **Laser-LDR** sensors. When any sensor is triggered, a buzzer sounds and real-time alerts are printed to the Serial Monitor.

---

## 🔧 Hardware Used

- 📦 **Shoebox** – Acts as the vault room model
- 👁️ **IR Sensor** – Detects obstacle (e.g., someone blocking or passing through)
- 🕴️ **PIR Motion Sensor** – Detects human movement in the area
- 🔦 **Laser + LDR Pair** – Break-beam tripwire system
- 🔊 **Buzzer** – Sounds an alert on intrusion
- 🔌 **Arduino UNO** – Main microcontroller

---

## ⚙️ Circuit Connections

| Component       | Arduino Pin |
|----------------|-------------|
| IR Sensor OUT   | D2          |
| PIR Sensor OUT  | D3          |
| LDR Sensor OUT  | D4          |
| Buzzer +        | D5          |
| GNDs            | GND         |
| VCCs            | 5V          |

> Ensure that the **laser** is aimed precisely at the **LDR** for consistent detection.

---

## 🧠 How It Works

- **IR Sensor (D2)**:
  - `LOW` means **obstacle detected**
- **PIR Sensor (D3)**:
  - `HIGH` means **motion detected**
- **LDR Sensor (D4)**:
  - `LOW` means **laser beam broken**
- If **any sensor is triggered**, the **buzzer sounds** and a warning is printed to the Serial Monitor.

---
