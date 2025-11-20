#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::compress() {
    //write your code here
    T *newData = new T[mSize];
    for(size_t idx = 0 ; idx < mSize ; idx++)
        newData[idx] = mData[idx];
    delete[] mData;
    mData = newData;
    mCap = mSize;
}

#endif
