#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int, T>> data)
{
  sort(data.begin(), data.end());
  size_t newSize = mSize+data.size();
  size_t oldIdx = 0;
  size_t insertIdx = 0;

  T *newArr = new T[newSize];
  for(size_t writeIdx = 0;writeIdx < newSize;writeIdx++)
  {
    if( writeIdx == data[insertIdx].first + insertIdx)
    {
      newArr[writeIdx] = data[insertIdx].second;
      insertIdx++;
    }
    else
    {
      newArr[writeIdx] = mData[oldIdx];
      oldIdx++;
    }
  }
  ensureCapacity(newSize);
  delete[] mData;
  mData = newArr;
  mSize = newSize;


}

#endif
