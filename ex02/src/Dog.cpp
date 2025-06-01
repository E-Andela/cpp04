#include "../inc/Dog.hpp"
#include <iostream>

Dog::Dog() {
	std::cout << "\033[32m";
	std::cout << "Dog default constructor called";
	std::cout << "\033[0m" << std::endl;
	m_type = "Dog";
	m_brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal{other} {
	std::cout << "\033[34m";
	std::cout << "Dog copy constructor called";
	std::cout << "\033[0m" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "\033[33m";
	std::cout << "Dog assignment operator called";
	std::cout << "\033[0m" << std::endl;
	if (this != &other) {
		m_type = other.m_type;
		m_brain = new Brain(*other.m_brain);
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "\033[31m";
	std::cout << "Dog destructor called";
	std::cout << "\033[0m" << std::endl;
	delete m_brain;
}

void Dog::makeSound() const {
	std::cout << "Woof" << std::endl;
}

void Dog::setIdea(int index, const std::string thought) {
	if (index >= 0 && index < 100) {
		m_brain->setIdea(index, thought);
	}
}

std::string Dog::getIdea(int index) const {
	if (index >= 0 && index < 100) {
		return m_brain->getIdea(index);
	}
	return "I don't have any thoughts on that.";
}