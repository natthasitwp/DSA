#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::insert(iterator position, iterator first, iterator last)
{
  // write your code here
  size_t pos = position - begin();
  size_t insertSize = (last - first);
  ensureCapacity(mSize + insertSize);

  for(size_t idx =  mSize + insertSize - 1 ; idx >=  pos + insertSize; idx--)
    mData[idx] = mData[idx - insertSize];

  iterator it = first;
  for (size_t i = 0; i != insertSize; i++)
    mData[pos + i] = *(it + i);

  mSize += insertSize;
}

#endif
