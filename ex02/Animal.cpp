#include "Animal.hpp"
Animal::Animal()
{
	std::cout << "Constructor Animal called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Destructor Animal called" << std::endl;
}

Animal::Animal(const Animal& src)
{
	std::cout << "Copy Constructor Animal called" << std::endl;
	*this = src;
	return ;
}

Animal& Animal::operator=(const Animal& src)
{
	this->type = src.type;
	return (*this);
}

void Animal::makeSound() const
{
	
}

std::string Animal::getType() const
{
	return (type);
}