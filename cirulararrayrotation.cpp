#include <iostream>irst Occurence //
using namespace std;
//F
int first(int arr[], int n, int i, int key){
	if(i==n){
		return -1;
	}
	if(arr[i] == key){
		return i;
	}
	return first(arr, n, i+1, key);

}

//Last Occurence //
int last(int arr[], int n, int i, int key){
	int rest = last(arr, n, i+1, key);
	if(rest != -1){
		return rest;
	}
	if(arr[i]==key){
		return i;
	}
	return -1;
}
int main(){
	int arr[]={4,2,1,2,5,2,7};
	cout << first(arr,7,0,2 )<< endl;
	cout << last(arr,7,0,2) << endl;
	return 0;
}
