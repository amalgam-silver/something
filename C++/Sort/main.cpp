#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "sortBubble.h"
#include "sortSelection.h"
#include "sortHeap.h"
#include "sortQuick.h"
#include "sortInsert.h"
#include "sortMerge.h"
using namespace std;

#define random(x)	(rand() % x)
#define LEN	10000
#define DEBUG

int main()
{
	int buf[LEN];

	srand((int)time(0));

	/* Generating randam data... */
	for (int i = 0; i < LEN; i++)
	{
		buf[i] = random(1000);
#ifdef DEBUG
		cout << buf[i] << ' ';
		if (i == LEN - 1)	cout << endl;
#endif
	}

	/* Sorting... */
//	cout << SortInsert(buf, LEN) << endl;
//	cout << SortBubbleUpd2(buf, LEN) << endl;
//	cout << SortSelectionUpd1(buf, LEN) << endl;
//	cout << SortHeap(buf, LEN) << endl;
//	cout << SortQuickUpd1(buf, LEN) << endl;
	int res[LEN];
	cout << SortMerge(buf, res, LEN) << endl;

#ifdef DEBUG
	/* Printing... */
	for (int i = 0; i < LEN; i++)
		cout << res[i] << ' ';
#endif
}
