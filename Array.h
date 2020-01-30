#pragma once
#include "element.h"
class Array: public Object{
public:
  Array();
  virtual ~Array();
  virtual Element* get(size_t index); //returns the object at index
  virtual Element* set(size_t index, Element* o); //sets the object at index to be o, returns former object
  virtual Element* remove(size_t index); //Replaces object at index with nullptr, returns object
  virtual void pushBack(Element* o); //add o to end of array
  bool empty(); //checks if there are any items in the array
  size_t hash(); //returns the hash of the array
  bool equals(void* o); //checks if this is equal to o
  void clear(); // replaces all objects with nullpttr
  size_t length(); //returns the length of the array
};
