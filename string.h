#include "object.h"
class String: public Object {
    public:
        String();

        String(char* val);

        ~String();

        bool equals(Object* o);

        size_t hash(Object* o)

};
