print('Welcome to my terrible guessing game')
guess = input('Guess the number: ')
guess = int(guess)
if guess == 5:
    print('You win!')
else:
    print('You lose.')