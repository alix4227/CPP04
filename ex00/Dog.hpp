#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>
#include "Animal.hpp"

class Dog: public Animal
{
	public:
	Dog();
	virtual ~Dog();
	Dog& operator=(const Dog& src);
	Dog(const Dog& src);
	virtual void makeSound() const;
	virtual std::string getType() const;

};
#endif