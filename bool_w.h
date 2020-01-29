//
// Created by Kate Rupar on 1/29/20.
//

#pragma once

#include "object.h"

/*
 * Wrapper class for bool.
 */
public class bool_w : public Object {

    public:
        bool val_;

        bool_w (bool val) {
            val_ = val;
        }

        // Return value of this bool_w
        bool get() {
            return false;
        }
};