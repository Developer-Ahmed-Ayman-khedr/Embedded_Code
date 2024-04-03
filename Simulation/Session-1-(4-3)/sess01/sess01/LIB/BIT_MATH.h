/*
 * BIT_MATH.h
 *
 * Created: 4/3/2024 9:00:25 PM
 *  Author: ahmed
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(x,n)  x=x|(1<<n)
#define TOOGLE_BIT(x,n)  x=x^(1<<n)
#define CLEAR_BIT(x,n)  x=x&(~(1<<n))
#define GET_BIT(x,n)  (x<<n)&1



#endif /* BIT_MATH_H_ */