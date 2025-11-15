#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
  //write your code here
  T tmp = mData[pos];
  for(size_t i = pos + 1;i < mSize; i++)
  {
    mData[i-1] = mData[i];
  }
  mData[mSize - 1] = tmp;
}

#endif
