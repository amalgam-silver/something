#include <iostream>
#include "myClass.h"
#include <utility>

using namespace std;

template<class type>
myClass<type>::myClass()
{}

template<class type>
type myClass<type>::func(type &a, type &b)
{
	return a + b;
}

void fun(pair<int, string> a)
{
	cout << a.first << endl;
	cout << a.second << endl;
}
void reStack()
{
	A a;
	cout << a.a << endl;
	a.a = 987;
}
int main()
{
	pair<int, string> p(1, "hello");
	myClass<float> a;
	float x = 1.3, y = -2.4;

	reStack();
	reStack();

	A *pa = new A;
	cout << pa->a << endl;
	pa->a = 123;
	delete pa;
	pa = new A;
	cout << pa->a << endl;


	fun(p);

	cout << "hello world" << endl;

	cout << a.func(x, y) << endl;
}
