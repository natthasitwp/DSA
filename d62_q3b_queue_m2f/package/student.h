#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
    T tmp = mData[(mFront + pos ) % mCap];
    for(size_t i = mFront + pos; i > mFront; i--)
        mData[(i) % mCap] = mData[(i - 1 + mCap) % mCap];
    mData[mFront] = tmp;
}

#endif
