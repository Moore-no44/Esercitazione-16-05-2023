/**
* @author Travi Lorenzo
* @author Tomaghelli Moreno
*
*
*/

#include "IsoTriangle.h"
#include <math.h>

/*ostream& operator << (ostream& out, IsoTriangle& X)
{
	out << X.fValue << endl;
	return out;
}*/


//////////////////////////////////////////
// Default constructor
IsoTriangle::IsoTriangle()
{
	cout << "IsoTriangle - constructor - default" << endl;

	base = 1;
	height = 1;

}

//////////////////////////////////////////
// Copy constructor

IsoTriangle::IsoTriangle(IsoTriangle& origin)
{
	cout << "IsoTriangle - constructor - copy" << endl;

	base = origin.base;
	height = origin.height;
}

//////////////////////////////////////////
// Init constructor

IsoTriangle::IsoTriangle(float b, float h)
{

	cout << "IsoTriangle - constructor - init" << endl;

	base = b;
	height = h;

}

//////////////////////////////////////////
// Destructor

IsoTriangle::~IsoTriangle()
{
	cout << "IsoTriangle - distructor" << endl;
	base = 0;
	height = 0;
}

//////////////////////////////////////////
// Diagnostic function 

void IsoTriangle::Dump()
{
	/// Inherits parent class diagnostic
	//Polygon::Dump();

	/// Prints local info
	cout << "Dump object IsoTriangle" << endl;
	cout << "Base = " << base << endl;
	cout << "Altezza = " << height << endl;
	cout << "===============================\n";
}



/// Function to print area


/// Function to print perimeter

float IsoTriangle::Perimeter() {

	return (2 * base + 2 * height);
}

float IsoTriangle::Area() {

	return (base * height) / 2;
}




float IsoTriangle::GetPerimeter() {

	return Perimeter();
}

float IsoTriangle::GetArea() {

	return Area();
}




float IsoTriangle::GetSide() {

	return base;
}

void IsoTriangle::Draw() {
	cout << "\n\nsto calcolando i valori del triangolo" << endl;

	cout << "Area: \n" << GetArea() << endl;

	cout << "Perimeter: \n" << GetPerimeter() << endl;

}