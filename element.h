#pragma once
#include "string.h"
typedef union Element{
  int i;
  float f;
  bool b;
  String* s;
  Object* o;
} element;
