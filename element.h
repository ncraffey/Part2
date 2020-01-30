#include "Object.h"
typedef union Element{
  int i;
  float f;
  bool b;
  Object o;
} element;
