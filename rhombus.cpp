/// \file Rhombus.cpp
///	\brief class Rhombus: implementation of the functions
///
///	Details.
///

#include<iostream>
#include "Rhombus.h"

/// @brief default constructor 
Rhombus::Rhombus() {

	cout << "Rhombus - constructor - default" << endl;

	Init();

}

/// @brief constructor 
/// @param w diagH of the Rhombus
/// @param h diagV of the Rhombus
Rhombus::Rhombus(float dH, float dV) {

	Init();

	cout << "Rhombus - constructor" << endl;

	if (dH <= 0.)
		cout << "WARNING: Rhombus - constructor: diagH should be > 0" << endl;
	else
		diagH = dH;

	if (dV <= 0.)
		cout << "WARNING: Rhombus - constructor: diagV should be > 0" << endl;
	else
		diagV = dV;



}

/// @brief destructor 
Rhombus::~Rhombus() {

	cout << "Rhombus - destructor" << endl;
	Reset();

}

/// @brief copy constructor 
/// @param r reference to the object that should be copied 
Rhombus::Rhombus(const Rhombus& r) {

	cout << "Rhombus - copy constructor" << endl;

	Init(r);

}

/// @brief overload of operator = 
/// @param r reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
Rhombus& Rhombus::operator=(const Rhombus& r) {

	cout << "Rhombus - operator =" << endl;

	Init(r);

	return *this;

}

/// @brief overload of operator == 
/// @param r reference to the object on the right side of the operator 
/// @return true if the two objects have the same diagH and the same diagV  
bool Rhombus::operator==(const Rhombus& r) {

	if (r.diagH == diagH && r.diagV == diagV)
		return true;

	return false;
}

/// @brief default initialization of the object
void Rhombus::Init() {
	Reset();
	diagH = 0.;
	diagV = 0.;
}


/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void Rhombus::Init(const Rhombus& r) {
	Reset();
	diagH = r.diagH;
	diagV = r.diagV;
}

/// @brief total reset of the object  
void Rhombus::Reset() {
	diagH = 0.;
	diagV = 0.;
}


/// @brief set diagH of the object
/// @param w diagH 
void Rhombus::SetDiagH(float dH) {

	if (dH < 0.) {
		cout << "WARNING: Rhombus - SetdiagH: diagH should be > 0" << endl;
		return;
	}

	diagH = dH;

}

/// @brief set diagV of the object
/// @param l diagV 
void Rhombus::SetDiagV(float l) {

	if (l < 0.) {
		cout << "WARNING: Rhombus - SetdiagV: diagV should be > 0" << endl;
		return;
	}

	diagV = l;

}

/// @brief set diagH and diagV of the object
/// @param w diagH 
/// @param l diagV 
void Rhombus::SetDim(float dH, float dV) {

	SetDiagH(dH);
	SetDiagV(dH);
}


/// @brief get diagH of the object
/// @return diagH 
float Rhombus::GetDiagH() {

	return diagH;

}

/// @brief get diagV of the object
/// @return diagV
float Rhombus::GetDiagV() {

	return diagV;
}

/// @brief get diagH and diagV of the object
/// @param w diagH 
/// @param l diagV
void Rhombus::GetDiagonals(float& dH, float& dV) {

	dH = diagH;
	dV = diagV;

	return;
}



/// @brief get the area of the object
/// @return area of the Rhombus
float Rhombus::GetArea() {

	return Area();

}

/// @brief get the perimeter of the object
/// @return perimeter of the Rhombus
float Rhombus::GetPerimeter() {

	return Perimeter();

}

float Rhombus::GetSide() {

	return Side();
}

float Rhombus::Area() {

	return (diagH * diagV)/2;

}


float Rhombus::Perimeter() {

	return 4* GetSide();
}



float Rhombus::Side() {

	return sqrt(pow(diagH / 2, 2) + pow(diagV / 2, 2));
}


/// @brief write an error message 
/// @param string message to be printed
void Rhombus::ErrorMessage(const char* string) {

	cout << endl << "ERROR -- Rhombus --";
	cout << string << endl;

}

/// @brief write a warning message 
/// @param string message to be printed
void Rhombus::WarningMessage(const char* string) {

	cout << endl << "WARNING -- Rhombus --";
	cout << string << endl;

}


/// @brief for debugging: all about the object
void Rhombus::Dump() {
	cout << endl;
	cout << "---Rhombus---" << endl;
	cout << endl;

	cout << "diagH = " << diagH << endl;
	cout << "diagV = " << diagV << endl;
	cout << "Perimeter = " << GetPerimeter() << endl;
	cout << "Area = " << GetArea() << endl;
	cout << endl;

}


void Rhombus::Draw() {
	cout << "sto calcolando i valori del rombo " << endl;

	cout << "Area: " << GetArea() << endl;

	cout << "Perimeter: " << GetPerimeter() << endl;

}