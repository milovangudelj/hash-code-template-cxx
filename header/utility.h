#ifndef utility_h
#define utility_h

#include "includes.h"

using namespace std;

// extern your_object_collection_here

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

void print_containers()
{
	// basic for loop to print collection contents
}

void head(int &argc, char *argv[], string title)
{
	if (argc < 2) // Print usage info
	{
		fmt::print("{0}{3}{3}"
					  "Usage: {1} [arguments]{3}{3}"
					  "Arguments{3}{2: >11}"
					  "<file>   A text file containing the input data set.{3}{2: >11}"
					  "         (e.g. '{1} a_example'){3}{3}",
					  title.c_str(), argv[0], "", "\n");

		exit(0);
	}

	system("cls");
	fmt::print("┌─{0:─^{2}}─┐\n"
				  "│ {1: ^{2}} │\n"
				  "└─{0:─^{2}}─┘\n\n",
				  "", title.c_str(), title.size()); // Print the title
}

#endif