
/*
Rezwan Rahman
EMPLID 23820805
CSCI 235
Project 1
OOP and Inheritance
Animal.cpp
*/
#include <string>
#include <iostream>
#include "Animal.hpp"
#ifndef FISH_HPP
#define FISH_HPP

class Fish: public Animal
{

public:

	Fish();
	Fish(std::string name, bool domestic = false, bool predator = false);
	bool isVenomous() const;
	void setVenomous();
private:
  bool venomous_;

 };
 #endif