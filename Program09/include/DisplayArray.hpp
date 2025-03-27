// DisplayArray.hpp
// Kim Buckner
// COSC 1030
// Program 09
// Display an array on the console output.
//

#ifndef DISPLAYARRAY_H
#define DISPLAYARRAY_H

template<typename A>
void DisplayArray(const A data[], int arraySize)
{
  for(int i=0; i<arraySize; i++) {
    cout << data[i] << "    ";
  }
}
#endif

