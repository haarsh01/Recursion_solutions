#include <iostream>
using namespace std;

int sumofDigits(int n) {
	if(n <= 9){
		return n;
	}
	return n%10 + sumofDigits(n/10);
}


int main() {
	 int n;
	 cin >> n ;
	 cout << sumofDigits(n) <<  endl;
}