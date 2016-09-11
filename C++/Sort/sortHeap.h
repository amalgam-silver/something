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
void adjustHeap(T &a, int i, int len)
{
	int parent = (i - 1) / 2;

}

template <class T>
T myPower(T x, int n)
{
	T ret = 1;

	for (int i = 0; i < n; i++)
	{
		ret *= x;
	}
	return ret;
}

template <class T>
void printHeap(T &a, int len)
{
	int rows = 0, spaces = 0, tmp = len;
	while (tmp)
	{
		rows++;
		tmp >>= 1;
	}
	for (int i = 0; i < rows; i++)
	{
		spaces = myPower(2, rows) / (myPower(2, i) + 1);
		for (int j = 0; j < (1 << i); j++)
		{
			for (int k = 0; k < spaces; k++)
			{
				std::cout << ' ';
			}
			int index = myPower(2, i) + j;
			if (index < len)
			{
				std::cout << a[index];
			}
		}
		std::cout << std::endl;
	}
}
