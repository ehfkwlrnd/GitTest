#include <iostream>
using namespace std;

int fibo(int n){
	int p = 0, q = 1, r;
	if(n == 0) return p;
	if(n == 1) return q;
	for(int i = 0; i < n-1; i++){
		r = p + q;
		p = q;
		q = r;
	}
	return r;
}
int main()
{
	int n;
	cin >> n; 
	cout << fibo(n);
}
