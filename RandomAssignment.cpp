#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    double tempdata[30][4];

    int cntr = 1,high = 0, seed = 3;

    double low = 0,rain = 0;

    srand(seed);

    for (int r = 0; r < 30; r++) {

        tempdata[r][0] = cntr;

        high = rand() % 56 + 50;

        tempdata[r][1] = high;

        low = (rand() % 75 - 20) / 10.0;

        tempdata[r][2] = low;

        rain = (rand() % 101) / 100.0;

        tempdata[r][3] = rain;

        cntr++;

    }

    printf("Day \tHigh \tLow \tRain\n");

    for (int r = 0; r < 30; r++) {

        printf("%-7.0f %-.0f\370\t %-.1f\370\t %-7.2f \n", tempdata[r][0], tempdata[r][1], tempdata[r][2], tempdata[r][3]);

        //printf("\t%i \t%i \t%f \t%f" , tempdata[r][0], tempdata[r][1], tempdata[r][2], tempdata[r][3]);

        //cout << tempdata[r][0] << '\t' << tempdata[r][1] << '\370' << '\t' << tempdata[r][2] << '\370' << '\t' << tempdata[r][3] << endl;

    }

}
