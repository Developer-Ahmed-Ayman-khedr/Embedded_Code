/*
 * BIT_MATH.h
 *
 * Created: 03/04/2024 08:58:15 PM
 *  Author: AMIT
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(x,n)        x=x|(1<<n)
#define TOGGLE_BIT(x,n)     x=x^(1<<n)
#define CLEAR_BIT(x,n)      x=x&(~(1<<n))
#define GET_BIT(x,n)        ((x&(1<<n))>>n)
// #define GET_BIT(x,n)        ((x>>n)&1)


#endif /* BIT_MATH_H_ */