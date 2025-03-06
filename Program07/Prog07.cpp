// Prog07.cpp
// Deacon Steiner
// COSC 1030, Section 12
// Program 07
// 06 Mar 2025

#include<fstream>
#include<iostream>
#include<string>

using std::ifstream;
using std::ofstream;
using std::string;
using std::getline;
using std::cin;
using std::cout;
using std::cerr;
using std::endl;

struct employee
{
    int id;
    char department[25];
    float hours;
};


int main()
{
    string ifile, ofile;
    ifstream inFile;
    ofstream outFile;
    bool err = false;

    do
    {
        cout << "Please enter input file: ";
        getline(cin, ifile);
        cout << "Please enter output file: ";
        getline(cin, ofile);

        inFile.open(ifile.c_str());
        outFile.open(ofile.c_str(), std::ofstream::app);

        err  = false;

        if (!inFile.is_open())
        {
            cerr << "Could not open: " << ifile << endl;
            inFile.clear();
            err = true;
        }

        if (!outFile.is_open())
        {
            cerr << "Could not open: " << ofile << endl;
            outFile.clear();
            err = true;
        }

        if (err)
        {
            if (inFile.is_open())
            {
                inFile.close();
            }

            if (outFile.is_open())
            {
                outFile.close();
            }  
        }
    } while (err);

    int employeeCount = 0;
    float totalHours = 0.0;
    employee rec;

    inFile.read(reinterpret_cast<char *>(&rec),sizeof(rec));
    while (!inFile.eof())
    {
        if (rec.id == 0)
        {
            break;
        }
        
        employeeCount++;
        totalHours += rec.hours;

        inFile.read(reinterpret_cast<char *>(&rec),sizeof(rec));
    }

    float avHours = totalHours / employeeCount;

    outFile << ifile << ": " << employeeCount << " employees. \n";
    outFile << "Total hours: " << totalHours << ", Average per employee: " << avHours << " hours \n";
    outFile << "\n";
    
    inFile.close();
    outFile.close();
   
    return 0;
}