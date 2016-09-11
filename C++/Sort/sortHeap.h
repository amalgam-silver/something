template <class T>
void swap(T &a, T &b)
{
	if (a != b)
	{
		a = a + b;
		b = a - b;
		a = a - b;
	}
}

template <class T>
void adjustHeap(T &a, int len)
{

}
