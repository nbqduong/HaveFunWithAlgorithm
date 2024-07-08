//Given an array arr[] of size n, return an equilibrium index(if any) or -1 if no equilibrium index exists.The equilibrium index of an array is an index such that the sum of elements at lower indexes equals the sum of elements at higher indexes.
//
//Note: Return equilibrium point in 1 - based indexing.Return - 1 if no such point exists.

#include <iostream>

int func(int* arr, int n)
{
	std::cout << "N = " << n << std::endl;
	int arr_sum = 0,
		prefix = 0;

	
	//calculate sum
	for (int i = 0; i < n; i++)
	{
		arr_sum += arr[i];
	}
	prefix = 0;

	//sum = prefix + arr[i] + posfix
	for (int i = 0; i < n; i++)
	{
		
		int postfix = arr_sum - prefix - arr[i];
		if (prefix == postfix) return (i+1);

		prefix += arr[i];
	}

	return -1;
}

int main()
{
	//delare
	int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
	//exe
	std::cout << func(arr,sizeof(arr)/sizeof(arr[0]));

	return 0;
}