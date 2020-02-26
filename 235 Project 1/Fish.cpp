/*
Rezwan Rahman
EMPLID 23820805
CSCI 235
Project 1
OOP and Inheritance
Animal.cpp
*/

#include <iostream>
#include "Fish.hpp"





Fish::Fish(): Animal(), venomous_(false)
{

}
Fish::Fish(std::string name, bool domestic, bool predator): Animal(name, domestic, predator), venomous_(false)
{
	
}
bool Fish::isVenomous() const
{
	return venomous_;
}
void Fish::setVenomous()
{
	venomous_ = true;
}
