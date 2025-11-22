
void splitList(list<T> &list1, list<T> &list2)
{
    // Add your code here
    size_t splitAt = (mSize % 2) ? mSize / 2 + 1 : mSize / 2;
    iterator it = begin();
    for (size_t i = 0; i < splitAt; i++)
        it++;

    (list1.mHeader)->prev->next = mHeader->next;
    (list1.mHeader)->prev->next->prev = (list1.mHeader)->prev;
    (list1.mHeader)->prev = (it.ptr)->prev;
    (list1.mHeader)->prev->next = list1.mHeader;
    list1.mSize += splitAt;

    (list2.mHeader)->prev->next = (it).ptr;
    (list2.mHeader)->prev->next->prev = (list2.mHeader)->prev;
    (list2.mHeader)->prev = mHeader->prev;
    (list2.mHeader)->prev->next = list2.mHeader;
    list2.mSize += mSize - splitAt;
    mSize = 0;
    mHeader->next = mHeader;
    mHeader->prev = mHeader;
}
