# Tic-Tac-Toe Game in C++

This project is a simple implementation of the classic **Tic-Tac-Toe** game using C++ programming language. It allows two players to play against each other by alternating turns to mark spaces on a 3x3 grid, aiming to place three of their marks in a horizontal, vertical, or diagonal row to win.

## Features

- **Two-player mode**: Two players (Player 1 and Player 2) take turns to mark `X` and `O` on the grid.
- **Game board display**: The board is displayed after each move, showing the current state of the game.
- **Win or Draw Detection**: The game checks for a win or a draw after every move.
- **Restart option**: After the game ends, players have the option to restart the game without re-running the program.

## How the Game Works

- The game starts with Player 1 (who uses the mark `X`) and Player 2 (who uses the mark `O`).
- Players take turns entering a number between 1 and 9 to place their mark on the board at the corresponding position.
- The game board is numbered as follows:

```
    1 | 2 | 3
   ___|___|___
    4 | 5 | 6
   ___|___|___
    7 | 8 | 9
```

- The player wins if they can place three of their marks in a row, either horizontally, vertically, or diagonally.
- If all the positions are filled and no player has three marks in a row, the game ends in a draw.

## Code Structure

- **`checkwin()`**: This function checks the current state of the board to determine if a player has won or if the game has ended in a draw. It returns:
  - `1` if there is a winning condition,
  - `0` if the game is a draw, or
  - `-1` if the game should continue.
  
- **`board()`**: This function prints the Tic-Tac-Toe board showing the current positions of `X` and `O`. It refreshes after each player's move.

- **`main()`**: This function manages the main game loop, handling player turns, input validation, and restarting the game.

## How to Run

1. **Clone the repository or copy the source code** into a file named `tictactoe.cpp`.
2. **Compile the code** using a C++ compiler (e.g., GCC):
   ```
   g++ MAIN.CPP -o MAIN
   ```
3. **Run the executable**:
   ```
   ./MAIN
   ```

## Example Gameplay

### Sample Output:

```
Player 1 (X) - Player 2 (O)

    |   |
  1 | 2 | 3
 ___|___|___
    |   |
  4 | 5 | 6
 ___|___|___
    |   |
  7 | 8 | 9
    |   |

Player 1, enter a number:
==> 5

    |   |
  1 | 2 | 3
 ___|___|___
    |   |
  4 | X | 6
 ___|___|___
    |   |
  7 | 8 | 9
    |   |
```

### Win Example:
```
Player 1, enter a number:
==> 3

    |   |
  X | X | X
 ___|___|___
    |   |
  4 | O | 6
 ___|___|___
    |   |
  7 | O | 9
    |   |

==> Player 1 wins!
```

### Draw Example:
```
Player 1, enter a number:
==> 9

    |   |
  X | O | X
 ___|___|___
    |   |
  O | X | O
 ___|___|___
    |   |
  O | X | X
    |   |

==> Game draw!
```

### Restarting the Game

After the game ends, the player can press any key to restart the game or enter `0` to exit.

## Notes

- The game requires `conio.h` for clearing the screen (`clrscr()`) and handling certain I/O functions, which may not be available on modern systems. You may need to adapt this code if running on newer systems (e.g., replace `clrscr()` with `system("clear")` for Linux or macOS).
- Error handling is in place to catch invalid moves (e.g., selecting an already occupied square), but further enhancements are always possible.

## License

This project is licensed under the MIT License.
