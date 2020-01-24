
#ifndef HW3_STRING_H
#define HW3_STRING_H

#include "helper.h"

class String : public Object{
public:
  char* val_; // data
  size_t size_; // number of characters (excluding \0)

  /** Construct a string copying s */
  String(char* s) {
    size_ = strlen(s);
    val_ = duplicate(s);
  }

  /** Construct a string copying s */
  String(const char* s) {
    size_ = strlen(s);
    val_ = duplicate(s);
  }
  ~String () { delete[] val_; }

  size_t hash(){
    size_t some_prime = 3;
		const char* str = (const char*)this->val_;
		for (int i = 0; i < strlen(str); i++) {
			some_prime = some_prime * 5 + (size_t)(str[i]);
		}
		return some_prime;
  };
  bool equals(Object* o){
    try{
        return this->hash() == ((String *)o)->hash();
      }catch(int e){
        return false;
      }
  };
  String* concat(String* other){
    size_t length = this->size() + other->size();
    char newString[length + 1];
    for(int i = 0; i < this->size(); i ++){
      newString[i] = this->get()[i];
    }
    for(int i = 0; i < other->size(); i ++){
      newString[this->size()+ i] = other->get()[i];
    }
    newString[length] = '\0';
    return new String((const char *)newString);
  };
  const char* get(){
    return val_;
  }
  void print(){
    std::cout<< val_ <<"\n";
  }
  size_t size(){
    return size_;
  }
};
#endif //HW2_STRING_H
