#include <iostream>

void func(int* arr, int n)
{
	std::cout << "N = " << n << std::endl;
	int left_max ,
		i_left = 0,
		i_right = n-1,
		right_max,
		collum = 0,
		width = 0,
		rain =0;

	left_max = arr[i_left];
	right_max = arr[i_right];

	while (i_left < i_right)
	{
		
		if (left_max < right_max)
		{
			if (left_max > arr[i_left+1])
			{
				rain += left_max - arr[i_left + 1];
				
			}
			else
			{
				left_max = arr[i_left + 1];
			}
			i_left++;
		}
		else
		{
			if (right_max > arr[i_right - 1])
			{
				rain += right_max - arr[i_right - 1];
			}
			else
			{
				right_max = arr[i_right - 1];
			}
			i_right--;
		}
	}
	std::cout << rain;
}

int main()
{
	//delare
	int arr[] = { 11, 12, 5, 0, 7, 7, 8 };
	//exe
	func(arr,sizeof(arr)/sizeof(arr[0]));

	return 0;
}