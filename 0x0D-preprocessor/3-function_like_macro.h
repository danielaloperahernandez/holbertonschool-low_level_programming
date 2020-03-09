#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H
/**
*File: 0x0D-preprocessor
*Author: Daniela Lopera
*Desc: function-like macro ABS(x) that computes the absolute
*					value of a number x
*@x: number
*/
#define ABS(x)((x) < 0 ? (-x) : (x))
#endif
