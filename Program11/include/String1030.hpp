// String1030.hpp
// Kim Buckner
// COSC 1030
// Program 11
// Header for a class that will handle an implementation
// of strings. 

#ifndef STRING1030_HPP
#define STRING1030_HPP

#include<iostream>

using std::ostream;
using std::istream;
using std::endl;
using std::cerr;

#include<cstring>


/*
 * The class String1030 is for the students to practice implementing
 * more class functions and making sure that their implementation
 * is reasonable.
 *
 * It requires some skill in using arrays and overloading operators.
 *
 * Note that the sentinel value that MUST be part of the storage for our
 * strings is '\0'.  That is not special, it is just a way to tell future
 * readers that we know what we are doing. We could just as well use the 
 * digit 0, but that can be very confusing.
 */

/*
 * If you do not understand any of this, come see me or the TA.
 */

class String1030
{

  public:
      // The constructor.  "nullptr" is used to let us know that 
      // nothing is being passed to the default constructor.
    String1030(const char *buf=nullptr);
      //This next is a "copy" constructor. Remember that
      //we have to create new storage and then copy
      //the array content. We must not just copy the pointer.
    String1030(const String1030& oldstring);
      // The destructor is needed because we are allocating memory.
      // We must deallocate it when the object goes out of
      // scope (is destroyed).
    ~String1030();

      // A simple assignment operator.
    String1030& operator=(const String1030& right);

      // This allows us to change the element at a certain index.
      // refer to the IntList code.
    char& operator[](int index);

      // Returns the number of characters stored excluding the
      // the sentinel value.
    int getSize(void) const;
      // Resizes the storage. Internally must include 1 extra space for the
      // sentinel value. So if the user does obj.setSize(10) YOU 
      // have to make sure that the array is of size 11.
    void setSize(int newsize);
      // Returns a pointer to array storing the string.
      // Not very safe but we don't care. 
    const char *getString();
      // Replace the existing string with a new one. 
      // Like mystring.setString("information");
    void setString(const char *chararray);


  private:
    char *buffer;
    int mysize; // stores the number of characters if there are any
                // otherwise the number of spaces a string COULD be
                // stored in, NOT counting the space for the sentinel. 


};


#endif
