/*



Rezwan Rahman
EMPLID 23820805
2/18/2020
CSCI 235
Project 1
OOP and Inheritance
Animal.hpp




*/
#include <iostream>
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
class Animal
{

public: 
	//default constructor;
Animal();
	//paramaterized constructor
Animal(std::string name, bool domestic = false, bool predator = false);


//********** Accessor Methods ***********

	std::string getName() const; //returns name_


	bool isDomestic() const; //returns domestic_
	bool isPredator() const; // returns predator_

	void setName(std::string name); //return true

	void setDomestic(); 
	void setPredator(); //return true





private:
	std::string name_;
	bool domestic_;
	bool predator_;
};// end Animalmembers

#endif /*Animal.hpp */
//Always add endif for hpp files.




