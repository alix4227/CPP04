#include "Animal.hpp"
#include "Dog.hpp"
Dog::Dog():Animal()
{
	type = "Dog";
	std::cout << "Constructor Dog called" << std::endl;
	_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Destructor Dog called" << std::endl;
	delete _brain;
}

Dog::Dog(const Dog& src):Animal(src)
{
	std::cout << "Copy Constructor Dog called" << std::endl;
	*this = src;
	return ;
}

Dog& Dog::operator=(const Dog& src)
{
	this->type = src.type;
	this->_brain = new Brain(*src._brain);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Waouffff!" << std::endl;
}

std::string Dog::getType() const
{
	return (type);
}