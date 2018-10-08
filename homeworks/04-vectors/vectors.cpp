#include "vectors.h"

using std::vector;


int get_max_from_vector(vector<int>& numbers)
{
	vector<int> vector1;
	int max_number{0};
	for (int i =0; i <=vector1.size(); i++)
	{
		if (vector1[i] > max_number)
			max_number = vector1[i];
	}

	return max_number;
}

int sum_of_squares(vector<int>& numbers)
{
	vector<int> vector2;
	int squared_number{ 0 };
	int total{ 0 };

	for (auto i : vector2)
	{
		squared_number = i * i;
		total += squared_number;
	}
	return total;
}





void replace(vector<string>& strings, const string& old, const string& new_val)
{
	//write code here. 
	//Remember passing by reference without keyword const makes the string vector
	//read/write meaning you can modify strings in the vector
	//Also there is no need to return the strings vector because a reference
	//points to a previously declared vector of strings variable(see test case 
	//in vectors_test.cp)

	vector<string> names;

	for (int i =0; i<= names.size();i++)
	{
		if (names[i] == old) 
		names[i] = new_val;
	}

}

bool is_prime(int number)
{
	for ( int i=1; i<=number; i++)
	{
		if (number % i == 0)
			return true;
		else
			return false;
	} 

	return 0;
}



vector<int> vector_of_primes(int number)
{
	vector <int> primes;
	for (int i = 1; i <= number; i++)
	{
		is_prime(i); 
		if (is_prime(i) == true)
			primes.push_back(i);
	}
	return  primes;
}






