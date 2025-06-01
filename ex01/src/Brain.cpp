#include "../inc/Brain.hpp"
#include <iostream>

Brain::Brain() {
	std::cout << "\033[32m";
	std::cout << "Brain default constructor called";
	std::cout << "\033[0m" << std::endl;
	for (int i = 0; i < 100; ++i) {
		m_ideas[i] = "crickets...";
	}
}

Brain::Brain(const Brain& other) {
	std::cout << "\033[34m";
	std::cout << "Brain copy constructor called";
	std::cout << "\033[0m" << std::endl;
	for (int i = 0; i < 100; ++i) {
		m_ideas[i] = other.m_ideas[i];
	}
}

Brain& Brain::operator=(const Brain& other) {
	std::cout << "\033[33m";
	std::cout << "Brain assignment operator called";
	std::cout << "\033[0m" << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; ++i) {
			m_ideas[i] = other.m_ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "\033[31m";
	std::cout << "Brain destructor called";
	std::cout << "\033[0m" << std::endl;
}

void Brain::setIdea(int index, const std::string idea) {
	if (index >= 0 && index < 100) {
		m_ideas[index] = idea;
	} else {
		std::cerr << "Index out of bounds" << std::endl;
	}
}

std::string Brain::getIdea(int index) const {
	if (index >= 0 && index < 100) {
		return m_ideas[index];
	} else {
		std::cerr << "Index out of bounds" << std::endl;
		return "";
	}
}
