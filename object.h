//lang CWC
#pragma once

class Object {
	public:
               	size_t hash_;

		//Constructor
                Object() {

                }

		//Deconstructor
                virtual ~Object() {

                }

		//Returns true if this Object equals the Object
                virtual bool equals(Object* other) {

                }

		//Returns the hashcode
                size_t hash() {

                }
};

