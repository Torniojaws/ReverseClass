#include <iostream>
#include "reverse.hpp"

int main() {
	Reverse reverse;
	
	// Reverse int array
	int nums[] = {5, 4, 3, 2};
	reverse.intArray(nums);
	
	// Regular reverse of string
	std::string text = "Hellou takaperin";
	reverse.string(text);
	
	// Ask for string to reverse
	std::cout << "Enter some text to reverse:" << std::endl;
	reverse.stringRecursive();
	
	return 0;
}