/** /file isoTrapezoid.h
	\brief Declaration of the class isoTrapezoid

	Details.
*/


#ifndef ISOTRAPEZOID_H
#define ISOTRAPEZOID_H

#include "polygon.h"
using namespace std;

/// @class isoTrapezoidal
/// @brief 

class isoTrapezoid: public Polygon
{
private:
	float topside; 
	float bottomside;
	float height;

	float CalculateSide();
	float Area();
	float Perimeter();

public:
	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
	isoTrapezoid();
	isoTrapezoid(float t, float b, float h);
	isoTrapezoid(const isoTrapezoid& r);

	~isoTrapezoid();
	/// @}

	/// @name BASIC HANDLING
	/// @{
	void Init();
	void Init(const isoTrapezoid& r);
	void Reset();
	/// @}

	/// @name OPERATORS
	/// @{
	isoTrapezoid& operator=(const isoTrapezoid& r);
	bool operator==(const isoTrapezoid& r);
	/// @}

	/// @name GETTERS / SETTERS
	/// @{
	void SetDim(float t, float b, float h);
	void SetTopside(float t);
	void SetBottomside(float b);
	void SetHeight(float h);
	
	void GetDim(float& t, float& b, float& h);
	float GetTopside();
	float GetBottomside();
	float GetHeight();
	float GetSide();

	float GetArea();
	float GetPerimeter();
	/// @}

	/// @name DEBUG and SERIALIZATION 
	/// @{
	void ErrorMessage(const char* string);
	void WarningMessage(const char* string);
	void Dump();
	/// @}

	void Draw();

};




#endif 
