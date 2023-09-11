#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    system("cls");
    printf("SIMPLE ROCK PAPER SCISSORS\n---------------------");
    printf("\n[0]Rock \n[1]Paper \n[2]Scissors\n");
    int a = getchar();
    char r = rand() % 3;

    switch (a)
    {
    case '0':
        printf("You chose: [Rock]\nComputer Chose: ");

        switch (r)
        {
        case 0:
            printf("[Rock]!\n\nSTALEMATE...!");
            break;

        case 1:
            printf("[Paper]!\n\nYOU LOSE...!");
            break;
        case 2:
            printf("[Scissors]!\n\nYOU WON...!");
            break;
        }
        break;
    case '1':
        printf("You chose: [Paper]\nComputer Chose: ");

        switch (r)
        {
        case 0:
            printf("[Rock]!\n\nYOU WIN...!");
            break;

        case 1:
            printf("[Paper]!\n\nSTALEMATE...!");
            break;
        case 2:
            printf("[Scissors]!\n\nYOU LOSE...!");
            break;
        }
        break;
    case '2':
        printf("You chose: [Scissors]\nComputer Chose: ");

        switch (r)
        {
        case 0:
            printf("[Rock]!\n\nYOU LOSE...!");
            break;
        case 1:
            printf("[Paper]!\n\nYOU WIN...!");
            break;
        case 2:
            printf("[Scissors]!\n\nSTALEMATE...!");
            break;
        }
        break;
    default:
        printf("not a valid input...");
    }
}