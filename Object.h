class Object {
public:
  Object();
  ~Object();
  virtual size_t hash(); //returns the hash of the object
  virtual bool equals(Object o); //returns if this is equal to o
};
