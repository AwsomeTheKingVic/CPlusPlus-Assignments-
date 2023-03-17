
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

const float pi = 3.14;
const float counts_per_Rotaion = 909.7;
const float Diameter = 3.8;

void output(float zumoN[20][5]) {

    cout << "Copied dataset" << endl;

    for (int r = 1; r < 20; r++) {


        cout << "Time: " << zumoN[r][0] << "\tLeft_Dist: " << zumoN[r][1] << "\tRight_Dist: " << zumoN[r][2] << "\tTotal Dist: " << zumoN[r][3] << "\tSpeed: " << zumoN[r][4] << endl;


    }

}

int main()
{

    float leftDis, rightDis, totalDis, preDis, Speed, CLcount, CRcount, Time, preTime;

    Time = 0;

    totalDis = 0;

    float zumoD[20][3] = { {0,0,0},
        {105,20,25},{210,60,70},{315,115,130},{420,185,205},{528,260,288},{636,335,371},
        {738,410,448},{839,475,514},{940,540,580},{1042,610,652},{1139,680,719},{1236,740,776},
        {1334,800,834},{1434,855,889},{1534,910,944},{1635,950,985},{1737,990,1027},{1840,1035,1075},{1944,1080,1124}};

    float zumoN[20][5];

    cout << "dataset" << endl;

    for (int r = 1; r < 20; r++) {

        preTime = Time;

        Time = zumoD[r][0];

        zumoN[r][0] = Time;

        CLcount = zumoD[r][1];

        CRcount = zumoD[r][2];

        leftDis = Diameter * pi * (CLcount / counts_per_Rotaion);

        zumoN[r][1] = leftDis;

        rightDis = Diameter * pi * (CRcount / counts_per_Rotaion);

        zumoN[r][2] = rightDis;

        preDis = totalDis;

        totalDis = (leftDis + rightDis) / 2;

        zumoN[r][3] = totalDis;

        Speed = 1000 * (totalDis - preDis) / (Time - preTime);

        zumoN[r][4] = Speed;

        cout << fixed << setprecision(3) << "Time: " << Time << "\tLeft_Dist: " << leftDis << "\tRight_Dist: " << rightDis << "\tTotal Dist: " << totalDis << "\tSpeed: " << Speed << endl;

    }

    cout << "\n========================================================================================================================\n";
    
    output(zumoN);

}
