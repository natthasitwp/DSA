#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
  //write your code here
  ensureCapacity(mSize + 1);
  size_t insertPos = mSize - pos;
  for(size_t idx = mSize ; idx > insertPos ; idx--)
  {
    mData[idx] = mData[idx - 1];
  }
  mData[insertPos] = value;
  mSize++;
}

#endif
