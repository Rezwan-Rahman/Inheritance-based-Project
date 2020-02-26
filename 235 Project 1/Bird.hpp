/*
Rezwan Rahman
EMPLID 23820805
CSCI 235
Project 1
OOP and Inheritance
Animal.cpp
*/


#include <iostream>
#include "Animal.hpp"
#ifndef Bird_hpp
#define Bird_hpp

#include <string>

class Bird : public Animal
{
public:
	Bird();
	Bird(std::string name, bool domestic = false, bool predator = false);
  	bool isAirborne() const;
	bool isAquatic() const;
 	void setAirborne();
	void setAquatic();
 
private:
	bool airborne_;
	bool aquatic_;
};
#endif