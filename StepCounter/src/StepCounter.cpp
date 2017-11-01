// StepCounter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>


int main()
{
	bool running = true;
	while (running) {
		unsigned long long int n = 1;
		unsigned long long int x;
		int step = 0;
		std::cout << "Enter any integer number above 1: ";
		std::cin >> n;

		x = n;

		if (n == 0)
			running = false;

		while (n > 1) {
			if (n % 2 == 0)
				n = n / 2;
			else
				n = (n * 3) + 1;
			step++;
			std::cout << step << ": " << n << std::endl;
		}

		std::cout << "The number " << x << " took " << step << " steps to reach 1.\n\n\n";
	}

    return 0;
}

