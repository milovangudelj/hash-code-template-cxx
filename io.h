#ifndef parser_h
#define parser_h

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iterator>
#include <sstream>

std::vector<std::string> parse_data(std::string &path)
{
	std::ifstream input;
	input.open(path);

	std::string line;
	std::vector<std::string> data;

	if (input.is_open())
	{
		printf("Reading file...\n\n");
		while (getline(input, line))
		{
			if (line != "")
				data.push_back(line);
		}
		input.close();
	}
	else
	{
		printf("Failed to open file...\n");
		exit(0);
	}

	return data;
}

std::vector<std::string> tokenize(std::string &s)
{
	std::istringstream iss(s);
	std::vector<std::string> tokens{std::istream_iterator<std::string>{iss}, std::istream_iterator<std::string>{}};

	return tokens;
}

// int init_data(std::vector<std::string> &data, std::vector<Book> &books, std::vector<Library> &libs)
// {
// 	printf("Initialising data...\n");

// 	// Initialise data

// 	printf("Data initialised.\n");

// 	return dln;
// }

// void print_results(std::vector<Library> &libs, char t)
// {
// 	std::string out = "";
// 	int sgnd_libs = 0;

// 	for (Library &l : libs)
// 	{
// 		// Append relevant data to out
// 	}

// 	std::ofstream output_ds;
// 	std::string filename = std::string(1, t) + "_output_data";
// 	output_ds.open(filename.c_str());
// 	if (output_ds.is_open())
// 	{
// 		// append relevant data

// 		output_ds.close();
// 	}
// 	else
// 	{
// 		std::cout << "Failed to open file...\n";
// 	}
// }

#endif