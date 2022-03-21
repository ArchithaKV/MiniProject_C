#ifndef_ADD_INTEGER_H_
#define_ADD_INTEGER_H_

typedef enum function_status_t
{
    SUCCESS,
    OVERFLOW,
    UNDERFLOW

}function_status_t;

function_status_t add_integers(int param1, int param2, int* result);


#endif