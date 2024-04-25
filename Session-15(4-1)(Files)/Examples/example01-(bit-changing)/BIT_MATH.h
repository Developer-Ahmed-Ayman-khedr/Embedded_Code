#ifdef BIT_MATH_H
#define BITMATH_H

#define SET_BIT(x,n)  x=x|(1<<n)
#define TOOGLE_BIT(x,n)  x=x^(1<<n)
#define CLEAR_BIT(x,n)  x=x(~(1<<n))
#define GET_BIT(x,n)  (x&(1<<n))>>n
//#define GET_BIT(x,n)  (x<<n)&1

#endif 
