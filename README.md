# 🛡️ Simple Packet Sniffer (C++)

> A lightweight, multi-threaded network traffic analyzer and packet simulation tool built in C++.

![Language](https://img.shields.io/badge/Language-C++17-blue) ![Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20Linux-lightgrey) ![License](https://img.shields.io/badge/License-MIT-green)

## 📖 Overview
This project is a command-line tool designed to simulate and analyze network traffic. It mimics the core functionality of professional tools like Wireshark by capturing data packets, parsing their headers, and inspecting raw memory payloads.

I built this project to demonstrate low-level systems programming concepts, including:
* **Object-Oriented Design (OOP):** Modular architecture separating Interface (`sniffer.h`) from Implementation (`sniffer.cpp`).
* **Memory Management:** Handling raw binary data and hex formatting.
* **Concurrency:** Using `std::thread` to simulate real-time network latency.

## 🚀 Features
* **Traffic Simulation:** Generates synthetic TCP/UDP packets with randomized payloads.
* **Protocol Detection:** Identifies packet types based on simulated headers.
* **Hex Dump Engine:** Converts raw binary payloads into human-readable hexadecimal format.
* **Real-time Logging:** timestamps and analyzes packets as they "arrive."

## 📂 Project Structure
```text
Simple-Packet-Sniffer/
├── include/        # Header files (The "Contract")
│   ├── sniffer.h   # Sniffer Class Definition
│   └── utils.h     # Helper utilities (Hex tools)
├── src/            # Source code (The "Logic")
│   ├── main.cpp    # Entry point
│   ├── sniffer.cpp # Sniffer implementation
│   └── utils.cpp   # Utility implementation
├── CMakeLists.txt  # Build configuration
└── README.md       # Documentation