#ifndef QUEUE_HH
#define QUEUE_HH

#include "list.hh"

/* Klasa implementuj�ca kolejk�. */

class Queue {

private:
  Lista *queue;
public:
  int enque (int element);
  void dequeue ();
  int size ();
  Queue();
  ~Queue();
};

#endif
