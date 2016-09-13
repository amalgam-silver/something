#ifndef _SORT_HEAP
#define _SORT_HEAP

template <class T>
void adjustHeap(T *a, int i, int len)
{
	int child = i * 2 + 1;		// index of left child
//	int tmp = a[i];
	while (child < len)
	{
		if ((child + 1 < len) && (a[child] < a[child + 1]))		// find the bigger child
		{
			child++;
		}
		if (a[child] > a[i])
		{
			mySwap(a[child], a[i]);
			i = child;
			child = i * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

template <class T>
void buildHeap(T *a, int len)
{
	for (int i = (len - 1) / 2; i >= 0; --i)
	{
		adjustHeap(a, i, len);
	}
}

template <class T>
int SortHeap(T *a, int len)
{
	buildHeap(a, len);
	for (int i = len - 1; i > 0; i--)
	{
		mySwap(a[0], a[i]);
		adjustHeap(a, 0, i);
	}
	return 0;
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

static int parent(int i, int level)
{
	int p = (i - 1) / 2;
	if (0 == p)
		return 0;
	else if (--level)
		return parent(p, level);
	else
		return p;
}

template <class T>
void printHeap(T *a, int s, int len)
{
	int childLeft = s * 2 + 1, childRight = s * 2 + 2;
	int level = 0, tmp = s + 1;
	while (tmp)
	{
		level++;
		tmp >>= 1;
	}

	if (s == 0)	std::cout << a[s] << std::endl;
	else		std::cout << "━━" << a[s] << std::endl;
	if (childLeft < len)
	{
		for(int i = 0; i < (level - 1); i++)
		{
			if (parent(childLeft, level - 1 - i) % 2)
				std::cout << "┃  ";
			else
				std::cout << "   ";

		}
		std::cout << "┣";
		printHeap(a, childLeft, len);
	}
	if (childRight < len)
	{
		for(int i = 0; i < (level - 1); i++)
		{
			int p = parent(childRight, level - 1 - i);
			if (p % 2)
				std::cout << "┃  ";
			else
				std::cout << "   ";
		}
		std::cout << "┣";
		printHeap(a, childRight, len);
	}
}

#endif
