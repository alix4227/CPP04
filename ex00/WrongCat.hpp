#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
	WrongCat();
	virtual ~WrongCat();
	WrongCat& operator=(const WrongCat& src);
	WrongCat(const WrongCat& src);
	void makeSound() const;
	std::string getType() const;
};

#endif