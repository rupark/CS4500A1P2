#include "helper.h"  // Your file, with any C++ code that you need
#include "object.h"  // Your file with the CwC declaration of Object
#include "string.h"  // Your file with the String class
#include "array.h"
#include "int_w.h"
#include "bool_w.h"
#include "float_w.h"

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
  } else {
    std::cout << "Fail 1" << std::endl;
  }
  delete a;
  delete s1;
  delete s2;
  delete s3;
}

void test2() {
  Array* a = new Array(10);
  String* s1 = new String("a");
  String* s2 = new String("b");
  a->set(0, s1);
  a->set(1, s2);
  if (a->length() == 2) {
    std::cout << "Pass 2" << std::endl;
  } else {
    std::cout << "Fail 2" << std::endl;
  }
  delete a;
  delete s1;
  delete s2;
}

void test3() {
  Array* a = new Array(10);
  if (a->length() == 0) {
    std::cout << "Pass 3" << std::endl;
  } else {
    std::cout << "Fail 3" << std::endl;
  }
  delete a;
}


void test4() {
  Array* a = new Array(10);
  String* c = new String("world");
  String* d = new String("hello");
  a->set(0, c);
  a->set(1, d);
  if ((a->get(0)->equals(c) && (a->get(1)->equals(d)) && a->length() == 2)) {
    std::cout << "Pass 4" << std::endl;
  } else {
      std::cout << "Fail 4" << std::endl;
  }
  delete a;
  delete c;
  delete d;
}

// tests push_back functionality
void test5() {
  Array* a = new Array(10);
  String* b = new String("foo");
  String* c = new String("baz");
  String* d = new String("bar");
  a->push_back(b);
  a->push_back(c);
  a->push_back(d);

  if ((a->length() == 3) && (a->get(0)->equals(b))
    && (a->get(1)->equals(c)) && (a->get(2)->equals(d))) {
      std::cout << "Pass 5" << std::endl;
  } else {
      std::cout << "Fail 5" << std::endl;
  }
  delete a;
  delete b;
  delete c;
  delete d;
}

// tests to_string functionality
void test6() {
  Array* a = new Array(10);
  String* b = new String("foo");
  String* c = new String("baz");
  String* d = new String("bar");
  a->push_back(b);
  a->push_back(c);
  a->push_back(d);
  String* e = new String("{'foo', 'baz', 'bar'}");
  String* f = new String(a->to_string());
  Array* a2 = new Array(10);
  String* g = new String("{}");
  String* h = new String(a2->to_string());

  if (e->equals(f) && g->equals(h)) {
    std::cout << "Pass 6" << std::endl;
  } else {
    std::cout << "Fail 6" << std::endl;
  }
  delete a;
  delete b;
  delete c;
  delete d;
  delete e;
  delete f;
  delete a2;
  delete g;
  delete h;
}

// tests equals functionality
void test7() {
  Array* a1 = new Array(10);
  String* b = new String("foo");
  String* c = new String("baz");
  String* d = new String("bar");
  a1->push_back(b);
  a1->push_back(c);
  a1->push_back(d);

  Array* a2 = new Array(10);
  String* b2 = new String("foo");
  String* c2 = new String("baz");
  String* d2 = new String("bar");
  a2->push_back(b2);
  a2->push_back(c2);
  a2->push_back(d2);

  Array* a3 = new Array(10);

  if (a1->equals(a2) && !a1->equals(a3)) {
    std::cout << "Pass 7" << std::endl;
  } else {
    std::cout << "Fail 7" << std::endl;
  }
  delete a1;
  delete b;
  delete c;
  delete d;
  delete a2;
  delete b2;
  delete c2;
  delete d2;
}

// tests hash method
void test8() {
  Array* a1 = new Array(10);
  Array* a2 = new Array(10);
  String* s1 = new String("hi");
  String* s2 = new String("hi");
  a1->push_back(s1);
  a2->push_back(s2);
  if (a1->hash() == a2->hash()) {
    std::cout << "Pass 8" << std::endl;
  } else {
    std::cout << "Fail 8" << std::endl;
  }
  delete a1;
  delete a2;
  delete s1;
  delete s2;
}

// test int_w
void test9() {
    Array* a1 = new Array(10);
    Array* a2 = new Array(10);
    int_w* s1 = new int_w(1);
    int_w* s2 = new int_w(1);
    int_w* s3 = new int_w(3);
    a1->push_back(s1);
    a2->push_back(s2);
    if (a1->get(0)->equals(a2->get(0)) && (a1->get(0)->hash_ == a2->get(0)->hash_))
    && !(a1->get(0)->equals(s3))) {
        std::cout << "Pass 9" << std::endl;
    } else {
        std::cout << "Fail 9" << std::endl;
    }
    delete a1;
    delete a2;
    delete s1;
    delete s2;
}

//float_w
void test10() {
    Array* a1 = new Array(10);
    Array* a2 = new Array(10);
    float_w* s1 = new float_w(2.1);
    float_w* s2 = new float_w(2.1);
    float_w* s3 = new float_w(3.4);
    a1->push_back(s1);
    a2->push_back(s2);
    if (a1->get(0)->equals(a2->get(0)) && (a1->get(0)->hash_ == a2->get(0)->hash_))
    && !(a1->get(0)->equals(s3))) {
        std::cout << "Pass 10" << std::endl;
    } else {
        std::cout << "Fail 10" << std::endl;
    }
    delete a1;
    delete a2;
    delete s1;
    delete s2;
}

//bool_w
void test11() {
    Array* a1 = new Array(10);
    Array* a2 = new Array(10);
    bool_w* s1 = new bool_w(true);
    bool_w* s2 = new bool_w(true);
    bool_w* s3 = new bool_w(false);
    a1->push_back(s1);
    a2->push_back(s2);
    if (a1->get(0)->equals(a2->get(0)) && (a1->get(0)->hash_ == a2->get(0)->hash_)
    && !(a1->get(0)->equals(s3))) {
        std::cout << "Pass 11" << std::endl;
    } else {
        std::cout << "Fail 11" << std::endl;
    }
    delete a1;
    delete a2;
    delete s1;
    delete s2;
}


// testing Object
void test12() {
    Array* a = new Array(10);
    Object* b = new Object();
    Object* c = new Object();
    Object* d = new Object();
    a->push_back(b);
    a->push_back(c);
    a->push_back(d);

    if (a->length() == 3) {
        std::cout << "Pass 5" << std::endl;
    } else {
        std::cout << "Fail 5" << std::endl;
    }

    delete a;
    delete b;
    delete c;
    delete d;
}


int main() {
  test1();
  test2();
  test3();
  test4();
  test5();
  test6();
  test7();
  test8();
  test9();
  test10();
  test11();
  test12();
  return 0;
}
