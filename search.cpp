#include <iostream>

using namespace std;

int main() {
	int n = 7;
	int arr[] = {1,2,3,4,5,6,7};
	int x = 5;
	
	// binary search
	int a = 0, b = n-1;
	while (a <= b) {
		int k = (a+b)/2;
		if (arr[k] == x) {
			cout << k << endl;
			break;
		}
		if (arr[k] > x) b = k-1;
		else a=k+1;
	}
	
	// using jump
	int k = 0;
	for (int i = n/2; i >= 1; i /= 2) {
		while (k+i < n && arr[k+i] <= x) k += i;
	}
	if (arr[k] == x) cout << k << endl;
}
