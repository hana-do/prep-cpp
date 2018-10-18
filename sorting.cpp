#include <iostream>
#include <array>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void bubbleSort(array<int, 8> &a) {
	for (int i=0; i<8; i++) {
		for (int j=0; j<8-1; j++) {
			if (a[j] > a[j+1]) {
				swap(a[j], a[j+1]);
			}
		}
	}
	
	for (int i=0; i<8; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void libSortDesc(vector<int> &v) {
	sort(v.rbegin(), v.rend()); // descending
	
	for (int i=0; i<7; i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

void libSortAsc(vector<int> &v) {
	sort(v.begin(), v.end()); // ascending
	
	for (int i=0; i<7; i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

int main() {
	array<int, 8> a {1,3,8,2,9,2,5,6};
	bubbleSort(a);
	
	vector<int> v = {4,2,5,3,5,8,3};
	libSortDesc(v);
	libSortAsc(v);
	
	// lib sort array
	int n = 7;
	int b[] = {4,2,5,3,5,8,3};
	sort(b,b+n);
	
	for (int i=0; i<7; i++) {
		cout << b[i] << " ";
	}
	cout << endl;
	
	// lib sort string
	string s = "monkey";
	sort(s.begin(), s.end());
	cout << s << endl;
	
	// lib sort pair
	vector<pair<int, int>> v1;
	v1.push_back({1,5});
	v1.push_back({2,3});
	v1.push_back({1,2});
	sort(v1.begin(), v1.end());
	
	// lib sort tuple
	/* vector<tuple<int,int,int>> v2;
	v2.push_back({2,1,4});
	v2.push_back({1,5,3});
	v2.push_back({2,1,3});
	sort(v2.begin(), v2.end()); */
}
