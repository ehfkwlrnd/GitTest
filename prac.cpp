#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string* words = new string[n];
	for(int i = 0; i < n; i++){
		cin >> words[i];
	}
}
