#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal()
{
	std::cout << "Constructor WrongAnimal called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	std::cout << "Copy Constructor WrongAnimal called" << std::endl;
	*this = src;
	return ;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
	this->type = src.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	
}

std::string WrongAnimal::getType() const
{
	return (type);
}