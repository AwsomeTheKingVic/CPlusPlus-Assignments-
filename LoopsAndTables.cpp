#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    
    const int a = 2, b = 3, c = 4, d = 5, e = 6;

    float Start, Middle, End, X, Y, Counter;

    cout << "Enter the Start number here: ";

    cin >> Start;

    cout << "Enter the Ending number here: ";

    cin >> End;

    cout << "Enter the step size: ";

    cin >> Counter;

    cout << Start << '\t'<< "|" << End << endl;

    cout << "________|________" << endl;

    for (Middle = Start; Middle <= End; Middle += Counter) {

        X = Middle;

        Y = (a * pow(Middle, 4)) + (b * pow(Middle, 3)) + (c * pow(Middle, 2)) + (d * abs(Middle)) + (e * cbrt(Middle));

        cout << X << '\t' << "| " << Y << endl;

    }



}
