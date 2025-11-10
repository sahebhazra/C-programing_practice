#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game_start_alert()
{
    printf("The Game is Started\n");
    printf("\tChoose 0 --> Snake\n\tChoose 1 --> Water\n\tChoose 2 --> Gun\n\n");
}

void final_winner(int p_point, int c_point)
{
    printf("Your point: %d\n", p_point);
    printf("Computer point: %d\n\n", c_point);

    if (p_point == c_point)
        printf("Result: The match is a draw!\n");
    else if (p_point > c_point)
        printf("Result: 🎉 You win!\n\n");
    else
        printf("Result: ❌ Computer wins!\n\n");
}

void start_game()
{
    int computer, player;
    int rounds = 5;
    int p_point = 0, c_point = 0;

    char *types[] = {"Snake 🐍", "Water 💧", "Gun 🔫"};

    srand(time(0));

    for (int i = 0; i < rounds; i++)
    {
        printf("Round %d - Your Choice (0/1/2): ", i + 1);
        scanf("%d", &player);

        if (player < 0 || player > 2)
        {
            printf("Invalid input! Please choose either 0, 1, or 2.\n\n");
            i--; // retry this round
            continue;
        }

        computer = rand() % 3;
        printf("You: %s  VS  Computer: %s\n", types[player], types[computer]);

        if (player == computer)
        {
            printf("Result: It's a draw!\n\n");
        }
        else if ((player == 0 && computer == 1) ||
                 (player == 1 && computer == 2) ||
                 (player == 2 && computer == 0))
        {
            printf("Result: ✅ You win this round!\n\n");
            p_point++;
        }
        else
        {
            printf("Result: ❌ Computer wins this round!\n\n");
            c_point++;
        }
    }

    final_winner(p_point, c_point);
}

int main()
{
    game_start_alert();
    start_game();
    return 0;
}
