/**
	@file	IsoTriangle.h
	@brief	Definition file of class IsoTriangle
*/

#ifndef ISOTRIANGLE_DEF__
#define	ISOTRIANGLE_DEF__

#include "polygon.h"

/// @class IsoTriangle
/// @brief element of triangle isoscele

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

	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
	/// Default constructor
	IsoTriangle();


	/// Copy constructor
	IsoTriangle(const IsoTriangle& r);

	/// Destructor
	~IsoTriangle();

	/// Init constructor
	IsoTriangle(float b, float h);
	/// @}


	/// @name SETTER
	/// @{
	void SetBase(float b);
	void SetHeight(float h);
	void SetDim(float b, float h);
	/// @}


	/// @name GETTERS
	/// @{
	float GetBase();
	float GetHeight();
	void GetDim(float& b, float& h);
	float GetSide();
	float GetArea();
	float GetPerimeter();
	/// @}


	/// @name DEBUG and SERIALIZATION
	/// @{
	/// Diagnostic printout
	void Dump();
	void WarningMessage(const char* string);
	void ErrorMessage(const char* string);
	/// @}




	/// @name BASIC HANDLING
	/// @{
	void Reset();
	void Init(const IsoTriangle& r);
	void Init();
	/// @}

	/// @name DRAWING
	/// @{
	void Draw();
	/// @}
};


#endif
