
/*
Rezwan Rahman
EMPLID 23820805
CSCI 235
Project 1
OOP and Inheritance
Animal.cpp
*/


#include <iostream>
using namespace std;
#include <string>
#include "Animal.hpp"

//Default constructor
Animal::Animal() 
{
  name_ = "";
  domestic_ = false;
  predator_ = false;
}

 Animal::Animal(std::string name, bool domestic, bool predator)
 {
  name_ = name;
  domestic_ = domestic;
  predator_ = predator;
 }


std::string Animal::getName() const
{
  return name_; 
}
  bool Animal::isDomestic() const
  {
    return domestic_;
  }
  bool Animal::isPredator() const
  {
    return predator_;
  }
 void Animal::setName(std::string new_name)
 {
  name_ = new_name;
 }
void Animal::setDomestic()
{
  domestic_ = true;
  
}

void Animal::setPredator()
{
  predator_ = true;
}


