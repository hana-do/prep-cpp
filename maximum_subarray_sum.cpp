#include <iostream>
#include <array>

using namespace std;

int maxSubarraySum1(array<int, 8> a) {
	int best = 0;
	int n = a.size();
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			int sum = 0;
			for (int k = i; k <= j; k++) {
				sum += a[k];
			}
			best = max(best, sum);
		}
	}
	return best;
}

int maxSubarraySum2(array<int, 8> a) {
	int best = 0;
	int n = a.size();
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = i; j < n; j++) {
			sum += a[j];
			best = max(best, sum);
		}
	}
	return best;
}

/* Kadane's algorithm */
int maxSubarraySum3(array<int, 8> a) {
	int best = 0, sum = 0;
	int n = a.size();
	for (int i = 0; i < n; i++) {
		sum = max(a[i], sum + a[i]);
		best = max(best, sum);
	}
	return best;
}

int main() {
	array<int, 8> a {-1, 2, 4, -3, 5, 2, -5, 2};
	cout << maxSubarraySum1(a) << "\n";
	cout << maxSubarraySum2(a) << "\n";
	cout << maxSubarraySum3(a) << "\n";
}
