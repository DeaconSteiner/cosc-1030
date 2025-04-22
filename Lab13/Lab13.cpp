// Lab13.cpp
// Deacon Steiner
// COSC 1030, Section 12
// Lab 13
// 22 Apr 2025
//
// Simple file That implements two classes
// and tests them.

#include <iostream>
using std::cout;
using std::endl;
using std::ostream;

class VBase
{

   public:
      VBase( int vs=0 ) { setStuff(vs); }
      virtual int getStuff() const { return stuff; }
      virtual void setStuff( int s ) { stuff = (s>=0) ? s : 0; }
      virtual void makeAbs() const = 0;

   protected:
      int stuff;

};

class VDerived : public VBase
{

   public:
      VDerived( int vs=0 ) { setStuff(vs); }
      void makeAbs() const { }

      void setStuff( int s ) override {
         stuff = (s >= 0) ? s : 0;
         weight = 2 * stuff;
      }
      int getStuff() const override { return stuff*weight; }

   private:
      int weight;
};

ostream& operator<<(ostream& out, const VBase& right)
{

   out << "Object(" << right.getStuff() << ")";
   return out;
}

int main()
{

   VDerived A(3);

   cout << A << endl;

   A.setStuff(4);

   cout << A << endl;

   return 0;
}


