#include "Animal.hpp"
#include "Cat.hpp"
Cat::Cat():Animal()
{
	type = "Cat";
	std::cout << "Constructor Cat called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Destructor Cat called" << std::endl;
}

Cat::Cat(const Cat& src):Animal(src)
{
	std::cout << "Copy Constructor Cat called" << std::endl;
	*this = src;
	return ;
}

Cat& Cat::operator=(const Cat& src)
{
	this->type = src.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaouuuuu!" << std::endl;
}

std::string Cat::getType() const
{
	return (type);
}