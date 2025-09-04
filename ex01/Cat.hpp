#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>
#include "Animal.hpp"
#include "Brain.hpp"


class Cat: public Animal
{
	public:
	Cat();
	virtual ~Cat();
	Cat& operator=(const Cat& src);
	Cat(const Cat& src);
	virtual void makeSound() const;
	virtual std::string getType() const;

	private:
	Brain* _brain;
};

#endif