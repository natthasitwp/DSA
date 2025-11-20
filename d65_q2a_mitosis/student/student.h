#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
    T *temp = new T[b+1];
    for(size_t i = 0 ;i <= b ;i++)
    {
        temp[i] = top();
        pop();
    }
    for(size_t i = 0 ; i <= b; i++)
    {
        
        if(b-i >= a && b-i <= b)
            push(temp[b-i]);
        push(temp[b-i]);
    }
   
    delete[] temp;
}

#endif