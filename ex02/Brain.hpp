#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>
#include "Animal.hpp"

class Brain
{
	public:
	Brain();
	virtual ~Brain();
	Brain& operator=(const Brain& src);
	Brain(const Brain& src);
	private:
	std::string ideas[100];
};

#endif