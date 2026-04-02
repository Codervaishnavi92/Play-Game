
# 🎯 Guess The Number Game (C++)

## 📌 Description

This is a simple **console-based number guessing game** 
The player has to guess a randomly generated number between **1 and 100** within a limited number of attempts based on the selected difficulty level.

---

## 🎮 How the Game Works

* The program generates a **random number (1–100)**.
* The user selects a **difficulty level**:

  * Easy → 10 attempts
  * Medium → 7 attempts
  * Hard → 5 attempts
* The user inputs guesses.
* After each guess:

  * The program tells whether the number is **greater or smaller**.
* The game ends when:

  * The user guesses correctly 🎉
  * OR runs out of attempts ❌

---

## 🕹️ Difficulty Levels

| Level  | Attempts |
| ------ | -------- |
| Easy   | 10       |
| Medium | 7        |
| Hard   | 5        |

---

## ▶️ How to Run the Program

### Step 1: Compile

```bash
g++ game.cpp -o game
```

### Step 2: Run

```bash
./game
```

---

## 💻 Sample Gameplay

```
Welcome to the Guess The Number Game!
Enter the difficulty level:
1. Easy
2. Medium
3. Hard

Enter your choice: 1
50
The secret number is greater than the number you have chosen
Now you have 1 Attempts left

75
Well played! You won. 75 is the secret number.
```

---

## 📚 Concepts Used

* Random number generation (`rand()`)
* Loops (`for`)
* Conditional statements (`if-else`)
* Switch case
* User input/output

--

## 👩‍💻 Author

**Vaishnavi Yadav**

Just tell me 👍
