# The Elevator

A console-based elevator simulator built in C++ for Windows, featuring a custom text-mode UI with keyboard navigation and animated elevator movement.

> ⚠️ Windows only — relies on the Windows Console API (`windows.h`, `conio.h`).

## Features

- Interactive menu navigation using arrow keys (Up / Down / Enter)
- Custom-drawn UI using cursor positioning and box-drawing characters
- Animated elevator movement between floors (Parking, Lobby, Floors 1–5)
- Tracks the elevator's current position and prevents redundant moves (e.g. selecting the floor you're already on) using exception handling

## How It Works

1. The program displays a welcome message and waits for user input.
2. The user navigates a floor menu with the arrow keys and confirms a selection with Enter.
3. The elevator "moves" to the selected floor, shown through an ASCII animation drawn character-by-character in the console.
4. The current position updates, and the user returns to the menu to select another floor or shut down the elevator.

## Tech Stack

- **Language:** C++
- **Platform API:** Windows Console API (cursor control, text color, console i/o)

## How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/AmIprogramme/The-elevator.git
   ```
2. Open and build the project in a Windows C++ environment (e.g. Code::Blocks, Visual Studio, or g++ via MinGW).
3. Run the compiled `.exe` on Windows (not compatible with mobile or non-Windows terminals).
4. Use the Up/Down arrow keys to select a floor and Enter to confirm.

## Status

This is a learning project developed to practice control flow, console I/O manipulation, and basic exception handling in C++.

## Diagram
![image alt](https://github.com/AmIprogramme/The-elevator/blob/af5454d9eb41284189a535010152375fdac05aa7/diagram-export-24-7-2024-18_53_04.png)

## Author

**Andrés Quesada Rodríguez**
[LinkedIn](https://www.linkedin.com/in/andres-quesada-rodr%C3%ADguez-894213243) · andresquesada7501@gmail.com
