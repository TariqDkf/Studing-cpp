#include <iostream>

int main()
{

    std::string questions[] = 
    {
        "1. What year was C++ created?: ",
        "2. Who inveted C++?: ",
        "3. What is the prodecessor of C++?: ",
        "4. Is the Earth flat?: ",
    };

    std::string options[][4] = 
    {{
        "A. 1968",
        "B. 1975",
        "C. 1985",
        "D. 1989",
    },
    {
        "A. Guido van Rossoum",
        "B. Bjarne Stroupstrup",
        "C. Jhon Carmack",
        "D. Mark Zuckerburg",
    },
    {
        "A. C",
        "B. C+",
        "C. C--",
        "D. B++",
    },
    {
        "A. Yes",
        "B. No",
        "C. Sometimes",
        "D. What's Earth?"
    }};

    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    for(int i = 0; i < size; i++)
    {
        std::cout << questions[i] << "\n";

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++)
        {
            std::cout << options[i][j] << "\n";
        }
        std::cin >> guess;
        guess = toupper(guess);

        if (guess == answerKey[i])
        {
            score++;
            std::cout << "Correct!\n";
        }
        else
        {
            std::cout << "Wrong!\n";
            std::cout << "Correct answer is " << answerKey[i] << "\n";
        }
    }

    std::cout << "******************************\n";
    std::cout << "            RESULTS           \n";
    std::cout << "******************************\n";
    std::cout << "CORRECT GUESSES: " << score << "\n";
    std::cout << "# OF QUESTIONS: " << size << "\n";
    std::cout << "SCORE: " << (score/(double)size) * 100 << "%";


    return 0;
}