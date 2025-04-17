/*  CH5E17P1MSeelye.cpp... CH5E17P2MSeelye branch
    Miguel S.
    4/17
    This program should be used as a math tutor.
    The program should display two random dumbers to be added.
    The program should pause while the student works on the problem.
    The user should be able to enter their answer.
    The user should be judged on correctness after inputing their answer.
    An incorrect answer should show the user the correct answer.

    Needed:
    random- for random variables
    iomanip- for output layout
    cin.get- for user input
    if else- for answer judgement

    Tasks:
    Module 1----------------------------------> Question
    Random variable initialization
    Module 2----------------------------------> User input
    User input assumed answer
    Output initialized variables in math format
    Module 3----------------------------------> Answer
    Add variables
    If user answer is right, display "correct"
    if user answer is wrong, display "wrong" and show the correct answer*/

#include <iostream>
#include <random>
#include <iomanip>
using namespace std;

int main()
{
    /*Module 1----------------------------------> Question
    Random variable initialization*/

    int min = 1, max = 999, var1, var2, sum, uservar;

    random_device rangen;
    uniform_int_distribution<int> mathing(min, max);

    var1 = mathing(rangen);
    var2 = mathing(rangen);

    /*Module 2----------------------------------> User input
    User input assumed answer
    Output initialized variables in math format*/

    cout << " " << setw(4) << right << var1 << "\n+" << setw(4) << right << var2 << "\n-----" << "\n";
    cin >> uservar;

    /*Module 3----------------------------------> Answer
    Add variables
    If user answer is right, display "correct"
    if user answer is wrong, display "wrong" and show the correct answer*/

    sum = var1 + var2;

    if (sum == uservar)
        cout << " " << setw(4) << right << var1 << "\n+" << setw(4) << right << var2 << "\n-----" << "\n" << setw(5) << right << uservar << "\nCorrect!";
    else
        cout << " " << setw(4) << right << var1 << "\n+" << setw(4) << right << var2 << "\n-----" << "\n" << setw(5) << right << uservar << "\nIncorrect..\nCorrect answer:" << sum;
}