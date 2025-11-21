void replace(const T& x, list<T>& y) {
  //write your code here
  iterator it = begin();
  while (it!= end())
  {
    if(*it == x)
    {
      for(T data : y)
        insert(it,data);
      it = erase(it);
    }
    else  
      it++;
  }
  
}
