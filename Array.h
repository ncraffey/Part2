#pragma once
#include "Object.h"
class Array: public Object{
public:
  Array();
  virtual ~Array();
  virtual Object* get(size_t index); //returns the object at index
  virtual Object* set(size_t index, Object* o); //sets the object at index to be o, returns former object
  virtual Object* remove(size_t index); //Replaces object at index with nullptr, returns object
  virtual void pushBack(Object* o); //add o to end of array
  bool empty(); //checks if there are any items in the array
  size_t hash(); //returns the hash of the array
  bool equals(Object* o); //checks if this is equal to o
  void clear(); // replaces all objects with nullpttr
  size_t length(); //returns the length of the array
};
