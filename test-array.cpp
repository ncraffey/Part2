#include <assert.h>
#include "Array.h"
#include <cstddef>
#include "string.h"
static std::nullptr_t np;
void objectEqualsTest(){
    Object* a = new String("hello");
    Object* b = new String("hello");
    Object* c = new String("no hello");
    assert(a->equals(a));
    assert(a->equals(b));
    assert(b->equals(a));
    assert(!a->equals(c));
    Object* d = new Int(10);
    Object* e = new Int(10);
    assert(!a->equals(d));
    assert(d->equals(e));
    Object* f = new Bool(true);
    Object* h = new Bool(false);
    assert(!f->equals(h));
    assert(f->equals(f));
};

void objectHashTest(){
    Object* a = new String("hello");
    Object* b = new String("hello");
    Object* c = new String("no hello");
    Object* d = new Float(3.1);
    Object* e = new Float(2.9);
    assert(d->hash() != e->hash());
    assert(a->hash() == a->hash());
    assert(a->hash() == b->hash());
    assert(a->hash() != c->hash());

};

void arraySetGetTest(){
    Object* a = new String("hello");
    Object* b = new String("hi");
    Array *d = new Array();
    assert(d->set(0, b) == np);
    assert(d->get(0) == b);
    assert(d->set(0, a) == (b));
    assert(d->get(0) == (a));
};
void arrayLengthTest(){
    Array* d = new Array();
    assert(d->length() == 0);
    Object* b = new String("hi");
    assert(d->set(0, b) == np);
    assert(d->length() == 1);
};

void arrayRemoveTest(){
  Object* a = new String("hello");
  Object* b= new String("hi");
  Array *d = new Array();
  d->set(0, b);
  assert(d->remove(0) == b);
  assert(d->get(0) == np);
};


void clearAndEmptyTest(){
  Object* a = new String("hello");
  Object* b = new String("hi");
  Array *d = new Array();
  d->set(0, b);
  d->set(1, a);
  d->clear();
  assert(d->get(0) == np);
  assert(d->get(1) == np);
  assert(d->empty());
};

void arrayEqualsAndHashTest(){
    Object* a = new String("hello");
    Object* b = new String("hi");
    Object* c = new String("hi");
    Array *d = new Array();
    Array *e = new Array();
    Array *f = new Array();
    d->set(0, b);
    d->set(1, a);
    e->set(0, b);
    e->set(1, a);
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
