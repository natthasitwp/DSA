#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <unordered_set>
using namespace std;
// you can include any other file here
// you are allow to use any data structure

template <typename T>
void CP::vector<T>::uniq()
{
  // do someting here
  unordered_set<T> seen;
  size_t writeIdx = 0;
  for(size_t i = 0;i<mSize;i++)
  {
    if(seen.find(mData[i]) == seen.end())
    {
      seen.insert(mData[i]);
      mData[writeIdx++] = mData[i];
    }
  }
  mSize = writeIdx;
}

#endif
