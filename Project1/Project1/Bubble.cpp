#include <iostream>

#include <string>

namespace BubbleSort
{

	int BubbleSort()
	{
		int max;

		std::cout << "\nProgram for Ascending order of Numeric Values using BUBBLE SORT";
		std::cout << "\n\nThe total number of elements: 500 000 000 ";
		max = 500000;

		int *numarray = new int[max];

		for (int i = 0; i < max; i++)
		{
			numarray[i] = std::rand() % 100;
		}

		std::cout << "\n\nSorting   : ";
		//	for (int k = 0; k < max; k++)
		//		std::cout << numarray[k] << " ";

		std::cout << "\n";

		for (int i = 1; i < max; i++)
		{
			for (int j = 0; j < max - i; j++)
			{
				if (numarray[j] > numarray[j + 1])
				{
					int temp = numarray[j];
					numarray[j] = numarray[j + 1];
					numarray[j + 1] = temp;
				}
			}
			std::cout << "Iteration " << i << "\n";
			//		for (int k = 0; k < max; k++)
			//			std::cout << numarray[k] << " ";

		}
		std::cout << "\n\nThe numbers in ascending order are given below:\n\n";

		for (int i = 0; i < max; i++)
		{
			//		std::cout << "Sorted [" << i + 1 << "] element: ";
			std::cout << numarray[i] << " ";
			//		std::cout << "\n";
		}
		delete[] numarray;
		return 0;
	}
}