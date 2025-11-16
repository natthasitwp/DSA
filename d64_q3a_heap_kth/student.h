#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  //write your code here
  //can include anything
  T ans;
  if(k == 1)  return mData[0];
  if(k == 2)  ans = mLess(mData[1],mData[2]) ? mData[2] : mData[1]; 
  if(k == 3)
  {
    ans = mLess(mData[1],mData[2]) ? mData[1] : mData[2]; // if use 2,1 we will return thee kth = 2
    ans = mLess(ans,mData[3]) ? mData[3] : ans; 
    ans = mLess(ans,mData[4]) ? mData[4] : ans; 
    ans = mLess(ans,mData[5]) ? mData[5] : ans; 
    ans = mLess(ans,mData[6]) ? mData[6] : ans; 
   
  }
  
  return ans;
}

#endif
