#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{

    char player = getUserChoice();
    char computer = getComputerChoice();
    std::cout << "You choice: ";
    showChoice(player);

    std::cout << "Computer choice: ";
    showChoice(computer);

    chooseWinner(player, computer);
 
        
    return 0;
}

char getUserChoice()
{
    char player;
    do
    {
        std::cout << "Rock-Paper-Scissor Game!\n";
        std::cout << "========================\n";
        std::cout << "'r' for Rock\n";
        std::cout << "'p' for Paper\n";
        std::cout << "'s' for Scissor\n";
        std::cin >> player;
    }
    while(player != 'r' && player != 'p' && player != 's');
    return player;
}
char getComputerChoice()
{
    srand(time(NULL));
    
    int num = rand() % 3 + 1;
    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3: 
        return 's';
    }
}
void showChoice(char choice)
{
    switch(choice)
    {
        case 'r':
            std::cout << "Rock\n";
            break;
        case 'p':
            std::cout << "Paper\n";
            break;
        case 's':
            std::cout << "Scissors\n";
            break;

    }
}
void chooseWinner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            std::cout << "Is a tie!\n";
        }
        else if (computer == 'p')
        {
            std::cout << "You lose!\n";
        }
        else
        {
            std::cout << "You win!\n";
        }
        break;
    case 'p':
        if (computer == 'p')
        {
            std::cout << "Is a tie!\n";
        }
        else if (computer == 's')
        {
            std::cout << "You lose!\n";
        }
        else
        {
            std::cout << "You win!\n";
        }
        break;
    case 's':
        if (computer == 's')
        {
            std::cout << "Is a tie!\n";
        }
        else if (computer == 'r')
        {
            std::cout << "You lose!\n";
        }
        else
        {
            std::cout << "You win!\n";
        }
        break;
    
    default:
        break;
    }
}