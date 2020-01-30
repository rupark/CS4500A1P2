//
// Created by Kate Rupar on 1/29/20.
//

#pragma once

#include "object.h"

/*
 * Wrapper class for bool.
 */
class bool_w : public Object {

    public:
        bool val_;

        bool_w (bool val) {

        }

        ~bool_w() {

        }

        //Returns true if this bool_w equals the Object
        virtual bool equals(Object* other) {

        }

        //Returns the hashcode
        virtual size_t hash() {

        }

        // Return value of this bool_w
        bool get() {

        }
};