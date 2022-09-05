#include "basitmatematik.h"
#include <iostream>

int toplama(int a, int b) {
	std::cout << "toplama sonucu = " << a + b << "\n";
	return a + b;
};

int cikarma(int a, int b) {
	std::cout << "toplama sonucu = " << a - b << "\n";
	return a - b;
};

float bolme (int a, int b) {
	std::cout << "toplama sonucu = " << a / b << "\n";
	return a / b;
};
