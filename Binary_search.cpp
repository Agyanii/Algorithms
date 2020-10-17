#include"bits/stdc++.h"
using namespace std;


// or simply we can use stl's binary search function.

int binarySearch(int a[], int target) {
	return binary_search(a, a + n, target);
}	

int main() {
	int a[] = {2, 9 ,3, 1, 4 , 5, 6 ,8 ,7};
	int n = sizeof(a) / sizeof(a[0]);
	int target = 7;
	sort(a, a + n);
	int l = 0, r = n - 1;
	
	bool f = false;
	while (l < r ) {
		int m = l + (r - l) / 2;
		if(a[m] == target) {
			f = true;
			break;
		}
		else if(a[m] < target) {
			r = m - 1;
		}
		else l = m + 1;
	}
	
	if(f) cout << "Element found at index : "	 << m << "\n";
	else cout << "Element isn't in the list\n";
	
   	return 0;
}
