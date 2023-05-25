#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. Calculate the average of three number.
    int num1 = 23;
    int num2 = 34;
    int num3 = 54;
    int num4 = 12;
    int num5 = 34;

    int sum = num1 + num2 + num3 + num4 + num5;

    double average = (double)sum / 5;

    cout << average << endl;

    // 2. Calculate the area of a circle.​
    const double pi = 3.14159;
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = pi * radius * radius;

    cout << "The area of the circle is: " << area << endl;

    // 3. Calculate the sum of two numbers.
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    int sum = num1 + num2;

    cout << "The sum of the two numbers is: " << sum << endl;

    // 4. Guess the number.
    srand(time(0)); // Seed the random number generator with current time
    int target = rand() % 100; // Generate a random number between 0 and 99

    int guess;
    cout << "Guess the number (between 0 and 99): ";
    cin >> guess;

    if (guess == target) {
        cout << "Congratulations! You guessed the correct number." << endl;
    } else {
        cout << "Sorry, your guess is incorrect. The target number was: " << target << endl;
    }

    return 0;
}