/* Write a program for a matchstick game being played between the 
computer and a user. Your program should ensure that the 
computer always wins. Rules for the game are as follows: 

There are 21 matchsticks. 
The computer asks the player to pick 1, 2, 3, or 4 matchsticks. 
After the person picks, the computer does its picking. 
Whoever is forced to pick up the last matchstick loses the game.*/
#include <stdio.h>
int main() {
    int matchsticks = 21;
    int user_pick;

    printf("Welcome to the matchstick game!\n");

    while (matchsticks > 1) {
        // User's turn
        printf("Remaining matchsticks: %d\n", matchsticks);
        printf("Your turn - Pick 1, 2, 3, or 4 matchsticks: ");
        scanf("%d", &user_pick);

        if (user_pick < 1 || user_pick > 4 || user_pick > matchsticks) {
            printf("Invalid choice! Please pick again.\n");
            continue;
        }

        matchsticks -= user_pick;

        printf("Computer picks %d matchsticks.\n", 5 - user_pick);
        matchsticks -= (5 - user_pick);
    }

    if (matchsticks == 1) {
        printf("You picked up the last matchstick. You lose!\n");
    } else {
        printf("The computer picked up the last matchstick. You win!\n");
    }

    return 0;
}
/*OUTPUT:
Welcome to the matchstick game!
Remaining matchsticks: 21
Your turn - Pick 1, 2, 3, or 4 matchsticks: 3
Computer picks 2 matchsticks.
Remaining matchsticks: 16
Your turn - Pick 1, 2, 3, or 4 matchsticks: 2
Computer picks 3 matchsticks.
Remaining matchsticks: 11
Your turn - Pick 1, 2, 3, or 4 matchsticks: 1
Computer picks 4 matchsticks.
Remaining matchsticks: 6
Your turn - Pick 1, 2, 3, or 4 matchsticks: 4
Computer picks 1 matchsticks.
You picked up the last matchstick. You lose!*/