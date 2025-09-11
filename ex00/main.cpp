#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const WrongAnimal* meta = new WrongAnimal();
	const Animal* j = new Dog();
	const WrongAnimal* i = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will not output the WrongCat sound!
	j->makeSound();//will output the dog sound!
	meta->makeSound();//will output nothing!
	
	delete meta;
	delete j;
	delete i;
	return 0;
}