//
// Created by Kate Rupar on 1/29/20.
//

#pragma once

#include "object.h"

/*
 * Wrapper class for int.
 */
class int_w : public Object {

    public:
        int val_;

        int_w (int val) {

        }

        ~int_w() {

        }

        //Returns true if this int_w equals the Object
        virtual bool equals(Object* other) {

        }

        //Returns the hashcode
        virtual size_t hash() {

        }

        // Return value of this int_w
        int get() {
            return 0;
        }
};