#include "vectors.h"

using std::vector;


int get_max_from_vector(vector<int>& numbers)
{
	vector<int> numbers;
	int max_number;
	for (auto i : numbers)
	{
		// std::max_element(numbers);
	}

	return 0;
}

int sum_of_squares(vector<int>& numbers)
{
	vector<int> numbers;
	int squared_number{ 0 };

	for (auto i : numbers)
	{
		squared_number = i * i;
	}
	return squared_number;
}

//write the code for sum_of_squares function here



//write the code for function replace here
void replace(vector<string>& strings, const string& old, const string& new_val)
{
	//write code here. 
	//Remember passing by reference without keyword const makes the string vector
	//read/write meaning you can modify strings in the vector
	//Also there is no need to return the strings vector because a reference
	//points to a previously declared vector of strings variable(see test case 
	//in vectors_test.cp)
}

bool is_prime(int number)
{
	//write is_prime function code here
	for ( int i=1;i++;)
	{
		if (number % i =0) 
	} 

	return 0;
}

int vector_of_primes(int number)
{
	return 0;
}






