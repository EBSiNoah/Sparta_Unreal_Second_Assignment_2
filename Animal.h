#include <string>
#include <vector>

using namespace std;

class Animal
{
	public:
		string roar;
		Animal();
		Animal(string input_roar);
		~Animal();
		makeSound();
};

class Zoo
{
	public:
		vector<Animal> animals;
		void addAnimal(vector<Animal> animal);
		void performActions();
		Animal createRandomAnimal();
		Zoo();
		~Zoo();
};

class Cat:Animal
{
	
};

class Dog:Animal
{
	
};

class Cow:Animal
{
	
};
