#include "object.h"
class String: public Object {
    public:
        String();

        String(char* val);

        ~String();

        virtual bool equals(Object* o);

        vitural size_t has(Object* o)
};
