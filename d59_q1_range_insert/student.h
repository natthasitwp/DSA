#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::insert(iterator position, iterator first, iterator last)
{
  // write your code here
  size_t pos = position - begin();
  size_t range = last - first;
  ensureCapacity(mSize + range);

  // rearrage value
  for(size_t i = mSize; i > pos;i--)
    mData[i + range -1] = mData[i - 1];

  // insert value
  for(size_t i = 0 ;i < range ;i++)
    mData[pos+i] = *(first+i);

  // expand mSize
  mSize += range;
}

#endif
