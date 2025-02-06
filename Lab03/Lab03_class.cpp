// Lab03_class.cpp
// Deacon Steiner
// COSC 1030, section 12
// Lab03

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// Declare a simple class to hold a date.
class Date
{
private:
  int month;
  int day;
public:
  int year;
  void fill(void );
  void show(void );
};

// A Date can be used as a component of another class
class Person
{
public:
  int height;
  int weight;
  Date birthday;
  Date measurement; //added measure date
  void show(void);
};

int main()
{
  Date first;    // Declaration with no initialization.

  cout << endl;
  first.fill();  // Here is initialization with a member function.
  cout << "\nPrinting the date:" << endl;
  first.show();  // Then display the results for either.

  Person Joe;    // Some examples for manipulating a person
  Joe.height=72; // Because these fields are public, we have direct access.
  Joe.weight=180;
  cout << endl;
  cout << "Birthday: " << endl;
  Joe.birthday.fill();
  cout << "\nMeasure date: " << endl;
  Joe.measurement.fill();
  cout << "\n\nJoe was born in " << Joe.birthday.year << endl;
  cout << "\nAnd here is Joe:" << endl;
  Joe.show();
  cout << "\nJoe was last measured in " << Joe.measurement.year << endl;
  cout << endl;

  return(0);
}

// Here are the member function definitions.  Note use of scoping operator ::
void Date::fill(void)
{
  int  tmp;
  // Enter the month with some verification of data.
  do {
    cout << "Enter month as integer 1-12:  ";
    cin  >> tmp;
  } while( tmp<1 || tmp>12);
  month=tmp;
  // Enter the day, limited verification.
  do {
    cout << "Enter day as integer 1-31:  ";
    cin  >> tmp;
  } while( tmp<1 || tmp>31);
  day=tmp;
  cout << "Enter year as integer:  ";
  cin  >> year;
  /* cout << "You entered this date:\n\t";
  show(); */ // removed this line because it was not in the listing
}

void Date::show(void)
{
  cout << month << "/" 
    << day << "/"
    << year << endl;
}

void Person::show(void)
{
  cout << "Height is " << height << endl
    << "Weight is " << weight << endl
    << "Last measured on ";
    measurement.show();
  cout << "Birthday is ";
  birthday.show();
}
