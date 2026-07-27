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
- `wifi_manager.cpp`
- `wifi_manager.h`
- `spotify.cpp`
- `spotify.h`
- `clock_manager.cpp`
- `clock_manager.h`

### Changed
- Moved display rendering functions from `SpotifySmartDisplay.ino` into `display.cpp`
- Separated Wi-Fi management into its own module
- Separated Spotify communication into its own module
- Separated clock functionality into its own module
- Simplified the main sketch
- Improved code organization and maintainability

### Status
✅ Project successfully refactored into a modular architecture.

---

## v0.3.0 – Smart Wi-Fi
**Date:** July 2026

### Added
- WiFiManager integration
- Automatic Wi-Fi setup portal
- Automatic reconnection to saved Wi-Fi networks
- Persistent Wi-Fi credential storage
- IP address reporting through the Serial Monitor

### Result
- ESP32 automatically reconnects to previously saved Wi-Fi.
- Creates **SpotifyDisplay_Setup** access point when credentials are unavailable.

### Status
✅ Smart Wi-Fi setup fully operational.

---

## v0.4.0 – Live Clock
**Date:** July 2026

### Added
- Network Time Protocol (NTP) synchronization
- Live clock using internet time
- Automatic time synchronization
- Efficient clock updates without refreshing the entire display

### Changed
- Dashboard header now displays the current time.

### Status
✅ Live clock synchronized successfully and displayed on the TFT.

---

## v0.5.0 – Spotify Backend Complete
**Date:** July 2026

### Added
- Spotify Web API authentication
- Secure authentication using Client ID, Client Secret and Refresh Token
- Automatic access token refresh
- Current playback information
- Song title retrieval
- Artist name retrieval
- Album name retrieval
- Album artwork URL retrieval
- Playback status detection (Playing / Paused)
- Song progress tracking
- Song duration tracking
- Active Spotify device detection
- Device type detection
- Volume percentage detection

### Improved
- Better JSON parsing
- Improved Spotify API error handling
- Automatic token refresh when expired
- Enhanced Serial Monitor debugging
- Cleaner Spotify module

### Current Dashboard
- Live clock
- Wi-Fi status
- Album artwork placeholder
- Song title
- Artist name
- Progress bar
- Playback control icons
- Volume indicator

### Status
✅ Spotify backend fully functional and stable.

---

# 🚀 Upcoming Features

## v0.6.0 – Album Artwork
- Download album artwork directly from Spotify
- JPEG decoding
- Display album cover on TFT
- Artwork caching
- Automatic artwork refresh when songs change

---

## v0.7.0 – Enhanced Media Controls
- Rotary encoder support
- Play / Pause
- Previous Track
- Next Track
- Shuffle indicator
- Repeat indicator
- Improved progress bar
- Better playback animations

---

## v0.8.0 – Weather Integration
- Live weather information
- Temperature
- Weather icons
- Location support

---

## v0.9.0 – Smart Features
- Phone notifications
- RGB ambient lighting
- Smart plug control
- Battery status
- System status indicators

---

# 🎯 Version 1.0.0 – First Stable Release (Planned)

## Features
- Spotify Now Playing display
- Album artwork
- Live clock
- Automatic Wi-Fi configuration
- Weather information
- Media controls
- RGB ambient lighting
- Smart plug integration
- Phone notifications
- Smooth animations
- Professional Spotify-inspired interface

## Hardware
- ESP32 Dev Module
- 2.8" ILI9341 TFT Display
- Rotary Encoder
- WS2812B RGB LEDs
