#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

bool sortArray(int i, int j)		//returns true if first number is higher than second number. Used to sort array in descending order
{
	return(i > j);
}

int main()
{
	srand(time(NULL));		//create random numbers

	vector<int> vec;		//initialises vector
	int value;				//stores integer value

	for (int i = 0; i < 20; i++)
	{
		value = rand() % 1000 + 1;		//creates random number between 1-1000
		vec.push_back(value);			//pushes value into vector
	}

	cout << endl << "Unorted Array" << endl;
	for (std::vector<int>::iterator ptr = vec.begin(); ptr != vec.end(); ++ptr)		//displays unsorted array
		std::cout << ' ' << *ptr;
	std::cout << '\n';


	cout << endl << "Sorted Array" << endl;
	std::sort(vec.begin(),vec.end(),sortArray);		//sorts the vector (uses sortArray() to determine whether swap is needed)
	
	for (std::vector<int>::iterator ptr = vec.begin(); ptr != vec.end(); ++ptr)							//displays sorted array
		std::cout << ' ' << *ptr;

}