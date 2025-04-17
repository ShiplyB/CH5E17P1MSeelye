/*  CH5E17P1MSeelye.cpp... CH5E17P2MSeelye branch
    Miguel S.
    4/17
    This program should be used as a math tutor.
    The program should display options for different arithmetic operations and a quit options.
    Items selected that are not on the menu should result in an error message.
    The program should pause while the student works on the problem.
    The user should be able to enter their answer.
    The user should be judged on correctness after inputing their answer.
    An incorrect answer should show the user the correct answer.
    Menu should appear again after being used.
    Quit option should end program.

    Needed:
    while- loop program
    random- for random variables
    iomanip- for output layout
    cin.get- for user input
    if else- for menu and answer judgement

    Tasks:
    Module 1----------------------------------> Loop/Menu
    Loop program
    User menu
    Module 2----------------------------------> User input
    User input assumed answer
    Output initialized variables in math format
    Module 3----------------------------------> Answer
    Add variables
    If user answer is right, display "correct"
    if user answer is wrong, display "wrong" and show the correct answer
    Module 4----------------------------------> Error/Quit
    Add variables
    If user answer is right, display "correct"
    if user answer is wrong, display "wrong" and show the correct answer*/

#include <iostream>
#include <random>
#include <iomanip>
using namespace std;

int main()
{
    int on = 0;

    while (on == 0)
    {
        /*Module 1----------------------------------> Menu-Question
        Random variable initialization
        Menu selection*/
        
        int min = 1, max = 999, var1, var2, result, uservar;
        float resultd;

        random_device rangen;
        uniform_int_distribution<int> mathing(min, max);

        var1 = mathing(rangen);
        var2 = mathing(rangen);

        char menusel;
        cout << "Select from the following arithmetic operators:\nAddition \"+\"\nSubtraction \"-\"\nMultiplication \"*\"\nDivision \"/\"\nOr Quit program \"q\"\n";
        cin >> menusel;

        if (menusel == '+')
        {
            /*Module 2----------------------------------> User input
                User input assumed answer
                Output initialized variables in math format*/

            cout << " " << setw(4) << right << var1 << "\n+" << setw(4) << right << var2 << "\n-----" << "\n";
            cin >> uservar;

            /*Module 3----------------------------------> Answer
            Add variables
            If user answer is right, display "correct"
            if user answer is wrong, display "wrong" and show the correct answer*/

            result = var1 + var2;

            if (result == uservar)
                cout << " " << setw(4) << right << var1 << "\n+" << setw(4) << right << var2 << "\n-----" << "\n" << setw(5) << right << uservar << "\nCorrect!\n\n";
            else
                cout << " " << setw(4) << right << var1 << "\n+" << setw(4) << right << var2 << "\n-----" << "\n" << setw(5) << right << uservar << "\nIncorrect..\nCorrect answer:" << result << "\n\n";
        }
        else if (menusel == '-')
        {
            /*Module 2----------------------------------> User input
                User input assumed answer
                Output initialized variables in math format*/

            cout << " " << setw(4) << right << var1 << "\n-" << setw(4) << right << var2 << "\n-----" << "\n";
            cin >> uservar;

            /*Module 3----------------------------------> Answer
            Add variables
            If user answer is right, display "correct"
            if user answer is wrong, display "wrong" and show the correct answer*/

            result = var1 - var2;

            if (result == uservar)
                cout << " " << setw(4) << right << var1 << "\n-" << setw(4) << right << var2 << "\n-----" << "\n" << setw(5) << right << uservar << "\nCorrect!\n\n";
            else
                cout << " " << setw(4) << right << var1 << "\n-" << setw(4) << right << var2 << "\n-----" << "\n" << setw(5) << right << uservar << "\nIncorrect..\nCorrect answer:" << result << "\n\n";
        }
        else if (menusel == '*')
        {
            /*Module 2----------------------------------> User input
                User input assumed answer
                Output initialized variables in math format*/

            cout << " " << setw(4) << right << var1 << "\nx" << setw(4) << right << var2 << "\n-----" << "\n";
            cin >> uservar;

            /*Module 3----------------------------------> Answer
            Add variables
            If user answer is right, display "correct"
            if user answer is wrong, display "wrong" and show the correct answer*/

            result = var1 * var2;

            if (result == uservar)
                cout << " " << setw(4) << right << var1 << "\n*" << setw(4) << right << var2 << "\n-----" << "\n" << setw(5) << right << uservar << "\nCorrect!\n\n";
            else
                cout << " " << setw(4) << right << var1 << "\n*" << setw(4) << right << var2 << "\n-----" << "\n" << setw(5) << right << uservar << "\nIncorrect..\nCorrect answer:" << result << "\n\n";
        }
        else if (menusel == '/')
        {
            /*Module 2----------------------------------> User input
                User input assumed answer
                Output initialized variables in math format*/

            cout << " " << setw(4) << right << var1 << "\n/" << setw(4) << right << var2 << "\n-----" << "\n";
            cin >> uservar;

            /*Module 3----------------------------------> Answer
            Add variables
            If user answer is right, display "correct"
            if user answer is wrong, display "wrong" and show the correct answer*/

            float var1d = var1, var2d = var2;
            resultd = var1d / var2d;

            if (resultd == uservar)
                cout << " " << setw(4) << right << var1 << "\n/" << setw(4) << right << var2 << "\n-----" << "\n" << setw(5) << right << uservar << "\nCorrect!\n\n";
            else
                cout << " " << setw(4) << right << var1 << "\n/" << setw(4) << right << var2 << "\n-----" << "\n" << setw(5) << right << uservar << "\nIncorrect..\nCorrect answer:" << resultd << "\n\n";
        }

        /*Module 4----------------------------------> Error/Quit
          Change loop value to end program
          error message for incorrect input*/

        else if (menusel == 'q')
        {
            on += 1;
        }
        else
        {
            cout << "Error: Invalid input\n\n";
        }
    }
}