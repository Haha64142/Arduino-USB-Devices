#!/bin/bash
# file: import_lufa.sh

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

cp -v "$SCRIPT_DIR/../lufa/Demos/Device/ClassDriver/ArduinoMouse/Mouse.hex" "$SCRIPT_DIR/Hex Files"
cp -v "$SCRIPT_DIR/../lufa/Demos/Device/ClassDriver/ArduinoClickMouse/ClickMouse.hex" "$SCRIPT_DIR/Hex Files"