#include<iostream>
using namespace std;
class Element { };
class Zbior {
public:
	Zbior() { mp_element = new Element; }
	~Zbior() { delete mp_element; }
private:
	Element * mp_element;
};
void main() 
{
	
}