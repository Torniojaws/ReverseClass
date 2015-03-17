#include <iostream>
#include <stdio.h>		// scanf in Recursive C
#include <string>		// reverse_iterator
#include "reverse.hpp"

Reverse::Reverse() {
	std::cout << "Going to reverse stuff..." << std::endl;
}

void Reverse::intArray(int nums[]) {
	std::cout << "Reversing an int array" << std::endl;
	int i, j, tmp;
	int len = sizeof(nums[0]);
	
	// The actual reversing happens here
	for(i=0; i<len/2; i++) {
		tmp = nums[i];
		nums[i] = nums[len - i - 1];
		nums[len - i - 1] = tmp;
	}
	
	// This displays the results
	for(j=0; j<len; j++) {
		std::cout << nums[j] << std::endl;
	}
}

void Reverse::string(std::string text) {
	for(std::string::reverse_iterator rit = text.rbegin(); rit != text.rend(); ++rit) {
		std::cout << *rit;
	}
}

void Reverse::stringRecursive() {
	char c;
	scanf("%c", &c);
	if(c != '\n') {
		Reverse::stringRecursive();
		std::cout << c;
	}
}