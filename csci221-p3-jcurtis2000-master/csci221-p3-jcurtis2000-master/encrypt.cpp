#include <iostream>
#include <string>
#include <vector>
#include "encrypt.h"
using namespace std;

vector<string> enc::beginEnc() {
	int inputSize = 4;
	string perm = "2143";
	string input = "gentlemen do not read each other's mail";
	string output = "";

	int splitString = input.length() / inputSize;
	vector<string> ret;

	for (auto i = 0; i < splitString; i++)
	{
		ret.push_back(input.substr(i * inputSize, inputSize));
	}
	if (input.length() % inputSize != 0)
	{
		ret.push_back(input.substr(inputSize * splitString));
		int remainder = inputSize - (input.length() % inputSize);
		int i = 0;
		for(i = 0; i < remainder; i++){
			ret[ret.size()-1].push_back('x');
		}
	}
	cout << "Encrypted ciphertext file: ";
	for (auto i: ret)
		cout << i << ' ';
	cout << endl;

return ret;
}
