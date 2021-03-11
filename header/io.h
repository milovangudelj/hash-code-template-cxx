#ifndef parser_h
#define parser_h

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iterator>
#include <sstream>

using namespace std;

vector<string> tokenize(string &s)
{
	istringstream iss(s);
	vector<string> tokens{istream_iterator<string>{iss}, istream_iterator<string>{}};

	return tokens;
}

vector<vector<string>> parse_data(string &path)
{
	ifstream input;
	input.open(path);

	string line;
	vector<vector<string>> data;

	if (input.is_open())
	{
		printf("Reading file...\n\n");
		while (getline(input, line))
		{
			if (line != "")
				data.push_back(tokenize(line));
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

vector<int> count(int b, int t) // form index "b" return "t" number of elements
{
	vector<int> out;
	for (int i = 0; i < t; i++)
	{
		out.push_back(i + b);
	}
	return out;
}

void init_data(vector<string> &data)
{
	printf("Initialising data...\n");

	// Initialise data

	printf("Data initialised.\n\n");
}

void print_results(char t)
{
	string o = "";

	// Append relevant data from a data structure to output string "o"

	string filename = "Output\\" + string(1, t) + "_output_data";
	ofstream output(filename);

	if (output.is_open())
	{
		output << o;

		output.close();
	}
	else
	{
		cout << "Failed to open file...\n";
	}
}

#endif