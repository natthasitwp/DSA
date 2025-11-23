#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  if(mSize == 0)return;
  size_t writeIdx = 0;
  size_t i = 0;
  for(size_t readIdx  = 0 ;readIdx < mSize; readIdx++)
  {
    if( i < pos.size() && readIdx == pos[i])
    {
      i++;
    }
    else
      mData[writeIdx++] = mData[readIdx];
  }
  mSize = writeIdx;
  
}

#endif
