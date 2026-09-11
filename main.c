#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int playerChoice, computerChoice;
    int playerScore = 0, computerScore = 0;
    int round = 1;

    srand(time(NULL));

    printf("Rock Paper Scissors!\n");

    do { 

    printf("\n--- Round %d ---\n", round);
    printf("First to 3 wins!\n");

    printf("Enter your choice (1 = Rock, 2 = Paper, 3 = Scissors): ");
    scanf("%d", &playerChoice);

    computerChoice = rand() % 3 + 1;

    // Displaying the choices
    printf("You chose: ");
    switch (playerChoice) {
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Paper\n");
            break;
        case 3:
            printf("Scissors\n");
            break;
}

    printf("Computer chose: ");
    switch (computerChoice) {
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Paper\n");
            break;
        case 3:
            printf("Scissors\n");
            break;
    }

    //checking the winner of the round
        if (playerChoice == 1) {
        if (computerChoice == 1) {
                printf("It's a tie!\n");
            } else if (computerChoice == 2) {
                printf("Computer wins!\n");
                computerScore++;
            } else {
                printf("You win!\n");
                playerScore++;
            }
        } else if (playerChoice == 2) {
            if (computerChoice == 1) {
                printf("You win!\n");
                playerScore++;
            } else if (computerChoice == 2) {
                printf("It's a tie!\n");
            } else {
                printf("Computer wins!\n");
                computerScore++;
            }
        } else if (playerChoice == 3) {
            if (computerChoice == 1) {
                printf("Computer wins!\n");
                computerScore++;
            } else if (computerChoice == 2) {
                printf("You win!\n");
                playerScore++;
            } else {
                printf("It's a tie!\n");
            }
        } else {
            printf("Invalid choice! Please choose 1, 2, or 3.\n");
        }

    // Displaying the current score    
    printf("\nScore: You %d | Computer %d\n", playerScore, computerScore);
    round++;

    } while (playerScore < 3 && computerScore < 3);
    
    // Displaying the final result
    if (playerScore == 3) {
        printf("Congratulations! You won the game!\n");
    } else {
        printf("Computer won the game! Better luck next time!\n");
    }
    
    return 0;
}
