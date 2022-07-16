# ESP Black box monitoring

Black box monitoring with ESP32 and ST7789 (WIP).

## Features

- [ ] Monitor
    - [ ] HTTP/HTTPS
    - [ ] TCP
    - [ ] Ping
- [ ] Blink if there's downtime
- [ ] GUI
    - [ ] Display
    - [ ] Web
- [ ] OTA update

## Setup

### Hardware

```
  ┌─────────────────┐
  │              D23├───────────────┐
  │    ┌───────┐    │               │
  │    │       │    │               │
  │    │       │    │               │  ┌────┬───────────┬──┐
  │    │       │    │               │  │BLK │           │  │
  │    │       │    │            ┌──┼──┤DC  │           │  │
  │    └───────┘ D18├────────┐ ┌─┼──┼──┤RES │           │  │
  │                 │        │ │ │  └──┤SDA │           │  │
  │                 │        └─┼─┼─────┤SCL │           │  │
  │                 │          │ │ ┌───┤VCC │           │  │
  │               D4├──────────┘ │ │ ┌─┤GND │           │  │
  │               D2├────────────┘ │ │ └────┴───────────┴──┘
  │                 │              │ │
  │                 │              │ │
┌─┤GND           3V3├──────────────┘ │
│ └─────────────────┘                │
│                                    │
└────────────────────────────────────┘

```

| ESP32 | ST7789 |
| ----- | ------ |
| GND   | GND    |
| 3v3   | VCC    |
| D2    | DC     |
| D4    | RES    |
| D18   | SCL    |
| D23   | SDA    |

### Firmware

Prerequisites:

```sh
paru -S platformio
sudo usermod -aG uucp $USER
```

Build and upload:

```sh
make
```

To open serial console, run the following command and press the <kbd>EN</kbd> button on the board:

```sh
make monitor
```
