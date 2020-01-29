//
// Created by Kate Rupar on 1/29/20.
//

#pragma once

#include "object.h"

/*
 * Wrapper class for int.
 */
public class int_w : public Object {

    public:
        int val_;

        int_w (int val) {
            val_ = val;
        }

        // Return value of this int_w
        int get() {
            return 0;
        }
};