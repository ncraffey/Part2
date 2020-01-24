class Object {
public:
  Object();
  ~Object();
  size_t hash(); //returns the hash of the object
  bool equals(Object o); //returns if this is equal to o
};
