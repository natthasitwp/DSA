void shift(int k)
{
	// TODO: Add your code here
	if(k == 0)return;
	k = ((k % (int)mSize) + mSize) % mSize;; // One linear
	node *first = mHeader->next;
	node *last = mHeader->prev;

	auto newPos = begin();
	for(size_t i = 0 ;i < k;i++)
		newPos++;
	
	// link first and last item
	first->prev = last;
	(first->prev)->next = first;

	mHeader->prev = (newPos.ptr)->prev;
	mHeader->prev->next = mHeader;

	mHeader->next = newPos.ptr;
	mHeader->next->prev = mHeader;
}
