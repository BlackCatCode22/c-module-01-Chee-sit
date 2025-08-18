// addTwoInts.cpp
// created by chijenda on 8/18/2025

// References
// https://www.w3schools.com/cpp/cpp_user_input.asp

// This program will get three ints from teh user and output the largest of the Three


#include <iostream>
using namespace std;

int main() {
    cout << "Hello and welcome to MY largest of three ints program. \n";

    // Declare all variables needed
    int num1;
    int num2;
    int num3;
    int sumOFTheints;

    // Initialize all my variables.
    // assign a zero value to my variables
    num1 = 0;
    num2 =0;
    num3 =0;
    sumOFTheints = 0;




    // Get three ints from the user
    // Get num1
    cout << "\n Please enter a value for num1; ";
    cin >> num1;
    cout << "\n You entered " << num1 << " for num1 ";
    // Get num2
    cout << "\n Please enter a value for num2; ";
    cin >> num2;
    cout << "\n You entered " << num2 << " for num2 ";
    // Get num3
    cout << "\n Please enter a value for num3; ";
    cin >> num3;
    cout << "\n You entered " << num3 << " for num3 ";

    // compare num1 and num2
    if (num1 > num2) {
        cout << num1 << "is greater than " << num2;
    } else {
        cout << num2 << "is greater than" << num1;
    }



    return 0;
}

