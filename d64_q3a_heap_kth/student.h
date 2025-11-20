#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  //write your code here
  //can include anything
  if(k==1)return mData[0];
  else if (k==2)
  {
    return mLess(mData[1],mData[2])? mData[2] : mData[1];
  }
  else if(k==3)
  {
    T result = mLess(mData[1],mData[2])? mData[1] : mData[2];
    result = mLess(mData[3],result)? result : mData[3];
    result = mLess(mData[4],result)? result : mData[4];
    result = mLess(mData[5],result)? result : mData[5];
    result = mLess(mData[6],result)? result : mData[6];
    return result;
  }
  return mData[0];
}

#endif
