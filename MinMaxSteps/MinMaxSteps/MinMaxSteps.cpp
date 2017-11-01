// MinMaxSteps.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>


int main()
{
	bool running = true;
	while (running) {
		int x, y, min, max, step, shortest, shortestSteps, longest, longestSteps;
		shortestSteps = 2147483647;
		longestSteps = 0;
		shortest = 0;
		longest = 0;
		std::cout << "Enter two integers above 1, creating a range: ";
		std::cin >> x;
		std::cin >> y;
		if (x > y) { min = y; max = x; }
		else { min = x; max = y; }

		for (int n = min; n <= max; n++) {
			step = 0;
			x = n;
			while (x > 1) {
				if (x % 2 == 0)
					x = x / 2;
				else
					x = (x * 3) + 1;
				step++;
			}
			if (step < shortestSteps) {
				shortestSteps = step;
				shortest = n;
			}
			if (step > longestSteps) {
				longestSteps = step;
				longest = n;
			}
		}
		std::cout << shortest << " took the least amount of steps: " << shortestSteps << ".\n";
		std::cout << longest << " took the most amount of steps: " << longestSteps << ".\n\n\n";

	}
	
    return 0;
}

