#include "Brain.hpp"
Brain::Brain()
{
	std::cout << "Constructor Brain called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Destructor Brain called" << std::endl;
}

Brain::Brain(const Brain& src)
{
	std::cout << "Copy Constructor Brain called" << std::endl;
	*this = src;
	return ;
}

Brain& Brain::operator=(const Brain& src)
{
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = src.ideas[i];
		i++;
	}
	return (*this);
}
