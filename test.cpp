#include <iostream>

int main (){
	int a;
	int b;
	a = 3;		
	b = a;		//b: 3
	b= b-a;		//b: 3 - 3 = 0
	int c = b;  	//c: 0
	c++;		//c: 1
	b= a++;		//b: 4
	c = b;		//c: 4


	std::cout << "This is the meaning of life" << std::endl;

	std::cout << "All of that swapping and we don't even display it." << std::endl;
	std::cout << "Obligitory output to show effort (a): " << a << " " <<
						      "(b): " << b << " " <<
						      "(c): " << c << " " << std:: endl;
	// wow 
	return 0;
}
