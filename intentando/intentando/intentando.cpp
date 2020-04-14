#include <iostream>



int main()


{

	int x;


	std::cin >> x;

	if ( 0 < x < 100) {

		if (x < 10) {
			std::cout << "es un niño" << std::endl;
		}
			
		if (x < 50) {
			std::cout << "eres muy joven" << std::endl;
		}
		
	}

	else{
		std::cout << "edad incorrecta" << std::endl;
	}
	
	return 0;
}
