// FiboImps.cpp
// Kim Buckner
// COSC 1030
// Lecture 13
// Definitions of the Fibonacci implementations.

unsigned long int FiboRecursive(int n)
{
  if (n <= 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
  
    return FiboRecursive(n-2)+FiboRecursive(n-1);
  }
}

unsigned long int FiboIterative(int n)
{
  long int result=1;
  long int previous=-1;

  for (int i=0; i<=n; i++) {
    long int sum = result+previous;
    previous = result;
    result = sum;
  }

  return result;
}
