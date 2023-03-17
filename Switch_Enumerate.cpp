#include <iostream>
using namespace std;

int main()
{
    //make the enum
    enum agencies { IRS = 0, DNR, USDA, ATF, ACF, BLM, CDC, FBI, CIA, DOC, DOD, FAA, FCC, EPA, FEMA, FDIC, FHA, USGS, DHS, DOJ, DOL, NPS, NFS };

    //enum into array name take a number
    agencies x[23] = { IRS, DNR, USDA, ATF, ACF, BLM, CDC, FBI, CIA, DOC, DOD, FAA, FCC, EPA, FEMA, FDIC, FHA, USGS, DHS, DOJ, DOL, NPS, NFS };

    //make array for the names
    string names[23] = { "IRS", "DNR", "USDA", "ATF", "ACF", "BLM", "CDC", "FBI", "CIA", "DOC", "DOD", "FAA", "FCC", "EPA", "FEMA", "FDIC", "FHA", "USGS", "DHS", "DOJ", "DOL", "NPS", "NFS" };

    for (int i = 0; i < 23; i++) {

        //case statement if event matches do whats in case
        switch (x[i]) {

        case FBI: case CIA: case ATF: case FAA: case DHS: case DOJ:

            cout << names[i] << '\t' << "Law Enforcement" << endl;

            break;

        case DNR: case USDA: case BLM: case EPA: case NPS:

            cout << names[i] << '\t' << "Land" << endl;

            break;

        case IRS: case DOC: case FDIC:

            cout << names[i] << '\t' << "Money" << endl;

            break;

        case CDC: case ACF: case DOD: case FCC: case FEMA: case FHA: case USGS: case DOL: case NFS:

            cout << names[i] << '\t' << "public health and safety" << endl;

            break;

        }

    }

}
