#include<iostream>

long nbonacci(unsigned int series, unsigned int n)
{
	// base cases
	if(n == 0)
	{
		return 0;
	}

	if(n <= series)
	{
		return 1;
	}

	// recursive calls
	int total = 0;
	for(int x=n-1; x >= n-series; x--)
	{
		total += nbonacci(series, x);
	} 

	return total;
}

int main()
{
	std::cout << "--- Fibonacci Sequence ---" << std::endl;
	for(int x=1; x<=20; x++)
	{
		std::cout << nbonacci(2, x) << " ";
	}
	std:: cout << std::endl;


	std::cout << "--- Tribonacci Sequence ---" << std::endl;
	for(int x=1; x<=20; x++)
	{
		std::cout << nbonacci(3, x) << " ";
	}
	std:: cout << std::endl;


	std::cout << "--- Fourbonacci Sequence ---" << std::endl;
	for(int x=1; x<=20; x++)
	{
		std::cout << nbonacci(4, x) << " ";
	}
	std:: cout << std::endl;


	std::cout << "--- Fivebonacci Sequence ---" << std::endl;
	for(int x=1; x<=20; x++)
	{
		std::cout << nbonacci(5, x) << " ";
	}
	std:: cout << std::endl;

	return 0;
}


