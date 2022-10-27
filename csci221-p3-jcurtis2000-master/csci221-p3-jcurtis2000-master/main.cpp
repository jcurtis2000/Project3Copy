#include <iostream>
#include <unistd.h>
#include <fstream>
#include <string>
#include <vector>
#include "encrypt.h"
//#include "decrypt.h"
using namespace std;


//determine block size in main and permutation order
int main(int argc, char** argv){
	char opt;
	string inputFile;
	string outputFile;
	int eflag, dflag, iflag, oflag;

	eflag = 0;
	dflag = 0;
	iflag = 0;
	oflag = 0;

	while( (opt = getopt(argc, argv, "i:o:ed")) != -1){   
		switch(opt){
		case 'i':
			iflag = 1;
			inputFile = optarg;
			break;
		case 'o':
			oflag = 1;
			outputFile = optarg;
			break;
		case 'e':
			eflag = 1;
			break;
		case 'd':
			dflag = 1;
			break;
		default:
			cout << "Unknown option " << argv[0] << endl;
		}
	}
	if(argc != 6 || (iflag == 0) || (oflag == 0) || 
			(eflag == dflag)){
		cout << "Error!" << endl;
	}
	int inputSize;
	string perm;
	cout << "Welcome to the Permutation Cipher" << endl;
	cout << "Selected Mode: ";
		if (eflag == 1){
			cout << "Encrypt" << endl;
		}else{
			cout << "Decrypt" << endl;
		}
	cout << "Input File: " << argv[3] << endl;
	cout << "Output File: " << argv[5] << endl;
	cout << "Please enter the block size (2-8) and the permutation (e.g., 4 2413): ";

	if (eflag == 1){
		cin >> inputSize >> perm;
		enc encrypt;
		encrypt.beginEnc();}
	//else{
		//cin >> inputSize >> perm;
		//dec decrypt;
		//decrypt.beginDec();
	return 0;
}
