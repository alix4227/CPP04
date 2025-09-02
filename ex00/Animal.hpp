#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>

class Animal
{
	public:
	Animal();
	Animal(const Animal& src);
	virtual ~Animal();
	Animal& operator=(const Animal& src);
	virtual void makeSound() const;
	virtual std::string getType() const;

	protected:
	std::string type;
};
#endif