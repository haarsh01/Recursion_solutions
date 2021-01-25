#include <iostream>

using namespace std;

void removeDuplicate(char input[], int newIndex, int index){
	if(input[index] == '\0'){
		input[newIndex] = input[index -1];
		input[newIndex + 1] = '\0';
		return;
	}
	if (input[index] ==  input[index - 1]){
		removeDuplicate(input, newIndex, index + 1);
		return;
	}
	else{
		input[newIndex] = input[index - 1];
	}
	removeDuplicate(input , newIndex + 1, index + 1);
}


void removeConsecutiveDuplicates(char input[]){
	removeDuplicate(input, 0 , 1);
}


int main(){
	char s[100000];
	cin >>  s;
	removeConsecutiveDuplicates(s);
	cout <<  s <<  endl;
}