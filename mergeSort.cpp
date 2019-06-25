#include <iostream>
#include <stdlib.h>
using namespace std;

void display(int* arr, int n){
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int temp[9];
void mergeSort(int* arr, int left, int right){
	if(left == right) return;
	int mid = (left+right)/2;
	mergeSort(arr, left, mid);
	mergeSort(arr, mid+1, right);
	int i = left, j = mid+1;
	int c = left;
	while(i <= mid && j <= right){
		if(arr[i] < arr[j]) temp[c++] = arr[i++];
		else temp[c++] = arr[j++];
	}
	for(;i <= mid; i++) temp[c++] = arr[i];
	for(;j <= right; j++) temp[c++] = arr[j];
	for(i = left; i <= right; i++)arr[i] = temp[i];
}

int main()
{
	int arr[9] = {4, 5, 1, 2, 7, 8, 3, 9, 6};
	//display(arr, 9);
	mergeSort(arr, 0, 8);
	display(arr, 9);
}
