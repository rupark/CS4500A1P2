//lang CwC
#include "object.h"  // Your file with the CwC declaration of Object
#include "helper.h"
#pragma once
using namespace std;

class String: public Object {
        public:
                char* val_;
                size_t size_;

		//Constructor
                String(char* val) {

                }
		
		//Constructor
		String(const char* val) {

                }

		//Deconstructor
                ~String() {

                }

		//Generating Hash Code
                size_t hash_me() {

                }

		//Return true if this String equals the Object
                bool equals(Object* o) {

                }

};
