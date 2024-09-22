# Tic Tac Toe Game

## Overview
This project is a **Tic Tac Toe** game written in **C++** for two players. The game allows Player 1 to play as `X` and Player 2 as `O`. The game is played on a 3x3 grid, and players take turns to mark empty spots with their respective symbol. The first player to align three of their symbols (horizontally, vertically, or diagonally) wins the game.

## Features
- **Two Players**: Player 1 (`X`) and Player 2 (`O`).
- **Turn-Based Gameplay**: Players alternate turns, inputting the position where they want to place their mark.
- **Win Detection**: Automatically checks for a winner after every turn and declares the winner if any player aligns three symbols.
- **Draw Detection**: If all spots are filled and no one wins, the game declares a draw.

## How to Play
1. Each player is prompted to enter a number corresponding to a position on the grid.
2. The available grid positions are displayed as follows:
    ```
       |     |     
     0 |  1  |  2  
    _____|_____|_____
       |     |     
     3 |  4  |  5  
    _____|_____|_____
       |     |     
     6 |  7  |  8  
       |     |     
    ```
3. Player 1 (`X`) and Player 2 (`O`) take turns entering the number of an empty grid position.
4. The game ends when:
   - A player wins by aligning 3 symbols (horizontally, vertically, or diagonally).
   - The game board is filled and no player has won, resulting in a draw.

## Usage

1. **Clone the Repository**:
    ```bash
    git clone https://github.com/yourusername/tic-tac-toe-cpp.git
    cd tic-tac-toe-cpp
    ```

2. **Compile the Code**:
    - Use a C++ compiler such as `g++` to compile the code:
      ```bash
      g++ -o tic-tac-toe tic-tac-toe.cpp
      ```

3. **Run the Game**:
    - After compiling, run the executable:
      ```bash
      ./tic-tac-toe
      ```

4. **Playing the Game**:
    - Follow the on-screen instructions to play the game.
    - Enter the position number (0-9) where you want to place your symbol.

## Future Enhancements
- Add a single-player mode with an AI opponent.
- Enhance the user interface with a graphical display.
- Provide input validation to avoid overwriting existing moves.



## Author
**Hassan Jamshaid**  
For course: **Introduction to Computing**
For any Queries Contact me on my email hjamshaid81@gmail.com 
