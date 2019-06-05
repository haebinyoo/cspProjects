import random

numberofGuesses = 0
min = 1
max = 1000
number = random.randint(min, max)

print("Hello! What is your name?")
name = input()

min = str(min)
max = str(max)

print(name + ", I am thinking of a number between " + min + " and " + max + ". You have 10 guesses. Can You guess what it is?")

while numberofGuesses < 10:
    print("Take a guess")
    guess = input()
    guess = int(guess)
    numberofGuesses = numberofGuesses + 1
    guessesLeft = 10 - numberofGuesses
    
    if guess < number:
        guessesLeft=str(guessesLeft)
        print("Your guess is too low! You have " + guessesLeft + " guesses left")

    if guess > number:
        guessesLeft=str(guessesLeft)
        print("Your guess is too high! You have " + guessesLeft + " guesses left")

    if guess == number:
        break

if guess == number:
    numberofGuesses=str(numberofGuesses)
    print("Good job! " + name + " You guessed the number in " + numberofGuesses + " tries :)")

if guess != number:
    number=str(number)
    print("Sorry. The number I was thinking of was " + number + " :(")
