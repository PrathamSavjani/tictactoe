#include <stdio.h>
#include <stdlib.h>

void display();

char T[3][3] = {{'1', '2', '3'},
                {'4', '5', '6'},
                {'7', '8', '9'}};

char p1 = 'X', p2 = 'O';

char player1[30], player2[30], pos;

void isWin()
{
    if (T[0][0] == T[0][1] && T[0][0] == T[0][2] && T[0][1] == T[0][2])
    {
        display();
        if (T[0][0] == 'X')
            printf("%s wins the game\n", player1);
        else
            printf("%s wins the game\n", player2);
        printf("\nHave a good day!!\n");
        exit(1);
    }
    else if (T[0][0] == T[1][0] && T[0][0] == T[2][0] && T[1][0] == T[2][0])
    {
        display();
        if (T[0][0] == 'X')
            printf("%s wins the game\n", player1);
        else
            printf("%s wins the game\n", player2);
        printf("\nHave a good day!!\n");
        exit(1);
    }
    else if (T[0][0] == T[1][1] && T[0][0] == T[2][2] && T[1][1] == T[2][2])
    {
        display();
        if (T[0][0] == 'X')
            printf("%s wins the game\n", player1);
        else
            printf("%s wins the game\n", player2);
        printf("\nHave a good day!!\n");
        exit(1);
    }
    else if (T[0][1] == T[1][1] && T[0][1] == T[2][1] && T[1][1] == T[2][1])
    {
        display();
        if (T[0][1] == 'X')
            printf("%s wins the game\n", player1);
        else
            printf("%s wins the game\n", player2);
        printf("\nHave a good day!!\n");
        exit(1);
    }
    else if (T[0][2] == T[1][2] && T[0][2] == T[2][2] && T[1][2] == T[2][2])
    {
        display();
        if (T[0][2] == 'X')
            printf("%s wins the game\n", player1);
        else
            printf("%s wins the game\n", player2);
        printf("\nHave a good day!!\n");
        exit(1);
    }
    else if (T[1][0] == T[1][1] && T[1][0] == T[1][2] && T[1][1] == T[1][2])
    {
        display();
        if (T[1][0] == 'X')
            printf("%s wins the game\n", player1);
        else
            printf("%s wins the game\n", player2);
        printf("\nHave a good day!!\n");
        exit(1);
    }
    else if (T[2][0] == T[2][1] && T[2][0] == T[2][2] && T[2][1] == T[2][2])
    {
        display();
        if (T[2][0] == 'X')
            printf("%s wins the game\n", player1);
        else
            printf("%s wins the game\n", player2);
        printf("\nHave a good day!!\n");
        exit(1);
    }
    else if (T[2][0] == T[1][1] && T[2][0] == T[0][2] && T[1][1] == T[0][2])
    {
        display();
        if (T[2][0] == 'X')
            printf("%s wins the game\n", player1);
        else
            printf("%s wins the game\n", player2);
        printf("\nHave a good day!!\n");
        exit(1);
    }
}

void display()
{
    system("clear");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", T[0][0], T[0][1], T[0][2]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", T[1][0], T[1][1], T[1][2]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", T[2][0], T[2][1], T[2][2]);

    printf("     |     |     \n\n");
}

void input(char x, char i)
{
    switch (x)
    {
    case '1':
        if (T[0][0] == 'X' || T[0][0] == 'O')
        {
            printf("\nInvalid Operation, system is fucked up");
            exit(1);
        }
        T[0][0] = i;
        break;

    case '2':
        if (T[0][1] == 'X' || T[0][1] == 'O')
        {
            printf("\nInvalid Operation, system is fucked up");
            exit(1);
        }
        T[0][1] = i;
        break;

    case '3':
        if (T[0][2] == 'X' || T[0][2] == 'O')
        {
            printf("\nInvalid Operation, system is fucked up");
            exit(1);
        }
        T[0][2] = i;
        break;

    case '4':
        if (T[1][0] == 'X' || T[1][0] == 'O')
        {
            printf("\nInvalid Operation, system is fucked up");
            exit(1);
        }
        T[1][0] = i;
        break;

    case '5':
        if (T[1][1] == 'X' || T[1][1] == 'O')
        {
            printf("\nInvalid Operation, system is fucked up");
            exit(1);
        }
        T[1][1] = i;
        break;

    case '6':
        if (T[1][2] == 'X' || T[1][2] == 'O')
        {
            printf("\nInvalid Operation, system is fucked up");
            exit(1);
        }
        T[1][2] = i;
        break;

    case '7':
        if (T[2][0] == 'X' || T[2][0] == 'O')
        {
            printf("\nInvalid Operation, system is fucked up");
            exit(1);
        }
        T[2][0] = i;
        break;

    case '8':
        if (T[2][1] == 'X' || T[2][1] == 'O')
        {
            printf("\nInvalid Operation, system is fucked up");
            exit(1);
        }
        T[2][1] = i;
        break;

    case '9':
        if (T[2][2] == 'X' || T[2][2] == 'O')
        {
            printf("\nInvalid Operation, system is fucked up");
            exit(1);
        }
        T[2][2] = i;
        break;

    default:
        break;
    }
}

int main()
{
    printf("\nWelcome to User VS User Tic Tac Toe game\n\n");
    printf("Please enter the name of Player 1: ");
    scanf("%s", player1);
    printf("Please enter the name of Player 2: ");
    scanf("%s", player2);

    for (int i = 0; i < 9; i++)
    {
        if (i % 2 == 0)
        {
            printf("\n");
            display();
            printf("It's %s's turn", player1);
            printf(" please enter the position: ");
            scanf(" %c", &pos);
            input(pos, p1);
            isWin();
        }
        else
        {
            printf("\n");
            display();
            printf("It's %s's turn", player2);
            printf(" please enter the position: ");
            scanf(" %c", &pos);
            input(pos, p2);
            isWin();
        }
    }
    printf("Nobody wins the match is draw\n");
    return 0;
}
