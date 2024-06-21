#include <bits/stdc++.h>

using namespace std;

void SelectionSort(int a[], int n) {
	
	for(int i=0; i<(n-1); ++i) {
		int m = i;
		for(int j=i+1; j<n; ++j) {
			if(a[j] < a[m]){
				m = j; // selecting
			}
		}
		if(m != i) {
			swap(a[i], a[m]);
		}
	}
}

int main() {
	
    cout << "{ 8, 5, 2, 7, 9, 3, 2 }\n";

	int a[] = { 8, 5, 2, 7, 9, 3, 2 };

	int n=sizeof(a)/sizeof(int);

	SelectionSort(a, n); cout << endl;

	for(int i=0; i<n; ++i) {
		cout << a[i] << " ";
	}

	return 0;
}