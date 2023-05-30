#include <iostream>
using namespace std;

int main()
{
    
    // IF-ELSE STATEMENTS

    int age;
    cout << "Enter your Age:- ";
    cin >> age;

    if(age >= 18)
    {
        cout << "You can Vote!" << endl;
    }
    else
    {
        cout << "Sorry, you're not old enough to vote." << endl;
    }
    
    // c++ program to check the given number is even or odd

    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(num % 2 == 0)
    {
        cout << "The number is even." << endl;
    }
    else
    {
        cout << "The number is odd." << endl;
    }

    // LOOPS

    // FOR LOOP
    cout << "For Loop: " << endl;
    for (int i = 0; i <= 5; i++)
    {
        cout << i << endl;
    }
    
    // WHILE LOOP
    cout << "While Loop: " << endl;
    int i = 1;
    while (i <= 5)
    {
        cout << i << endl;
        i++;
    }
    
    // DO-WHILE LOOP
    cout << "Do-While Loop: " << endl;
    int k = 1;
    do
    {
        cout << k << endl;
        k++;
    } while (k <= 5);

    // Print the multiplication table of a number using a loop

    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Multiplication Table of " << number << "(For loop):" << endl;

    // For Loop
    for (int i = 1; i <= 10; i++)
    {
        int result = number * i;
        cout << number << " * " << i << " = " << result << endl;
    }

    // While Loop
    int i = 1;
    cout << "Multiplication Table of " << number << " (while loop):" << endl;
    while (i <= 10)
    {
        int result = number * i;
        cout << number << " * " << i << " = " << result << endl;
        i++;
    }

    // Do-While Loop
    int k = 1;
    cout << "Multiplication Table of " << number << " (do-while loop):" << std::endl;
    do
    {
        int result = number * k;
        cout << number << " * " << k << " = " << result << endl;
        k++;
    } while (k <= 10);   

    return 0;
}