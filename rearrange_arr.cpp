// CPP code to rearrange an array such that
// even index elements are smaller and odd
// index elements are greater than their
// next.
#include <iostream>
using namespace std;

void rearrange(int* arr, int n)
{
	for (int i = 0; i < n - 1; i++) {
		if (i % 2 == 0 && arr[i] > arr[i + 1])
			swap(arr[i], arr[i + 1]);

		if (i % 2 != 0 && arr[i] < arr[i + 1])
			swap(arr[i], arr[i + 1]);
	}
}

/* Utility that prints out an array in
a line */
void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";

	cout << endl;
}

/* Driver function to test above functions */
int main()
{
	int arr[] = { 6, 4, 2, 1, 8, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Before rearranging: \n";
	printArray(arr, n);

	rearrange(arr, n);

	cout << "After rearranging: \n";
	printArray(arr, n);

	return 0;
}
