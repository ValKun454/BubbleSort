#include <iostream>
#include <time.h>

using namespace std;

void bubblesort(int* nums, int n);
void fill(int* nums, int n);

int main() {
	srand(time(NULL));

	int n;
	cout << "Enter the number of elements: ";
	cin >> n;

	int *nums = new int[n];
	fill(nums, n);

	for (int i = 0; i < n; i++) {
		cout << "El " << i << ": " << nums[i] << endl;
	}

	bubblesort(nums, n);

	cout << endl;

	for (int i = 0; i < n; i++) {
		cout << "El " << i << ": " << nums[i] << endl;
	}

	delete[] nums;
	return 0;
}

void bubblesort(int* nums, int n) {
	int length = n;
	while (length != 0)
	{
		int max_index = 0;
		for (int i = 1; i < length; i++)
		{
			if (nums[i - 1] > nums[i]) {
				int temp = nums[i - 1];
				nums[i - 1] = nums[i];
				nums[i] = temp;

				max_index = i;
			}
		}
		length = max_index;
	}
}

void fill(int* nums, int n) {
	for (int i = 0; i < n; i++) {
		nums[i] = rand() % 100;
	}
}