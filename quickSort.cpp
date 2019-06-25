#include <iostream>
using namespace std;

void display(int* arr, int n){
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void quickSort(int* arr, int left, int right){
	if(left >= right) return;
	int i = left+1, j = right;
	int key = arr[left];
	while(i < j){
		while(key > arr[i] && i < right)i++;
		while(key < arr[j] && j > left)j--;
		if(i < j){
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	int temp = arr[left];
	arr[left] = arr[j];
	arr[j] = temp;
	
	quickSort(arr, left, j-1);
	quickSort(arr, j+1, right);
}

int main()
{
	int arr[9] = {4, 5, 1, 2, 7, 8, 3, 9, 6};
	display(arr, 9);
	quickSort(arr, 0, 8);
	display(arr, 9);
}
