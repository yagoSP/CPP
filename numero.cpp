#include <iostream>
#include <ctime>
int main(){
	std::srand(std::time(nullptr));

	for(int i=0; i<=10; i++){
		int nRand = std::rand() % 60;
	
		std::cout << nRand << " ";
	}
	std::cout << "" << std::endl;
	return 0;
}

