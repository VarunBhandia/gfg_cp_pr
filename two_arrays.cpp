// C++ program for above approach

#include <bits/stdc++.h>
using namespace std;

// Function to check if two arrays
// can be made equal or not by swapping
// pairs of only one of the arrays
void checkArrays(int arr1[], int arr2[], int N)
{
	// Stores elements required
	// to be replaced
	int count = 0;

	// To check if the arrays
	// can be made equal or not
	bool flag = true;

	// Traverse the array
	for (int i = 0; i < N; i++) {

		// If array elements are not equal
		if (arr1[i] != arr2[i]) {

			if (arr1[i] == 0)

				// Increment count by 1
				count++;
			else {

				// Decrement count by 1
				count--;
				if (count < 0) {
					flag = 0;
					break;
				}
			}
		}
	}

	// If flag is true and count is 0,
	// print "Yes". Otherwise "No"
	if (flag && count == 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}

// Driver Code
int main()
{
	// Given arrays
	int arr1[] = { 0, 0, 1, 1 };
	int arr2[] = { 1, 1, 0, 0 };

	// Size of the array
	int N = sizeof(arr1) / sizeof(arr1[0]);
	checkArrays(arr1, arr2, N);

	return 0;
}
