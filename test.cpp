#include <assert>
#include "string.h"
#include "array.h"

void objectEqualsTest(){
    Object* a = new String("hello");
    Object* b = new String("hello");
    Object* c = new String("no hello");
    assert(a.equals(a));
    assert(a.equals(b));
    assert(b.equals(a));
    assert(!a.equals(c));
};

void objectHashTest(){
    Object* a = new String("hello");
    Object* b = new String("hello");
    Object* c = new String("no hello");
    assert(a.hash() == a.hash());
    assert(a.hash() != b.hash());

};

void arraySetGetTest(){
    Object* a = new String("hello");
    Object* b = new String("hi");
    Array d = new Array(3, sizeof(String));
    assert(d.set(b, 0) == nullptr);
    assert(d.get(0) == b);
    assert(d.set(a, 0) ==(b));
    assert(d.get(0) == (a));
};
void arrayLengthTest(){
    Array d = new Array(3, sizeof(String));
    assert(d.length() == 3);
};

void arrayRemoveTest(){
  Object* a = new String("hello");
  Object* b = new String("hi");
  Array d = new Array(3, sizeof(String));
  d.set(b,0);
  assert(d.remove(0) == b);
  assert(d.get(0) == nullptr);
};


void clearAndEmptyTest(){
  Object* a = new String("hello");
  Object* b = new String("hi");
  Array d = new Array(3, sizeof(String));
  d.set(b, 0);
  d.set(a, 1);
  d.clear();
  assert(d.get(0) == nullptr);
  assert(d.get(1) == nullptr);
  assert(d.empty())
};

void arrayEqualsAndHashTest(){
    Object* a = new String("hello");
    Object* b = new String("hi");
    Object* c = new String("hi");
    Array d = new Array(3, sizeof(String));
    Array e = new Array(3, sizeof(String));
    Array f = new Array(3, sizeof(String));
    d.set(b, 0);
    d.set(a, 1);
    e.set(b, 0);
    e.set(c, 1);
    assert(d.equals(e));
    assert(e.equals(d));
    assert(!d.equals(f));
    assert(d.hash() == e.hash());
    assert(d.hash() != f.hash());
};
