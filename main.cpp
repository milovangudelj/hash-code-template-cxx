#include <iostream>
#include <vector>
#include <string>
#include "colors.h"
#include "io.h"
#include "functions.h"
#include "classes.h"

using namespace std;

int main(int argc, char *argv[])
{
	head(argc, argv, "Hash Code Template"); // Prints the title / usage info

	string path = argv[1]; // Path to input file specified from prompt

	vector<vector<string>> data = parse_data(path); // get data form input file

	print_data(data);

	start();

	printf("The score is: %9d points\n\n", score());

	print_results(path.at(6));

	system("pause");
	return 0;
}
