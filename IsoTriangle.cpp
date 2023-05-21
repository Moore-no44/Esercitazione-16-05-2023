/**
* @file IsoTriangle.cpp
* @author Travi Lorenzo
* @author Tomaghelli Moreno
* @brief implementation of class IsoTriangle functions
*
*/

#include "isotriangle.h"
#include <math.h>



/// @brief default constructor 
IsoTriangle::IsoTriangle() {

	cout << "IsoTriangle - constructor - default" << endl;

	Init();

}




/// @brief constructor 
/// @param b base of the rectangle
/// @param h height of the rectangle
IsoTriangle::IsoTriangle(float b, float h) {

	Init();

	cout << "IsoTriangle - constructor" << endl;

	if (b <= 0.)
		cout << "WARNING: IsoTriangle - constructor: base should be > 0" << endl;
	else
		base = b;

	if (h <= 0.)
		cout << "WARNING: IsoTriangle - constructor: height should be > 0" << endl;
	else
		height = h;



}


/// @brief destructor 
IsoTriangle::~IsoTriangle() {

	cout << "Rectangle - destructor" << endl;
	Reset();

}

/// @brief copy constructor 
/// @param r reference to the object that should be copied 
IsoTriangle::IsoTriangle(const IsoTriangle& r) {

	cout << "IsoTriangle - copy constructor" << endl;

	Init(r);

}

//////////////////////////////////////////
// Init constructor


/// @brief default initialization of the object
void IsoTriangle::Init() {
	Reset();
	base = 0.;
	height = 0.;
}


/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void IsoTriangle::Init(const IsoTriangle& r) {
	Reset();
	base = r.base;
	height = r.height;
}



/// @brief total reset of the object  
void IsoTriangle::Reset() {
	base = 0.;
	height = 0.;
}



//////////////////////////////////////////
// Diagnostic function 

/// @brief for debugging: all about the object
void IsoTriangle::Dump() {
	cout << endl;
	cout << "---IsoTriangle---" << endl;
	cout << endl;

	cout << "base = " << base << endl;
	cout << "height = " << height << endl;
	cout << "Perimeter = " << GetPerimeter() << endl;
	cout << "Area = " << GetArea() << endl;
	cout << endl;

}





/// @brief calculate the perimeter of the object
/// @return perimeter of the triangle

float IsoTriangle::Perimeter() {

	return ( base + 2 * GetSide());
}

/// @brief calculate the area of the object
/// @return area of the triangle

float IsoTriangle::Area() {

	return (base * height) / 2;
}




/// @brief get the perimeter of the object
/// @return perimeter of the triangle
float IsoTriangle::GetPerimeter() {

	return Perimeter();

}



/// @brief get the area of the object
/// @return area of the triangle
float IsoTriangle::GetArea() {

	return Area();

}

void IsoTriangle::Draw() {
	cout << "sto calcolando i valori del triangolo" << endl;

	cout << "Area: " << GetArea() << endl;

	cout << "Perimeter: " << GetPerimeter() << endl;

	//cout << "id: \n" << GetId() << endl;
}



/// @brief write an error message 
/// @param string message to be printed
void IsoTriangle::ErrorMessage(const char* string) {

	cout << endl << "ERROR -- IsoTriangle --";
	cout << string << endl;

}


/// @brief write a warning message 
/// @param string message to be printed
void IsoTriangle::WarningMessage(const char* string) {

	cout << endl << "WARNING -- Rectangle --";
	cout << string << endl;

}


/// @brief set width of the object
/// @param w width 
void IsoTriangle::SetBase(float b) {

	if (b < 0.) {
		cout << "WARNING: IsoTriangle - SetBase: Base should be > 0" << endl;
		return;
	}

	base = b;

}

/// @brief set length of the object
/// @param l length 
void IsoTriangle::SetHeight(float h) {

	if (h < 0.) {
		cout << "WARNING: IsoTriangle - SetHeight: height should be > 0" << endl;
		return;
	}

	height = h;

}

/// @brief set width and length of the object
/// @param b base 
/// @param h height 
void IsoTriangle::SetDim(float b, float h) {

	SetBase(b);
	SetHeight(h);
}


/// @brief get base of the object
/// @return base 
float IsoTriangle::GetBase() {

	return base;

}

/// @brief get height of the object
/// @return height
float IsoTriangle::GetHeight() {

	return height;
}

/// @brief get width and length of the object
/// @param w width 
/// @param l length
void IsoTriangle::GetDim(float& b, float& h) {

	b = base;
	h = height;

	return;
}

/// @brief get width and length of the object
/// @param w width 
/// @param l length
float IsoTriangle::GetSide() {


	return sqrt(pow(base/2, 2) + pow(height, 2));
}