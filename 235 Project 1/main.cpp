#include "Animal.hpp"
#include "Mammal.hpp"
#include "Bird.hpp"
#include "Fish.cpp"
int main()
{
Animal a;
Animal b("bat", true, false);
cout<< a.getName(); 
cout<< b.getName();

}