#include "helper.h"  // Your file, with any C++ code that you need
#include "object.h"  // Your file with the CwC declaration of Object
#include "string.h"  // Your file with the String class
#include "array.h"

#include <iostream>

void test1() {
  Array* a = new Array(10);
  String* s1 = new String("hi");
  String* s2 = new String("no");
  String* s3 = new String("yes");
  a->set(0, s1);
  a->set(1, s2);
  a->set(0, s3);
  if ((a->get(0)->equals(s3) && (a->get(1)->equals(s2)))) {
    std::cout << "Pass 1" << std::endl;
    delete a;
    delete s1;
    delete s2;
    delete s3;
  } else {
    std::cout << "Fail 1" << std::endl;
    delete a;
    delete s1;
    delete s2;
    delete s3;
    exit(0);
  }
}

void test2() {
  Array* a = new Array(10);
  String* s1 = new String("a");
  String* s2 = new String("b");
  a->set(0, s1);
  a->set(1, s2);
  if (a->length() == 2) {
    std::cout << "Pass 2" << std::endl;
    delete a;
    delete s1;
    delete s2;
  } else {
    std::cout << "Fail 2" << std::endl;
    delete a;
    delete s1;
    delete s2;
    exit(0);
  }
}

void test3() {
  Array* a = new Array(10);
  if (a->length() == 0) {
    std::cout << "Pass 3" << std::endl;
    delete a;
  } else {
    std::cout << "Fail 3" << std::endl;
    delete a;
    exit(0);
  }
}


void test4() {
  Array* a = new Array(10);
  String* c = new String();
  String* d = new String();
  a->set(0, c);
  a->set(1, d);
  if ((a->get(0)->equals(c) && (a->get(1)->equals(d)) && a->length() == 2)) {
    std::cout << "Pass 4" << std::endl;
    delete a;
    delete c;
    delete d;
  } else {
    std::cout << "Fail 4" << std::endl;
    delete a;
    delete c;
    delete d;
    exit(0);
  }
}

int main() {
  test1();
  test2();
  test3();
  test4();
  return 0;
}

