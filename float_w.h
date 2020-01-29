//
// Created by Kate Rupar on 1/29/20.
//

#pragma once

#include "object.h"

/*
 * Wrapper class for float.
 */
public class float_w : public Object {

    public:
        float val_;

        float_w (float val) {
            val_ = val;
        }

        // Return value of this float_w
        float get() {
            return 0;
        }
};