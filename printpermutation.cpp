//Given an input string (STR), find and return all 
//ossible permutations of the input string.

#include <iostream>
using namespace std;

void printPermutations(string input , string output){
	if (input.length() == 0){
		cout << output <<  endl;
		return;
	}
	for (int i =0; i <= output.length(); i++){
		printPermutations(input.substr(1), output.substr(0,i) + input[0]+ output.substr(i));
	}
}
void printPermutations(string input){
	printPermutations(input, "");
	return;
}


int main() {
	string input;
	cin >> input;
	printPermutations(input);
	return 0;
}