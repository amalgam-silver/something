#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "sortBubble.h"
#include "sortSelection.h"
#include "sortHeap.h"
using namespace std;

#define random(x)	(rand() % x)
#define LEN	10000
//#define DEBUG

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
#endif
	}
#ifdef DEBUG
	cout << endl;
#endif

	/* Sorting... */
//	cout << SortBubbleUpd2(buf, LEN) << endl;
//	cout << SortSelectionUpd1(buf, LEN) << endl;

#ifdef DEBUG
	/* Printing... */
	for (int i = 0; i < LEN; i++)
		cout << buf[i] << ' ';
#endif
}
