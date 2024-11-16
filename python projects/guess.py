#python casino souce code 2.0
import random

print('Welcome to the guessing game')
print('I am thinking of a number between 1 and 10')
print('Do you think you are good enough to guess it\n\n')

# Generate a random number between 1 and 10
# answer = random.randrange(1, 10)
# user_input = int(input("Input your guess: "))
# print('\n', answer)

# if (user_input == answer):
#     print('Hurray you guessed correctly')

# else:
#     print('Better Luck next time😆')


#using a do-while loop
deposit_complt = 'Hurray on your first deposit'
win_msg = 'Hurray! you guessed correctly'
loss_msg = 'Sorry, you lost😢'
deposit_amnt = int(input("How much do you want to deposit: "))
print(deposit_complt)

    #this is where the loop will begin
while True:
    stake_amnt = int(input('How much are you willing to stake: '))
    rem_capital = deposit_amnt - stake_amnt

    answer = random.randrange(1, 10)
    user_input = int(input("Input your guess: "))
            #print('\n', answer)

    if (user_input == answer):
        print(win_msg)
        deposit_amnt = (stake_amnt * 10) + rem_capital
        print(f'Hurray! You earned {stake_amnt * 10} and your new balance is {deposit_amnt}')

    else:
        print(loss_msg)
        deposit_amnt = rem_capital
        print(f'Your balance is {deposit_amnt}')
        print('Better Luck next time😆')

            
    choice = input('Would you like to continue (Yes / No): ')

    if (choice == 'Yes' and deposit_amnt > 0):
        continue
    else:
        break


        #this is where the loop will end with a while condition that the continue value will be true and the deposit amount is above 1.

print(f'You ended with a whooping sum of {deposit_amnt}😆. We miss you a lot so do come back later👋')