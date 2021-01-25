#include <iostream>

using namespace std;
int partitionArray(int input[], int start, int end){
	int pivot = input[start];
	//count elements small than pivot than
	int count = 0;
	for(int i= start + 1; i <=end; i++){
		if(input[i] <= pivot){
			count++;
		}
	}
	int pivotIndex = start + count;
	int temp = input[start];
	input[start] = input[pivotIndex];
	input[pivot] = temp;
	// left contain small
	//right contain large
	int i = start , j = end ;
	 while (i <= pivotIndex && j >= pivotIndex )
	 {
	 	while(input[i] <= pivot){
	 		i++;
	 	}
	 	while(input[j] > pivot){
	 		j--;
	 	} 
	 	if(i<pivotIndex && j > pivotIndex){
	 		int temp = input[i];
	 		input[i] = input[j];
	 		input[j] = temp;
	 		i++;
	 		j--;
	 	}
	 }
	 return pivotIndex;
}

void quick_Sort(int input[], int start, int end){
	if (start >= end){
		return;
	}
	int pivotIndex = partitionArray(input, start ,end);
	quick_Sort(input, start, pivotIndex - 1);
	quick_Sort(input, pivotIndex + 1, end);
}







int main(){
	int n;
	cin >> n;
	int *input = new int[n];
	for(int i=0; i < n; i++){
		cin >> input[i];
	}
	quick_Sort(input, n, n-1);
	for(int i =0; i<n; i++){
		cout << input[i] << " ";
	}
	delete[] input;
}