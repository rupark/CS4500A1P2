#pragma once
using namespace std;
#include "helper.h"  // Your file, with any C++ code that you need
#include "object.h"  // Your file with the CwC declaration of Object
#include "string.h"  // Your file with the String class
#include "list.h"    // Your file with the two list classes

class Array : public Object {
	public:
		Object** elements; 
		size_t size_;
		
		Array(size_t size) {
			
		}
		
		Array() {

		}

		bool equals(Object* o) // Compares o with this list for equality.
		{

		}
			
		Object*  get(size_t index) // Returns the element at index 
		{

		}

		
		size_t hash()  // Returns the hash code value for this list.
		{

		}

		Object* set(size_t i, Object* e) // Replaces the element at i with e
		{

		}
		
		size_t length() // Return the number of elements in the collection 
		{

		}	
};
