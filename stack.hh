#ifndef STACK_HH
#define STACK_HH

#include "list.hh"

/* Klasa implementująca stos. */

template <class T> class Stack {

private:
  List <T> *stack;
  
public:
  void push (T element);
  T pop ();
  int size ();
  Stack();
  ~Stack();
};

#endif
