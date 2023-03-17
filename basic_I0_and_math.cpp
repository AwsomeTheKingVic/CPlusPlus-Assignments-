// basic_I0_and_math.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

int main()
{
    
    char finitials, linitials, answer;

    bool Citizenship;

    short int agem, aged;

    float agey;

    int ages;

    cout << "enter first name initials here: ";

    cin >> finitials;

    cout << "enter last name initials here: ";

    cin >> linitials;

    cout << "are you a us citizenship y/n: ";

    cin >> answer;

    if (answer == 'y') {

        Citizenship = true;

        cout << "you are a us citizen" << endl;

    }
    else if (answer == 'n') {

        Citizenship = false;

        cout << "you are a us citizen" << endl;

    }

    cout << "hi: " << finitials << linitials << endl;

    cout << "what is your age in months: ";

    cin >> agem;

    agey = agem / 12;

    cout << "age in years: " << agey << endl;

    aged = agey * 365;

    cout << "age in days: " << aged << endl;

    ages = aged * 86400;

    cout << "age in seconds: " << ages << endl;

}

