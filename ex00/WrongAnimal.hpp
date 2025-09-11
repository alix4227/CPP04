#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>

class WrongAnimal
{
	public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& src);
	virtual ~WrongAnimal();
	WrongAnimal& operator=(const WrongAnimal& src);
	void makeSound() const;
	std::string getType() const;

	protected:
	std::string type;
};
#endif