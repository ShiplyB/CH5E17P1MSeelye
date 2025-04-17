/*  CH5E17P1MSeelye.cpp
    Miguel S.
    4/17
    This program should be used as a math tutor. 
    The program should display two random dumbers to be added. 
    The program should pause while the student works on the problem. 
    The user press any key to reveal the correct answer to give them time to solve.

    Needed:
    random- for random variables
    iomanip- for output layout
    cin.get- for user input

    Tasks:
    Module 1----------------------------------> Question
    Random variable initialization
    Module 2----------------------------------> User input
    Wait for user input
    Output initialized variables in math format
    Module 3----------------------------------> Answer
    Add variables
    Show correct answer */

#include <iostream>
#include <random>
#include <iomanip>
using namespace std;

int main()
{
    /*Module 1----------------------------------> Question
    Random variable initialization*/

    int min = 1, max = 999, var1, var2, sum;

    random_device rangen;
    uniform_int_distribution<int> mathing(min, max);

    var1 = mathing(rangen);
    var2 = mathing(rangen);

    /*Module 2----------------------------------> User input
    Wait for user input
    Output initialized variables in math format*/

    cout << " " << setw(4) << right << var1 << "\n+" << setw(4) << right << var2 << "\n-----" << "\n";
    cin.get();

    /*Module 3----------------------------------> Answer
    Add variables
    Show correct answer*/

    sum = var1 + var2;
    cout << " " << setw(4) << right << var1 << "\n+" << setw(4) << right << var2 << "\n-----" << "\n" << setw(5) << right << sum;
}

