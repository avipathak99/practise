#include<iostream>
using namespace std;

class base
{
public:
  virtual void print ()
  { cout<< "print base class" <<endl; }

  void show ()
  { cout<< "show base class" <<endl; }
};

class derived1:public base
{
public:
  void print ()
  { cout<< "print derived class 1" <<endl; }

  void show ()
  { cout<< "show derived class" <<endl; }
};

class derived2:public base
{
public:
  void print ()
  { cout<< "print derived class 2" <<endl; }

  void show ()
  { cout<< "show derived class" <<endl; }
};

void callPrint (base *b) {
  b->print();
}

int main()
{
  base *bptr;
  derived1 d1;
  derived2 d2;

  //virtual function, binded at runtime
  //  bptr->print();
  bptr = &d1;
  callPrint(bptr);

  bptr = &d2;
  callPrint(bptr);

  // Non-virtual function, binded at compile time
  bptr->show();
}

