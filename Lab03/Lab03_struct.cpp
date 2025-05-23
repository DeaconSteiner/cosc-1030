// Lab03_struct.cpp
// Deacon Steiner
// COSC 1030, section 12
// Lab03

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// Declare a simple structure to hold a date.
struct Date
{
  int month;
  int day;
  int year;
};

// Here are prototypes for access functions associated with Date.
void fillDate( Date& );
void showDate( Date );

// A Date can be used as a component of another structure.
struct Person
{
  int height;
  int weight;
  Date birthday;
  Date measurement; // added measure date 
};

// Here is a prototype for a function to access a Person
void showPerson( Person );

int main()
{
  Date first={10,6,2000};  // Here is initialization on the fly.
  Date second;             // No initialization, so need to fill later.

  cout << endl;
  fillDate(second);       // Here is initialization with a helper function.
  cout << "\n\nPrinting the dates:" << endl;
  showDate(first);        // Then display the results for either.
  showDate(second);

  Person Joe;              // Some examples for manipulating a person
  Joe.height=72;
  Joe.weight=180;
  cout << endl;
  cout << "Birthday: " << endl;
  fillDate(Joe.birthday);
  cout << "\nMeasure date: " << endl; // output measure date
  fillDate(Joe.measurement); // output measure date

  cout << endl << "\nJoe was born in " << Joe.birthday.year << endl;
  //cout << "Here's Joe:" << endl; // removed line to match listing
  showPerson(Joe);

  Person Fred={74,200,{11,27,1968}, {6,21,2007}}; // Here's the direct initializer.
  cout << "\nAnd here is Fred." << endl;
  showPerson(Fred);
  cout << endl;

  return(0);
}

void fillDate(Date& the_date)
{
  int  tmp;
  // Enter the month with some verification of data.
  do {
    cout << "Enter month as integer 1-12:  ";
    cin  >> tmp;
  } while( tmp<1 || tmp>12);
  the_date.month=tmp;
  // Enter the day, limited verification.
  do {
    cout << "Enter day as integer 1-31:  ";
    cin  >> tmp;
  } while( tmp<1 || tmp>31);
  the_date.day=tmp;
  cout << "Enter year as integer:  ";
  cin  >> the_date.year;
}

void showDate(Date the_date)
{
  cout << the_date.month << "/" 
    << the_date.day << "/"
    << the_date.year << endl;
}

void showPerson(Person the_person)
{
  cout << "Height is " << the_person.height << endl
    << "Weight is " << the_person.weight << endl
    << "Last measured on: "; // added measure info to showPerson function
  showDate(the_person.measurement); // added measure info to showPerson function
  cout << "Birthday: ";
  showDate(the_person.birthday);
}
