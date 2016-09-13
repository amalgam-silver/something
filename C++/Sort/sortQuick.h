#ifndef _SORT_QUICK
#define _SORT_QUICK

#include "sortInsert.h"
template <class T>
int SortQuickBase(T *buf, int len, int minPart)
{
	int low = 0, hgh = len - 1;
	int key = buf[0];
	while (low < hgh)
	{
		while ((low < hgh) && (key <= buf[hgh]))		hgh--;
		buf[low] = buf[hgh];

		while ((low < hgh) && (key >= buf[low]))		low++;
		buf[hgh] = buf[low];
	}
	buf[low] = key;
	if (low > minPart)	SortQuickBase(buf, low, minPart);
	if ((len - low) > minPart + 1)	SortQuickBase(&buf[low + 1], len - 1 - low, minPart);

	return 0;
}

template <class T>
int SortQuick(T *buf, int len)
{
	SortQuickBase(buf, len, 1);
	return 0;
}

template <class T>
int SortQuickUpd1(T *buf, int len)
{
	SortQuickBase(buf, len, 8);
	SortInsert(buf, len);
	return 1;
}

#endif
