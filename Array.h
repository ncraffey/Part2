#include "String.h"
class Array: public Object{
public:
  Array(size_t length, size_t data_length); // Creates an array of size length, where each object is data_length long
  ~Array();
  virtual void* get(size_t index); //returns the object at index
  virtual void* set(size_t index, void* o); //sets the object at index to be o, returns former object
  virtual void* remove(size_t index); //Replaces object at index with nullptr, returns object
  virtual void pushBack(void* o); //add o to end of array
  bool empty(); //checks if there are any items in the array
  size_t hash(); //returns the hash of the array
  bool equals(void* o); //checks if this is equal to o
  void clear(); // replaces all objects with nullpttr
  size_t length(); //returns the length of the array
};


class objArray: public Array{
public:
  objArray(size_t length, size_t data_length); // Creates an array of size length, where each object is data_length long
  Object* get(size_t index); //returns the object at index
  Object* set(size_t index, Object* o); //sets the object at index to be o, returns former object
  Object* remove(size_t index); //Replaces object at index with nullptr, returns objec
  void pushBack(Object* o); //add o to end of array
};

class intArray: public Array{
public:
  intArray(size_t length, size_t data_length);
  int* get(size_t index); //returns the object at index
  int* set(size_t index, int* o); //sets the object at index to be o, returns former object
  int* remove(size_t index); //Replaces object at index with nullptr, returns object
  void pushBack(int* o); //add o to end of array
};

class strArray: public Array{
public:
  strArray(size_t length, size_t data_length);
  string* get(size_t index); //returns the object at index
  string* set(size_t index, string* o); //sets the object at index to be o, returns former object
  string* remove(size_t index); //Replaces object at index with nullptr, returns object
  void pushBack(String* o); //add o to end of array
};

class boolArray: public Array{
public:
  intArray(size_t length, size_t data_length);
  bool* get(size_t index); //returns the object at index
  bool* set(size_t index, bool* o); //sets the object at index to be o, returns former object
  bool* remove(size_t index); //Replaces object at index with nullptr, returns object
  void pushBack(bool* o); //add o to end of array  
};

class floatArray: public Array{
public:
  floatArray(size_t length, size_t data_length);
  float* get(size_t index); //returns the object at index
  float* set(size_t index, float* o); //sets the object at index to be o, returns former object
  float* remove(size_t index); //Replaces object at index with nullptr, returns object
  void pushBack(float* o); //add o to end of array
};
