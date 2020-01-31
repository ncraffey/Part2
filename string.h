#pragma once
#include "Object.h"
class String: public Object {
    public:
        String();

        String(char* val);

        ~String();

        bool equals(Object* o);

        size_t hash(Object* o);

};
class Int: public Object {
    public:
        Int();

        Int(int val);

        ~Int();

        bool equals(Object* o);

        size_t hash(Object* o);

};

class Bool: public Object {
    public:
        Bool();

        Bool(bool val);

        ~Bool();

        bool equals(Object* o);

        size_t hash(Object* o);

};

class Float: public Object {
    public:
        Float();

        Float(float val);

        ~Float();

        bool equals(Object* o);

        size_t hash(Object* o);

};
