#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

void find(double data[2001][4], int cntr);
void Display(double data[201][4], int cntr);
void Fill(double x, double y1, double y2, double error, int cntr);
void Calc(double min, double max, double step);

void find(double data[2001][4],int cntr){

    //finds solution
    double solution = data[cntr][3];

    if (solution < 0.1) {

        cout << fixed << setprecision(3) << "\t \t" << "x = solution";

    }

}

void Display(double data[201][4], int cntr) {
     
    //display array while calling for solution find
     cout << cntr << "\t" << fixed << setprecision(3) << "x = " << data[cntr][0] << "\t" << "y1 = " << data[cntr][1] << "\t" << "y2 = " << data[cntr][2] << "\t" << "error = " << data[cntr][3];

     find(data, cntr);

     cout << endl;

}

void Fill(double x, double y1, double y2, double error, int cntr) {

    //fill in array
    double data[201][4];

    data[cntr][0] = x;

    data[cntr][1] = y1;

    data[cntr][2] = y2;

    data[cntr][3] = error;

    Display(data,cntr);

}

void Calc(double min, double max, double step) {

    //math sends to fill
    double x = min;

    int cntr = 0;
    
    while (x <= max) {

        double y1 = pow(x, 2) + x - 4;

        double y2 = ((-.5) * pow(x, 3)) + (.2 * pow(x, 2) + 4 * x - 1);

        double error = abs(y2 - y1);

        Fill(x,y1,y2,error,cntr);

        x += step;

        cntr++;

    }
    

}

int main()
{
    //first data

    double min = -5, max = 5, step = 0.05;

    Calc(min,max,step);

}
