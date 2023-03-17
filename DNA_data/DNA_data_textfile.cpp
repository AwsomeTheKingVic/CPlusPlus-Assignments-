#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    
    string DNA;
    string DNA_Clean;
    string unwanted = "0123456789 ";

    bool found = false;
    int location = 0;

    ifstream Readfile("DNA_data.txt", ios::in);
    ofstream writefile("DNA_data_clean.txt", ios::out);

    if (Readfile.good()) {

        cout << "File Opened" << endl;

    }
    else {

        cout << "Something went wrong" << endl;

    }

    while (!Readfile.eof()) {

        if (!Readfile.good()) {

            cout << "Something went wrong" << endl;

        }

        getline(Readfile, DNA, '\n');
        
        if (found == true) {

            DNA_Clean.append(DNA);

        }
        

        if (DNA.substr(0, 6) == "ORIGIN") {

            found = true;

        }

    }

    while (DNA_Clean.find_first_of(unwanted, location) != string::npos) {

        location = DNA_Clean.find_first_of(unwanted, location);

        DNA_Clean.erase(location, 1);

    }

    writefile << DNA_Clean << endl;

    Readfile.close();
    writefile.close();

    //cout << DNA_Clean << endl;

    cout << "done" << endl;

    return 0;
}

