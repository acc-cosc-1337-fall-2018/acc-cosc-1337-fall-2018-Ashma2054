#include"vectors.h"
#include<iostream>

using std::cout;


int main() 
{
	//Write code to call get_max_from_vector with argument
	//vector of values 4, 5, 1, 50, 6, 77, 0 and display max

	 vector <int> vector1{ 4, 5, 1, 50, 6, 77, 0 };
	 int maximum_number= get_max_from_vector(vector1);
	 std::cout << "The maximum number is: " << maximum_number;




	//write code to call the sum_of_square function with argument
	//vector of values 2, 3, 4 and display result

	 vector <int> vector2{ 2,3,4 };
	 int sum = sum_of_squares(vector2);
	 std::cout << "The sum is: " << sum;




	//write code to call the replace function with argument 
	//vector of strings "Joe", "joe", "mary", old argument "joe", new argument "John"

	 vector <string>  names{ "Joe", "joe", "mary" };
	 replace(names, "joe", "John");

	

	//write code to call is_prime with value 3 output result
	is_prime(3);




	//write code to call vector_of_primes, save return value to a vector of ints
	//output each int in the return vector
	vector<int>primes = vector_of_primes(10);
	for (auto prime : primes) 
	{
		std::cout << prime;
	}


	return 0;
}
