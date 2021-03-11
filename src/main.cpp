#include "../header/includes.h"
#include "../header/utility.h"
#include "../header/io.h"
#include "../header/functions.h"
// #include "../header/your_class_here.h"

using namespace std;

int main(int argc, char *argv[])
{
	head(argc, argv, "Hash Code Template"); // Prints the title / usage info

	string path = argv[1]; // Path to input file specified from prompt

	vector<vector<string>> data = parse_data(path); // get data form input file

	print_data(data);

	// print_results(path.at(6));

	system("pause");
	return 0;
}
