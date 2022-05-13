#ifndef ANIMALS_H
#define ANIMALS_H
#include <string>
 class Animal {
 protected:
	std::string name;
public:
	Animal() {
		std::cout << "animal is created";
	}
	Animal(std::string l) {
		std::cout << l << std::endl;
		name = l;
	}
	~Animal() {

	}
	virtual void printname()=0;
};

class Cat: public Animal {
private:
	bool isAsleep = 1;
	
public:
	Cat():Animal() {
		
	}
	Cat(std::string l) :Animal(l) {

	}
	virtual void printname() {
		std::cout << "cat " << this->name;
		if (isAsleep) {
			std::cout << " is asleep" << std::endl;
		}
		else {
			std::cout << " isn't asleep" << std::endl;
		}
	}

	std::string color;
	~Cat() {

	}
};

class Dog: public Animal {
private:
	bool isAsleep = 0;

public:
	Dog() :Animal() {

	}
	Dog(std::string l) :Animal(l) {

	}
	virtual void printname() {
		std::cout << "dog " << this->name;
		if (isAsleep) {
			std::cout << " is asleep" << std::endl;
		}
		else {
			std::cout << " isn't asleep" << std::endl;
		}
	}
	
	std::string color;
	~Dog() {

	}

};

class Parrot: public Animal {
private:
	bool isFlying = 0;
public:
	Parrot() :Animal() {

	}
	Parrot(std::string l) :Animal(l) {

	}
	virtual void printname() {
		std::cout << "parrot " << this->name;
		if (isFlying) {
			std::cout << " is flying" << std::endl;
		}
		else {
			std::cout << " isn't flying" << std::endl;
		}
	}
	void fly() {
		isFlying = 1;
	}
	void stopFlying() {
		isFlying = 0;
	}
	std::string color;
};
#endif