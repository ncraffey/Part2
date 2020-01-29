#include <assert.h>
#include "string.h"
#include "array.h"

void objectEqualsTest(){
    Object* a = new String("hello");
    Object* b = new String("hello");
    Object* c = new String("no hello");
    assert(a->equals(a));
    assert(a->equals(b));
    assert(b->equals(a));
    assert(!a->equals(c));
};

void objectHashTest(){
    Object* a = new String("hello");
    Object* b = new String("hello");
    Object* c = new String("no hello");
    assert(a->hash() == a->hash());
    assert(a->hash() == b->hash());
    assert(a->hash() != c->hash());

};

void arraySetGetTest(){
    Object* a = new String("hello");
    Object* b = new String("hi");
    Array *d = new Array(3, sizeof(String));
    assert(d->set(0, b) == nullptr);
    assert(d->get(0) == b);
    assert(d->set(0, a) ==(b));
    assert(d->get(0) == (a));
};
void arrayLengthTest(){
    Array* d = new Array(3, sizeof(String));
    assert(d->length() == 3);
};

void arrayRemoveTest(){
  Object* a = new String("hello");
  Object* b = new String("hi");
  Array *d = new Array(3, sizeof(String));
  d->set(0, b);
  assert(d->remove(0) == b);
  assert(d->get(0) == nullptr);
};


void clearAndEmptyTest(){
  Object* a = new String("hello");
  Object* b = new String("hi");
  Array *d = new Array(3, sizeof(String));
  d->set(0, b);
  d->set(1, a);
  d->clear();
  assert(d->get(0) == nullptr);
  assert(d->get(1) == nullptr);
  assert(d->empty());
};

void arrayEqualsAndHashTest(){
    Object* a = new String("hello");
    Object* b = new String("hi");
    Object* c = new String("hi");
    Array *d = new Array(3, sizeof(String));
    Array *e = new Array(3, sizeof(String));
    Array *f = new Array(3, sizeof(String));
    d->set(0, b);
    d->set(1, a);
    e->set(0, b);
    e->set(1, c);
    assert(d->equals(e));
    assert(e->equals(d));
    assert(!d->equals(f));
    assert(d->hash() == e->hash());
    assert(d->hash() != f->hash());
};

int main(){
    arrayEqualsAndHashTest();
    clearAndEmptyTest();
    arrayRemoveTest();
    arrayLengthTest();
    arraySetGetTest();
    objectEqualsTest();
    objectHashTest();
};
