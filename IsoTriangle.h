/**
	@file	IsoTriangle.h
	@brief	Definition file of class IsoTriangle
*/

#ifndef ISOTRIANGLE_DEF__
#define	ISOTRIANGLE_DEF__

#include "polygon.h"

/**
* @class	Isotriangle
	@brief	element of triangle isoscele
*
*/

class IsoTriangle : public Polygon
{
	//friend ostream& operator << (ostream& out, Foglia& X);


protected:
	float perimeter;
	float area;

	float base;
	float height;

	/// Function to print area
	float Area();

	/// Function to print perimeter
	float Perimeter();



public:


	/// Default constructor
	IsoTriangle();
	

	/// Copy constructor
	IsoTriangle(IsoTriangle& origin);

	/// Destructor
	~IsoTriangle();

	/// Init constructor
	IsoTriangle(float b, float h);

	/// Diagnostic printout
	void Dump();
	

	float GetSide();

	void Draw();
	
};


#endif // !ISOTRIANGLE_DEF__

