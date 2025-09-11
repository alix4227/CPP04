#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
WrongCat::WrongCat():WrongAnimal()
{
	type = "WrongCat";
	std::cout << "Constructor WrongCat called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src):WrongAnimal(src)
{
	std::cout << "Copy Constructor WrongCat called" << std::endl;
	*this = src;
	return ;
}

WrongCat& WrongCat::operator=(const WrongCat& src)
{
	this->type = src.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Miaouuuuu!" << std::endl;
}

std::string WrongCat::getType() const
{
	return (type);
}