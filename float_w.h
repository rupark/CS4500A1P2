//
// Created by Kate Rupar on 1/29/20.
//

#pragma once

#include "object.h"

/*
 * Wrapper class for float.
 */
class float_w : public Object {

    public:
        float val_;

        float_w (float val) {

        }

        ~float_w() {

        }

        //Returns true if this float_w equals the Object
        virtual bool equals(Object* other) {

        }

        //Returns the hashcode
        virtual size_t hash() {

        }

        // Return value of this float_w
        float get() {

        }
};