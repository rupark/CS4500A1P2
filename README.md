This program has the .h files- array.h, string.h, int_w.h, bool_w.h, float_w.h and object.h. string.h and object.h have the same method signatures and fields as in the previous assignment. int_w.h, bool_w.h, and float_w.h are wrapper classes.
Array is very similar to the StringList class created in the previous assignment, except every instance of String in the fields and signatures is replaced by Object. 
The array can be constructed of any class that implements the Object class.
The array is dynamically growing, and growth is triggered by the push_back method.
