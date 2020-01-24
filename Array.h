class Array: public Object{
public:
  Array(size_t length, size_t data_length); // Creates an array of size length, where each object is data_length long
  ~Array();
  Object get(size_t index); //returns the object at index
  Object set(size_t index, Object o); //sets the object at index to be o, returns former object
  Object remove(size_t index); //Replaces object at index with nullptr, returns object
  bool empty(); //checks if there are any items in the array
  size_t hash(); //returns the hash of the array
  bool equals(Object o); //checks if this is equal to o
  void clear(); // replaces all objects with nullpttr
  size_t length(); //returns the length of the array
}
