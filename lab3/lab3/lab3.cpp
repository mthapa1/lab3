//Madan Thapa
//2/21/2016
//Lab 3
#include <iostream>
#include <iomanip>
using namespace std;



// Prototypes 
void reset(const int startNum[], int num[], int size);
void displayIntArray(const int num[], int size);
void BubbleSort(int num[], int size);
void SelectionSort(int num[], int size);
void insertionSort(int num[], int size);



int main()
{

	const int SIZE = 4;
	const int start_num[SIZE] = { 20, 40, 10, 30 };
	int numbers[SIZE];

	cout << "Lab03 \n";

	reset(start_num, numbers, SIZE);										//Reseting to original array
	cout << "\nSORTING -  Bubble Sort Ascending - O(n2) algorithm\n";
	BubbleSort(numbers, SIZE);												//Bubble sorting

	reset(start_num, numbers, SIZE);										//Reseting to original array
	cout << "\n\nSORTING -  Selection Sort Asccending - O(n2) algorithm\n";
	SelectionSort(numbers, SIZE);											//Selection Sorting

	reset(start_num, numbers, SIZE);										//Reseting to original array
	cout << "\n\nSORTING -  Insertion Sort Acending - O(n2) algorithm\n";
	insertionSort(numbers, SIZE);											//Insertion Sorting

	cout << endl<<endl<<"DONE Madan Thapa";
	cout << endl << endl;

	system("pause");
	return 0;
}


//*********************************************************************
//This function makes a new array and sets it to the original array.  * 
//When we modify the array we can always call back the original array *
//*********************************************************************
void reset(const int startNum[], int num[], int size)
{
	cout << endl << "The original array has been reset to:" << endl;
	for (int index = 0; index < size; index++)
	{
		num[index] = startNum[index];
	}
	for (int index = 0; index < size; index++)
	{
		cout << setw(5) << num[index];
	}
	cout << endl;
}
//*****************************************************
//This funcrion displays the array in a nicely fashion*
//*****************************************************
void displayIntArray(const int num[], int size)
{
	for (int index = 0; index < size; index++)
	{
		cout << setw(5) << num[index];
	}
}

//***************
//Bubble sorting*
//***************
void BubbleSort(int num[], int size)
{
	bool swap;
	int temp;

	do
	{
		swap = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (num[count] > num[count + 1])
			{
				temp = num[count];
				num[count] = num[count + 1];
				num[count + 1] = temp;
				swap = true;
			}
		}
		displayIntArray(num, size);
		cout << endl;
	} while (swap);
}

//******************
//Selection Sorting*
//******************
void SelectionSort(int num[], int size)
{
	int startscan, minindex, minvalue;

	for (startscan = 0; startscan < (size - 1); startscan++)
	{
		minindex = startscan;
		minvalue = num[startscan];
		for (int index = startscan + 1; index < size; index++)
		{
			if (num[index] < minvalue)
			{
				minvalue = num[index];
				minindex = index;
			}
		}
		num[minindex] = num[startscan];
		num[startscan] = minvalue;
		displayIntArray(num, size);
		cout << endl;
	}
}

//******************
//Insertion Sorting*
//******************
void insertionSort(int num[], int size)
{
	int j, temp;

	for (int i = 1; i < size; i++) {
		j = i;

		while (j > 0 && num[j - 1] > num[j])
		{
			temp = num[j];
			num[j] = num[j - 1];
			num[j - 1] = temp;
			j--;
		}
		
			displayIntArray(num, size);
			cout << endl;

	}
}