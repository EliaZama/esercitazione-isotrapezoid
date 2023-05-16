/** \file isoTrapezoid.cpp
	\brief class isoTrapezoid: implementation of functions

	Details.
*/

#include <iostream>
#include "isoTrapezoid.h"

/// @brief default constructor 
isoTrapezoid::isoTrapezoid() {

	cout << "isoTrapezoid - constructor - default" << endl;

	Init();
}

/// @brief constructor 
/// @param t topside of the isotrapezoid
/// @param b bottomside of the isotrapezoide
/// @param h height of the isotrapezoide 
isoTrapezoid::isoTrapezoid(float t, float b, float h) {

	Init();

	cout << "isoTrapezoidal - constructor" << endl;

	if (t <= 0.)
		cout << "WARNING: isoTrapezoid - constructor: topside should be > 0" << endl;
	else
		topside = t;

	if (b <= 0.)
		cout << "WARNING: isoTrapezoid - constructor: bottomside should be > 0" << endl;
	else
		bottomside = b;

	if (h <= 0.)
		cout << "WARNING: isoTrapezoid - constructor: height should be > 0" << endl;
	else
		height = h;

}

/// @brief copy constructor 
/// @param r reference to the object that should be copied 
isoTrapezoid::isoTrapezoid(const isoTrapezoid& r) {

	cout << "isoTrapezoid - copy constructor" << endl;

	Init(r);

}

/// @brief destructor 
isoTrapezoid::~isoTrapezoid() {

	cout << "isoTrapezoid - destructor" << endl;
	Reset();

}

/// @brief default initialization of the object
void isoTrapezoid::Init() {
	Reset();
	topside = 0.;
	bottomside = 0.;
	height = 0.;
}

/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void isoTrapezoid::Init(const isoTrapezoid& r) {
	Reset();
	topside = r.topside;
	bottomside = r.bottomside;
	height = r.height;
}

/// @brief total reset of the object  
void isoTrapezoid::Reset() {
	topside = 0.;
	bottomside = 0.;
	height = 0.;
}

/// @brief overload of operator = 
/// @param r reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
isoTrapezoid& isoTrapezoid::operator=(const isoTrapezoid& r) {

	cout << "isoTrapezoid - operator =" << endl;

	Init(r);

	return *this;
}

/// @brief overload of operator == 
/// @param r reference to the object on the right side of the operator 
/// @return true if the two objects have the same width and the same length  
bool isoTrapezoid::operator==(const isoTrapezoid& r) {

	if (r.topside == topside && r.bottomside == bottomside && r.height == height)
		return true;

	return false;
}

/// @brief set topside of the object
/// @param t topside 
void isoTrapezoid::SetTopside(float t) {

	if (t < 0.) {
		cout << "WARNING: isoTrapezoid - SetTopside: topside should be > 0" << endl;
		return;
	}

	topside = t;
}

/// @brief set bottomside of the object
/// @param b bottomside 
void isoTrapezoid::SetBottomside(float b) {

	if (b < 0.) {
		cout << "WARNING: isoTrapezoid - SetBottomside: bottomside should be > 0" << endl;
		return;
	}

	bottomside = b;
}

/// @brief set height of the object
/// @param h height 
void isoTrapezoid::SetHeight(float h) {

	if (h < 0.) {
		cout << "WARNING: isoTrapezoid - SetHeight: height should be > 0" << endl;
		return;
	}

	height = h;
}

/// @brief set topside, bottomside and height of the object
/// @param w width 
/// @param l length
/// @param h height 
void isoTrapezoid::SetDim(float t, float b, float h) {

	SetTopside(t);
	SetBottomside(b);
	SetHeight(h);
	
}

float isoTrapezoid::CalculateSide() {

	return (sqrt((height * height) + ((topside + bottomside) / 2) * ((topside + bottomside) / 2)));
}

/// @brief get topside of the object
/// @return topside 
float isoTrapezoid::GetTopside() {

	return topside;
}

/// @brief get bottomside of the object
/// @return bottomside 
float isoTrapezoid::GetBottomside() {

	return bottomside;
}

/// @brief get height of the object
/// @return height 
float isoTrapezoid::GetHeight() {

	return height;
}

/// @brief get side of the object
/// @return side 
float isoTrapezoid::GetSide() {

	return CalculateSide();
}

/// @brief get topside, bottomside and height of the object
/// @param t topside 
/// @param b bottomside
/// @param h height
void isoTrapezoid::GetDim(float& t, float& b, float& h) {

	t = topside;
	b = bottomside;
	h = height;

	return;
}

/// @brief get the area of the object
/// @return area of the isotrapezoid
float isoTrapezoid::GetArea() {

	return ((topside + bottomside) * height) / 2;
}

/// @brief get the perimeter of the object
/// @return perimeter of the isotrapezoid
float isoTrapezoid::GetPerimeter() {

	return (topside + bottomside + 2 * CalculateSide());
}

/// @brief write an error message 
/// @param string message to be printed
void isoTrapezoid::ErrorMessage(const char* string) {

	cout << endl << "ERROR -- isoTrapezoid --";
	cout << string << endl;

}

/// @brief write a warning message 
/// @param string message to be printed
void isoTrapezoid::WarningMessage(const char* string) {

	cout << endl << "WARNING -- isoTrapezoid --";
	cout << string << endl;

}

/// @brief for debugging: all about the object
void isoTrapezoid::Dump() {
	cout << endl;
	cout << "---isoTrapezoid---" << endl;
	cout << endl;

	cout << "Topside = " << topside << endl;
	cout << "Bottomside = " << bottomside << endl;
	cout << "Height = " << height << endl;
	cout << "Side = " << GetSide() << endl;
	cout << "Perimeter = " << GetPerimeter() << endl;
	cout << "Area = " << GetArea() << endl;
	cout << endl;

}

void isoTrapezoid::Draw() {


}


