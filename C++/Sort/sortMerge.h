#ifndef _SORT_MERGE
#define _SORT_MERGE

template <class T>
void Merge(T *buf, T *res, int head, int mid, int end)
{
	int i = head, j = mid + 1, k = head;
	for (k = head; (i <= mid) && (j <= end); k++)
	{
		if (buf[i] < buf[j])	res[k] = buf[i++];
		else					res[k] = buf[j++];
	}
	while(i <= mid)	res[k++] = buf[i++];
	while(j <= end) res[k++] = buf[j++];
}

template <class T>
void SortMergeBase(T *buf, T *res, int start, int end)
{
	if (start == end)	res[start] = buf[start];
	else
	{
		T res2[end+1];
		int mid = (start + end) / 2;
		SortMergeBase(buf, res2, start, mid);
		SortMergeBase(buf, res2, mid + 1, end);
		Merge(res2, res, start, mid, end);
	}
}

template <class T>
int SortMerge(T *buf, T *res, int len)
{
	SortMergeBase(buf, res, 0, len - 1);
	return 0;
}

#endif
