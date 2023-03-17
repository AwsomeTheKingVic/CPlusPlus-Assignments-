// Conditional_Statements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

    int Y1, Y2, Y3, Y4, Y5, Y6;

    int X1, X2, X3, X4, X5, X6;

    float M1, M2;

    //user input here M1

    cout << "Enter first Y cord for slope one" << endl;

    cin >> Y1;

    cout << "Enter first X cord for slope one" << endl;

    cin >> X1;

    cout << "Enter second Y cord for slope one" << endl;

    cin >> Y2;

    cout << "Enter second X cord for slope one" << endl;

    cin >> X2;

    //------------------

    Y3 = Y2 - Y1;

    X3 = X2 - X1;

    // kick them out if the line is undefined and start again

    if (X3 == 0) {

        cout << "this slope in Undefined" << endl;

    }

    M1 = Y3 / X3;

    //user input here M2

    cout << "Enter first Y cord for slope two" << endl;

    cin >> Y4;

    cout << "Enter first X cord for slope two" << endl;

    cin >> X4;

    cout << "Enter second Y cord for slope two" << endl;

    cin >> Y5;

    cout << "Enter second X cord for slope two" << endl;

    cin >> X5;

    //------------------

    Y6 = Y5 - Y4;

    X6 = X5 - X4;

    // kick them out if the line is undefined and start again

    if (X6 == 0) {

        cout << "this slope in Undefined" << endl;

    }

    M2 = Y6 / X6;

    // figuring out if they are perpendicular or parallel lines

    if (M1 == M2) {

        cout << "the slope parallel" << endl;

        if (M1 < 0 && M2 < 0) {

            cout << "the slope parallel positive" << endl;

        }
        else if (M1 > 0 && M2 > 0) {

            cout << "the slope parallel negative" << endl;

        }

    }

    if (M1 == (-1/M2)) {

        cout << "the slopes are perpendicular" << endl;

    }

}
