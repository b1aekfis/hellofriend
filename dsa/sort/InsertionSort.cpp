#include <bits/stdc++.h>

using namespace std;

void InsertionSort(int a[], int n) {
	for (int i = 1; i < n; ++i) {
		int temp = a[i], j;
		for (j = i - 1; j >= 0; --j) {
			if (a[j] < temp) {
				break;
			}
			a[j+1] = a[j];
		}
		a[j+1] = temp; // inserting
	}
}

int main() {

    cout << "{ 49, 72, 72, 67, 97, 17, 37, 25 }\n";

	int a[] = { 49, 72, 72, 67, 97, 17, 37, 25 }; // a[]: vung nho duoc con tro a tro vao
	int n=sizeof(a)/sizeof(int);

	InsertionSort(a, n); cout << endl;
	
	for(int i = 0; i < n; ++i){
		cout << a[i] <<" ";
	}

	return 0;
}