// String1030.cpp
// Deacon Steiner
// COSC 1030, Section 12
// Program 11
// 09 Apr 2025

#include "String1030.hpp"

String1030::String1030(const char* buf)
{
  if (buf == nullptr)
  {
    buffer = new char[1];
    buffer[0] = '\0';
    mysize = 0;
  }
  else
  {
    mysize = strlen(buf);
    buffer = new char[mysize + 1];
    strcpy(buffer, buf);
  }
}

String1030::String1030(const String1030& oldstring)
{
  mysize = oldstring.mysize;

  buffer = new char[mysize + 1];

  strcpy(buffer, oldstring.buffer);
}

String1030::~String1030()
{
  delete[] buffer;
}

String1030 &String1030::operator=(const String1030& right)
{
  if (this == &right) return *this;

  delete[] buffer;

  mysize = right.mysize;
  buffer = new char[mysize + 1];

  strcpy(buffer, right.buffer);

  return *this;
}

char& String1030::operator[](int index)
{
  return buffer[index];
}

int String1030::getSize(void) const
{
  return mysize;
}

void String1030::setSize(int newSize)
{
  if (newSize < 0)
  {
    return;
  }
  
  if (newSize == 0)
  {
    delete[] buffer;
    buffer = new char[1];
    buffer[0] = '\0';
    mysize = 0; 
    return;
  }
  

  char* newBuffer = new char[newSize + 1];

  int copySize = (newSize < mysize) ? newSize : mysize;
  for (int i = 0; i < copySize; i++)
  {
    newBuffer[i] = buffer[i];
  }

  newBuffer[copySize] = '\0';

  delete[] buffer;

  buffer = newBuffer;

  mysize = newSize;
}

const char* String1030::getString()
{
  return buffer;
}

void String1030::setString(const char *chararray)
{
  if (chararray == nullptr)
  {
    buffer = new char[1];
    buffer[0] = '\0';
    mysize = 0;
  }
  else{
    int newSize = strlen(chararray);

    char* newBuffer = new char[newSize + 1];

    strcpy(newBuffer, chararray);

    delete[] buffer;

    buffer = newBuffer;

    mysize = newSize;
  }
}
