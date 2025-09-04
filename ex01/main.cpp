#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	int N = 10;
	int i = 0;
	int j = 0;
	Animal* animals[N];
	while (i < N /2)
	{
		animals[j] = new Cat();
		j++;
		i++;
	}
	i = 0;
	while (i < N /2)
	{
		animals[j] = new Dog();
		i++;
		j++;
	}
	j = 0;
	while (j < N)
	{
		delete animals[j];
		j++;
	}
	return 0;
}