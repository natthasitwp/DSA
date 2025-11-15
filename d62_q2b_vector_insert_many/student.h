#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include <algorithm>


template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  sort(data.begin(),data.end());
  ensureCapacity(mSize + data.size());
  
  int oldSize = mSize;
  mSize += data.size();
  
  int i = oldSize - 1, j = data.size() - 1, k = mSize - 1;
  
  while(i >= 0 && j >= 0) {
    if(i + j + 1 == data[j].first) {
      mData[k--] = data[j--].second;
    } else {
      mData[k--] = mData[i--];
    }
  }
  
  while(j >= 0) {
    mData[k--] = data[j--].second;
  }
}

#endif
