#include <iostream>
using namespace std;

int arr[5] = {3, 5, 1, 7, 2};
void MaxMin(int i, int j, int* max, int* min){
	if(i==j){
		int temp = arr[i];
		if(*max < temp)*max = temp;
		if(*min > temp)*min = temp;
		return;
	}
	MaxMin(i, (i+j-1)/2, max, min);
	MaxMin((i+j+1)/2, j, max, min);
}

int main()
{
	int M = 0;
	int m = 99;
	MaxMin(0, 4, &M, &m);
	printf("%d %d\n", M, m);
	
}
