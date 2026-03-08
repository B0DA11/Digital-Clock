# Digital Clock

A simple console-based digital clock application written in C++ that displays the current time with real-time updates.

## Features

- **Interactive Time Input**: Input hours, minutes, and seconds to set the initial time
- **Real-Time Updates**: Clock automatically increments seconds and updates the display continuously
- **24-Hour Format**: Displays time in 24-hour format with automatic rollover
- **Colored Display**: Uses colored text in the console for better visibility
- **Automatic Rollover**: Seconds roll over to minutes, minutes to hours, and hours reset at 24

## Requirements

- **C++ Compiler**: g++, clang, or MSVC
- **Operating System**: Windows (uses `windows.h` library)
- **Standard Libraries**: iostream, windows.h

## Installation & Setup

1. Clone or download the repository:
   ```bash
   git clone <repository-url>
   cd Digital-Clock
   ```

2. Compile the program:
   ```bash
   g++ -o Clock Clock.c++
   ```

3. Run the executable:
   ```bash
   Clock.exe
   ```

## Usage

1. Run the program
2. Enter the starting **hours** (0-23)
3. Enter the starting **minutes** (0-59)
4. Enter the starting **seconds** (0-59)
5. The clock will display and automatically update every second
6. Press `Ctrl+C` to stop the clock

### Example:
```
Hours : 14
Min : 30
Sec : 45
14 : 30 : 45
14 : 30 : 46
14 : 30 : 47
...
```

## Technical Details

- **Display Refresh Rate**: Updates every 900 milliseconds (0.9 seconds)
- **Color Code**: Uses color 6 (yellow on black background)
- **Time Increment**: Seconds increment by 1 for each cycle
- **Console Clearing**: Uses `system("cls")` to clear screen before each update

## How It Works

1. The program prompts user to input initial time values
2. Enters an infinite loop to update and display the time
3. Increments seconds on each iteration
4. Performs time validation:
   - If seconds > 59, reset to 0 and increment minutes
   - If minutes > 59, reset to 0 and increment hours
   - If hours > 23, reset to 0 (midnight)
5. Clears screen and displays updated time

---

**Note**: This application is Windows-specific due to the `windows.h` library usage. For cross-platform compatibility, consider using platform-independent alternatives for sleep and console manipulation functions.
