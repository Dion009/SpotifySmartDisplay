# Changelog

All notable changes to this project will be documented here.

---

## v0.1.0 – Initial Setup
**Date:** July 2026

### Added
- ESP32 Dev Module setup
- TFT_eSPI configured
- ILI9341 display initialized and working
- Basic dashboard UI created
- GitHub repository created

### Status
✅ Project successfully initialized.

---

## v0.2.0 – Project Refactoring
**Date:** July 2026

### Added
- `display.cpp`
- `display.h`

### Changed
- Moved all display rendering functions from `SpotifySmartDisplay.ino` into `display.cpp`
- Simplified the main sketch by separating display logic into dedicated files
- Improved project organization and maintainability

### Status
✅ Display functions correctly with the new modular structure.

---

## v0.3.0 – Smart Wi-Fi
**Date:** July 2026

### Added
- WiFiManager integration
- Automatic Wi-Fi setup portal
- Automatic reconnection to saved Wi-Fi networks
- IP address reporting through the Serial Monitor
- Persistent Wi-Fi credential storage

### Result
- ESP32 automatically connects to previously saved Wi-Fi networks.
- If no credentials are available, it creates the **SpotifyDisplay_Setup** access point for easy configuration.

### Status
✅ Smart Wi-Fi setup is fully operational.

---

## 🚀 Upcoming Features

### v0.4.0 – Live Clock
- Network Time Protocol (NTP) synchronization
- Real-time clock display
- Automatic timezone handling
- Smooth clock updates

### v0.5.0 – Spotify Integration
- Spotify Web API connection
- Current song title
- Artist name
- Playback status
- Device information

### v0.6.0 – Album Artwork
- Download album artwork
- Display cover art
- Image caching
- Smooth artwork refresh

### v0.7.0 – Media Controls
- Play / Pause
- Previous Track
- Next Track
- Shuffle status
- Repeat status
- Volume indicator
- Progress bar improvements

### v0.8.0 – Weather
- Live weather data
- Temperature
- Weather icon
- Location support

### v0.9.0 – Smart Features
- Phone notifications
- RGB ambient lighting
- Smart plug control
- System status indicators

---

## 🎯 Version 1.0.0 – First Stable Release (Planned)

### Features
- Live Spotify display
- Album artwork
- Automatic Wi-Fi configuration
- Live clock
- Weather information
- Playback controls
- RGB ambient lighting
- Smart plug integration
- Phone notifications
- Polished user interface

### Hardware
- ESP32 Dev Module
- 2.8" ILI9341 TFT Display

### Status
🚧 In Development
