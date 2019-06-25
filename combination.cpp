#include <iostream>
using namespace std;

int carr[100][100];

int combi(int n, int r){
	int k = r;
	int d = n-r;
	for(int i = 0; i <= k; i++){
		for(int j = 0; j <= d; j++){
			if(i == 0 || j == 0) carr[i][j] = 1;
			else carr[i][j] = carr[i][j-1] + carr[i-1][j];
		}
	}
	return carr[k][d];
}

int main()
{
	int n, r;
	cin >> n >> r;
	cout << combi(n, r) << endl;
}
