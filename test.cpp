#include <iostream>

int main (){
	int a;
	int b;
	a = 3;
	b = a;
	b= b-a;
	int c = b;
	c++;
	b= a++;
	c = b;
	std::cout << "This is the meaning of life" << std::endl;
	// wow 
	return 0;
}