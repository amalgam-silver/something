#include <iostream>
#include <string>

#include <vector>
#include <list>
#include <deque>
#include <set>
#include <iterator>
#include <algorithm>

using namespace std;

//#define _5_4_ALGORITHM
//#define _5_4_1_RANGE
//#define _5_5_1_INSERTER
//#define _5_5_2_STREAM_ITERATORS
#define _5_5_3_REVERSE_ITERATORS

template<class _container_>
void myPrint(_container_ &col)
{
	typename _container_::iterator pos;
	for (pos = col.begin(); pos != col.end(); ++pos)
	{
		cout << *pos << ' ';
	}
	cout << endl;
}

int main()
{
/*
 * 5.5.3 Reverse Iterators
 *
 * */
#ifndef _5_5_3_REVERSE_ITERATORS
	vector<int> col;
#endif

/*
 * 5.5.2 Stream Iterators
 *
 * */
#ifdef _5_5_2_STREAM_ITERATORS
	vector<int> col1;

	/*
	 *  istream_iterator<int>() returns a EOF
	 *  the end condition of copy is first para == second para
	 *  so, when cin == EOF or other err, copy will end
	 * */
	copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(col1));

	sort(col1.begin(), col1.end());

	unique_copy(col1.begin(), col1.end(), ostream_iterator<int>(cout, " "));

#endif


/*
* 5.5.1 INSERTOR
*
* */
#ifdef _5_5_1_INSERTER

	list<int> col1;
	vector<int> col2;
	deque<int> col3;
	multiset<int> col4;

	for (int i = 0; i < 9; i++)
	{
		col1.push_back(i);
		col2.push_back(i * 10);
		col3.push_back(i * 100);
		col4.insert(i * 2);
	}
	list<int>::iterator pos5 = find(col1.begin(), col1.end(), 50);
	reverse(pos5, col1.end());

	copy(col1.begin(), col1.end(), back_inserter(col2));
	copy(col1.begin(), col1.end(), front_inserter(col3));
	copy(col1.begin(), col1.end(), inserter(col4, col4.begin()));

	myPrint(col1);
	myPrint(col2);
	myPrint(col3);
	myPrint(col4);

#endif

/*
 * 5.4.1 Range
 *
 * */
#ifdef _5_4_1_RANGE
	vector<int> a,b;
	vector<int>::iterator pos25, pos35, pos;

	for (int i = 0; i < 40; i++)
	{
		a.push_back(i);
		b.push_back(i);
	}

	pos25 = find(a.begin(), a.end(), 25);
	pos35 = find(b.begin(), b.end(), 35);
	pos = find(pos25, pos35, 36);

	cout << *pos << endl;

	for (pos = pos25; pos != pos35; ++pos)
	{
		cout << *pos << ' ';
	}
*/
#endif

/*
 * 5.4 Algorithm
 *
 * */
#ifdef _5_4_ALGORITHM
	vector<int> a;
	vector<int>::iterator pos;

	a.push_back(3);
	a.push_back(2);
	a.push_back(4);
	a.push_back(1);
	a.push_back(6);
	a.push_back(5);

	for (pos = a.begin(); pos < a.end(); ++pos)
	{
		cout << *pos << ' ';
	}
	cout << endl;

	pos = min_element(a.begin(), a.end());
	cout << "min: " << *pos << endl;
	pos = max_element(a.begin(), a.end());
	cout << "max: " << *pos << endl;

	sort(a.begin(), a.end());
	for (pos = a.begin(); pos < a.end(); ++pos)
	{
		cout << *pos << ' ';
	}
	cout << endl;

	pos = find(a.begin(), a.end(), 3);
	reverse(a.begin(), pos);

	for (pos = a.begin(); pos < a.end(); ++pos)
	{
		cout << *pos << ' ';
	}
	cout << endl;
#endif

}
