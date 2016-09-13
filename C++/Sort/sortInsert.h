#ifndef _SORT_INSERT
#define _SORT_INSERT

template <class T>
int SortInsert(T *buf, int len)
{
	for (int i = 1; i < len; i++)
	{
		if (buf[i] < buf[i - 1])
		{
			int tmp = buf[i];
			int j = i - 1;
			while ((tmp < buf[j]) && (j >= 0))
			{
				buf[j + 1] = buf[j];
				j--;
			}
			buf[j + 1] = tmp;
		}
	}
	return 0;
}

#endif
