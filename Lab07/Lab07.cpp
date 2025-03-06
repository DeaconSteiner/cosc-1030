// Lab07.cpp
// Deacon Steiner
// COSC 1030, Section 12
// Lab 07
// Mar 05, 2025

#include<fstream>
#include<iostream>
#include<string>

using std::ifstream;
using std::ofstream;
using std::string;
using std::getline;
using std::cin;
using std::cout;
using std:: cerr;
using std::endl;

int main() 
{
    string inBuf, ifile, ofile;
    ifstream inFile;
    ofstream outFile;

    cout << "Please enter two filenames. (Press Enter after each) \n" << "I'll copy the first to the second" << endl;

    getline(cin, ifile);
    getline(cin, ofile);

    inFile.open(ifile.c_str());
    outFile.open(ofile.c_str());

    bool err = false;

    while (!inFile.is_open() || !outFile.is_open())
    {
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
            inFile.close();
            outFile.close();
        }
        
        cout << "Please enter two filenames. \n" << "I'll copy the first to the second" << endl;

        getline(cin, ifile);
        getline(cin, ofile);

        inFile.open(ifile.c_str());
        outFile.open(ofile.c_str());
    }

    getline(inFile, inBuf);
    while (!inFile.eof())
    {
        outFile << inBuf << "\n";
        getline(inFile, inBuf);
    }

    inFile.close();
    outFile.close();

    cout << "***DONE COPYING***" << endl;

    return 0;
}