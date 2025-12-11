# Number Guessing Game in C++

This is a simple and fun number guessing game written in C++ using Object-Oriented Programming (OOP).  
The program randomly selects a number between **1 and 100**, and the player must guess it.

---

## Gameplay Instructions
- The computer picks a number from **1 to 100**.
- You enter your guesses one by one.
- The game gives hints:
  - **"Too cold"** — your guess is lower than the number.
  - **"Too hot"** — your guess is higher than the number.
- The game stops when you guess correctly.
- It displays the total number of attempts you took.

---

## 🧠 Features
- Random number generation using `rand()` and `srand(time(0))`
- OOP implementation using a class `guessinggame`
- Gives hot/cold hints
- Counts total attempts
- Simple and beginner-friendly

---

## How to Run

### **1. Compile**
```bash
g++ guessinggame.cpp -o guessinggame
