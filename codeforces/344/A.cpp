#include <iostream>

int main(){
	long number;
	int groups = 1;
	int input, previous_input, index;
	std::cin >> number;
	if(!number)
		std::cout<<'0';
	else{
		std::cin >> previous_input;
		for(index = 1; index < number; index++){
			std::cin >> input;
			if(previous_input != input)
				groups++;
			previous_input = input;
		}
		std::cout<<groups;
	}
	return 0;
}