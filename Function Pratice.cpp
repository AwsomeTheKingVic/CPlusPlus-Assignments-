#include <iostream>
#include <cmath>
using namespace std;

//what we do for fucntions
float inputa();
float inputa();
float inputa();
void area(float a, float b, float h);
void area(float h, float b);
void output(float a, float b, float h);

//inputs for a, b, h
float inputa() {

    float a;

    cout << "Enter a: " << endl;

    cin >> a;

    return a;

}
float inputb() {

    float b;

    cout << "Enter b: " << endl;

    cin >> b;

    return b;

}

float inputh() {

    float h;

    cout << "Enter h: " << endl;

    cin >> h;

    return h;

}
//============

//area code
void area(float a, float b, float h) {

    float A = (a + b) / 2 * h;

    cout << "area for trapezoid is: " << A << endl;

}

void area(float h,float b) {

    float A = .5 * h * b;

    cout << "area for triangle is: " << A << endl;

}

//output
void output(float a, float b, float h) {

    area(a, b, h);

    area(b, h);

}

int main()
{
    
    float a = inputa();

    float b = inputb();

    float h = inputh();

    output(a, b, h);

}
