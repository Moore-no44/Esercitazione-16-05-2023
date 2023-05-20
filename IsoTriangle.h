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
protected:

	float base;
	float height;

	/// Function to calculate area
	float Area();
	
	/// Function to calculate perimeter
	float Perimeter();
	



public:


	/// Default constructor
	IsoTriangle();
	

	/// Copy constructor
	IsoTriangle(const IsoTriangle& r);

	/// Destructor
	~IsoTriangle();

	/// Init constructor
	IsoTriangle(float b, float h);

	


	void SetBase(float b);
	void SetHeight(float h);
	void SetDim(float b, float h);


	float GetBase();
	float GetHeight();
	void GetDim(float& b, float& h);
	float GetSide();

	float GetArea();
	float GetPerimeter();

	/// Diagnostic printout
	void Dump();
	
	


	void WarningMessage(const char* string);
	void ErrorMessage(const char* string);

	void Reset();
	void Init(const IsoTriangle& r);
	void Init();

	

	void Draw();
	
};


#endif // !ISOTRIANGLE_DEF__

