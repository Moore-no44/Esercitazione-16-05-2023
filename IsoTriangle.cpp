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
	cout << "Costruttore default IsoTriangle" << endl;
	base = 1;
	height = 1;
	
}

//////////////////////////////////////////
// Copy constructor

IsoTriangle::IsoTriangle(IsoTriangle& origin):Polygon(origin)
{
	base = origin.base;
	height = origin.height;
}

//////////////////////////////////////////
// Init constructor

IsoTriangle::IsoTriangle(float b, float h) : Polygon()
{
	base = b;
	height = h;
	
}

//////////////////////////////////////////
// Destructor

IsoTriangle::~IsoTriangle()
{
	cout << "Distruttore IsoTriangle" << endl;
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
float IsoTriangle::Area()
{
	return (base*height)/2;
}

/// Function to print perimeter

float IsoTriangle::Perimeter()
{
	return (2 * base + 2 * height);
}

float IsoTriangle::GetSide() {

 float side = base;
	return side;


}

void IsoTriangle::Draw() {
	cout << "sto disegnando" << endl;
}