# Arduino Reaction Time Game Project

A two-player reaction time game built with Arduino, using LEDs, buttons, and a buzzer.

## How to Play

1. The game cycles through green, yellow, and red lights, each with a buzzer beep.
2. After a random delay, the red light turns off—this is the "GO!" signal.
3. The first player to press their button wins! Their white LED stays on, and a buzzer pattern plays.
4. The game then resets for the next round.

## Hardware Required

- Arduino UNO (or compatible)
- 3 LEDs (green, yellow, red)
- 2 white LEDs (player indicators)
- 2 push-buttons
- 1 buzzer
- Resistors (for LEDs and buttons)
- Breadboard and jumper wires

## Pin Connections

| Function           | Arduino Pin |
|--------------------|------------|
| Green LED          | 11         |
| Yellow LED         | 10         |
| Red LED            | 9          |
| Player 1 White LED | 12         |
| Player 2 White LED | 8          |
| Buzzer             | 7          |
| Player 1 Button    | 13         |
| Player 2 Button    | 6          |

> Buttons use INPUT_PULLUP, so connect one side to the pin and the other to GND.

## Getting Started

1. Wire components as above.
2. Open `reaction_game.ino` in the Arduino IDE.
3. Select your board and port.
4. Upload the code and start playing!

## License

MIT

---

Enjoy your game!