#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Animal.h"
#include <iostream>

Animal::Animal()
{
	
}

Animal::Animal(string input_roar)
{
	roar = input_roar;
}

Animal::makeSound()
{
	cout<<roar<<endl;
}

Zoo::Zoo()
{
	
}

void Zoo::addAnimal(vector<Animal> animal)
{
	
}

void Zoo::performActions()
{
	
}

Animal Zoo::createRandomAnimal()
{
	int idx=rand() % animals.size();
	
	return animals[idx];
}
