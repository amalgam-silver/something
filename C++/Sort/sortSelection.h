#ifndef SORT_SELECTION
#define SORT_SELECTION

template <class T>
int SortSelection(T *buf, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		int min = buf[i];
		int minIndex = i;
		for (int j = i + 1; j < len; j++)
		{
			if (min > buf[j])
			{
				min = buf[j];
				minIndex = j;
			}
		}
		mySwap(buf[minIndex], buf[i]);
	}
	return i;
}

template <class T>
int SortSelectionUpd1(T *buf, int len)
{
	int i;
	for (i = 0; i < len / 2; i++)
	{
		int min = buf[i], max = buf[i];
		int minIndex = i, maxIndex = i;
		for (int j = i + 1; j < len - i - 1; j++)
		{
			if (min > buf[j])
			{
				min = buf[j];
				minIndex = j;
			}

			if (max < buf[j])
			{
				max = buf[j];
				maxIndex = buf[j];
			}
		}
		mySwap(buf[minIndex], buf[i]);
		mySwap(buf[maxIndex], buf[len - i - 1]);
	}
	return i;
}

#endif
