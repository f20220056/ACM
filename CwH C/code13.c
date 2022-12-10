#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// rock=1, paper=2, scissors=3; 3>2, 2>1, 1>3

int gen()
{
    srand(time(NULL));
    return rand() % 3;
}

int player_sc = 0;
int comp_sc = 0;

void game(int round, char name[])
{
    int player, comp;
    printf("\n~~~~~ ROUND: %d ~~~~~\n", round);
    printf("\nChoose an option:-\n   1 --> ROCK\n   2 --> PAPER\n   3 --> SCISSORS\n");
    printf("Enter here: ");
    scanf("%d", &player);
    comp = (gen() + 1);

    printf("\nYou chose: ");
    if (player == 1)
    {
        printf("ROCK\n");
    }
    else if (player == 2)
    {
        printf("PAPER\n");
    }
    else
    {
        printf("SCISSORS\n");
    };

    printf("Computer chose: ");
    if (comp == 1)
    {
        printf("ROCK\n");
    }
    else if (comp == 2)
    {
        printf("PAPER\n");
    }
    else
    {
        printf("SCISSORS\n");
    };

    if (player == comp)
    {
        printf("\n~~~~~ This round is a TIE! ~~~~~\n");
    }
    else if ((player == 3 && comp == 2) || (player == 2 && comp == 1) || (player == 1 && comp == 3))
    {
        player_sc++;
        printf("\n~~~~~ You win this round! ~~~~~\n");
    }
    else
    {
        comp_sc++;
        printf("\n~~~~~ You lose this round! ~~~~~\n");
    };

    printf("\n~~~~~ SCORES (Round %d) ~~~~~\n", round);
    printf("%s: %d\n", name, player_sc); // DOUBT: Printing String
    printf("Computer: %d\n", comp_sc);
}

int main()
{
    int rounds, end;
    char name[20];
    char cont;
    printf("\n~~~~~ Let's play 'Rock, Paper, Scissors' ~~~~~\n\nEnter your name to begin:-\n");
    scanf("%s", name);
label1:
    printf("\nHow many rounds do you want to play?\n");
    scanf("%d", &rounds);
    for (int i = 0; i < rounds; i++)
    {
        game(i + 1, name);
        printf("\nEnter 'c' to continue\n");
        scanf(" %c", &cont);
    }
    if (player_sc > comp_sc)
    {
        printf("\n~~~~~ CONGRATULATIONS! YOU WIN THE GAME! ~~~~~\n");
    }
    else if (player_sc < comp_sc)
    {
        printf("\n~~~~~ You have LOST the game! ~~~~~\n");
    }
    else
    {
        printf("\n~~~~~ The game ends with a TIE! ~~~~~\n");
    }
    printf("\nPress '1' to REPLAY or '0' to QUIT\n");
    scanf("%d", &end);
    if (end == 1)
    {
        player_sc = 0;
        comp_sc = 0;
        goto label1;
    }
    else
    {
        printf("\n~~~~~ Thank you for playing ~~~~~\n\n\n");
    }

    return 0;
}
/*
PROJECT-2: Rock, Paper, Scissors
Date: 09/09/2022
*/