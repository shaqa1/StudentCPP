//guess_a_number

#include "pch.h"
#include <iostream>
int n, a, t, b;
void guess() {
	n++;
	std::cout << n << " Try: ";
	std::cin >> b;
	if (b = t) {
		std::cout << "right";
	}
	}

int main()
{
	a = 0;
	n = 0;
	t = std::srand(t) % 99 + 1;
    std::cout << t << " Hi. Try to guess a number.\n "; 
	guess;
	std::cout << a << b << n << t;
}


