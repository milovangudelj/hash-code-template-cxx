#ifndef classes_h
#define classes_h

#include <iostream>
#include <vector>
#include <string>

class Foo
{
public:
	int idx;
	int score;

	Foo() = delete;
	Foo(int _idx) : idx(_idx) {}

	bool operator<(Foo &f)
	{
		return idx < f.idx;
	}

	// Member functions go here
};

class Bar
{
public:
	int idx;
	int score;

	Bar() = delete;
	Bar(int _idx) : idx(_idx) {}

	bool operator<(Bar &b)
	{
		return idx < b.idx;
	}

	// Member functions go here
};

#endif