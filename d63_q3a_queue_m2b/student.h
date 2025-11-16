#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
  //write your code here
  T tmp = mData[(mFront + pos)% mCap];
  for(size_t i = mFront + pos+1 ;i < mFront+mSize; i++)
  {
    mData[(i-1 + mCap) % mCap] = mData[i % mCap];
  }
  mData[(mFront + mSize - 1) % mCap] = tmp;
}

#endif
