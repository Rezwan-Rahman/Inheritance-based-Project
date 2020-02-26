/*
Rezwan Rahman
EMPLID 23820805
CSCI 235
Project 1
OOP and Inheritance
Animal.cpp
*/
#include <iostream>
#include "Bird.hpp"


Bird::Bird(): Animal(), airborne_(false), aquatic_(false)
{

}

Bird::Bird(std::string name, bool domestic, bool predator) : Animal (name,domestic,predator), airborne_(false), aquatic_(false)
{
}
  	bool Bird::isAirborne() const
  	{
  		return airborne_;
  	}
	bool Bird::isAquatic() const
	{
		return aquatic_;
	}
 
 	void Bird::setAirborne()
 	{
 		airborne_ = true;
 	}
	void Bird::setAquatic()
	{
		aquatic_ = true;
	}
 	