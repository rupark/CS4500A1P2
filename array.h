#pragma once
#include "helper.h"  // Your file, with any C++ code that you need
#include "object.h"  // Your file with the CwC declaration of Object
#include "string.h"  // Your file with the String class

/**
 * Represents an array data structure in CwC.
 */
class Array : public Object {
public:
  Object** elements;
  size_t size_;
  
  Array(size_t size) {
    
  }
  
  Array() {
    
  }

  ~Array() {

  }

  void push_back(Object* o) { // Adds an Object o onto end of this array

  }

  bool equals(Object* o) // Compares o with this array for equality.
  {
    return false;
  }
  
  Object* get(size_t index) // Returns the element at index
  {
    return nullptr;
  }

  size_t hash()  // Returns the hash code value for this array.
  {
    return 0;
  }
  
  Object* set(size_t i, Object* e) // Replaces the element at i with e.
  {
    return nullptr;
  }
  
  size_t length() // Return the number of elements in the collection.
  {
    return 0;
  }

  const char* to_string() { // Returns the string representation of this array.
    return "";
  }
};
