#ifndef _SORT_BUBBLE
#define _SORT_BUBBLE

template<class T>
void mySwap(T &a, T &b)
{
	if (a != b)
	{
		a = a + b;
		b = a - b;
		a = a - b;
	}
}

template <class T>
int SortBubble(T *buf, int len)
{
	int i = 0;
	for (i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (buf[j] > buf[j + 1])
			{
				mySwap(buf[j], buf[j + 1]);
			}
		}
	}
	return i;
}

template <class T>
int SortBubbleUpd1(T *buf, int len)
{
	int i = 0, cnt = 0;
	i = len - 1;
	while (i > 0)
	{
		int pos = 0;
		for (int j = 0; j < i; j++)
		{
			if (buf[j] > buf[j + 1])
			{
				mySwap(buf[j], buf[j + 1]);
				pos = j;
			}
		}
		cnt++;
		i = pos;
	}
	return cnt;
}

template <class T>
int SortBubbleUpd2(T *buf, int len)
{
	int low = 0, high = len - 1;
	int j, cnt = 0;
	while (low < high)
	{
		for (j = low; j < high; ++j)
		{
			if (buf[j] > buf[j+1])
			{
				mySwap(buf[j], buf[j+1]);
			}
		}
		--high;
		for (j = high; j > low; --j)
		{
			if (buf[j] < buf[j-1])
			{
				mySwap(buf[j], buf[j-1]);
			}
		}
		++low;
		cnt ++;
	}
	return cnt;
}

#endif
