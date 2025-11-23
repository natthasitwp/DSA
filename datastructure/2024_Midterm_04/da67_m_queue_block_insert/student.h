#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "queue.h"

template <typename T>
void CP::queue<T>::block_insert(size_t p, size_t m, const T &element)
{
	// write your code here
	size_t oldSize = mSize;
	ensureCapacity(mSize + m);
	for(size_t i = mSize ; i > p;i--)
		mData[(mFront + i + m - 1)%mCap] = mData[(mFront + i - 1) % mCap];
 
	for(size_t i = p ; i < p + m;i++)
		mData[(mFront+i)%mCap] = element;
	mSize+=m;
}

#endif
