#ifndef functions_h
#define functions_h

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include "colors.h"

using namespace std;

void start()
{
	cout << "Started...\n\n";
}

int score()
{
	int sum = 0;

	for (int i = 0; i < 10; i++)
	{
		sum += 1;
	}

	return sum;
}

// Functions to be inserted here...

void print_data(vector<vector<string>> &data)
{
	for (vector<string> line : data)
	{
		for (string token : line)
		{
			cout << token << " ";
		}
		cout << endl;
	}
}

void head(int &argc, char *argv[], string title)
{
	if (argc < 2) // Print usage info
	{
		printf("%s\n\nUsage: %s [arguments]\n", title.c_str(), argv[0]);
		printf("\nArguments\n%20sA text file containing the input data set.\n", "   <file>   ");
		printf("%20s(e.g. '%s a_example')\n\n", "", argv[0]);
		exit(0);
	}

	system("cls");
	printf("%s%c%s%c\n", BOLDWHITE, char(218), string(title.size() + 2, char(196)).c_str(), char(191)); // ┌────────────────────┐
	printf("%c %s %c\n", char(179), title.c_str(), char(179));														 // │ Title goes here... │
	printf("%c%s%c\n%s\n", char(192), string(title.size() + 2, char(196)).c_str(), char(217), RESET);	 // └────────────────────┘
}

#endif