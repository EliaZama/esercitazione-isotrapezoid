/// @file 

#include "polygon.h" 
#include "rectangle.h"
#include "rhombus.h"
#include "isoTrapezoid.h"
#include <iostream>


int main()
{
	int a = 0;
	int cont = 0;

	Polygon* figure[100];


	for (int i = 0; i < 100; i++)
	{

		cout << "what polygon do you want?" << endl;
		cout << "1 - rectangle " << endl;
		cout << "2 - rhombus " << endl;
		cout << "3 - isosceles trapezoid " << endl;
		cout << "4 - draw all object " << endl;
		cout << "5 - exit " << endl;

		scanf_s("%d", &a);

		switch (a)
		{
		case (1):
			cout << "new rectangle" << endl;
			cout << "insert length e width " << endl;
			
			float l, w;
			scanf_s("%f%f\n", &l, &w); 
			figure[cont]= new Rectangle(w, l);

			cont++;
			break;

		case (2):
		/*	cout << "new rhombus" << endl;
			cout << "insert diagH e diagV " << endl;

			float dH, dV;
			scanf_s("%f%f\n", &dH, dH);
			figure[cont]= new Rhombus(dH,dV);

			cont++;
			break;
		*/
		case (3):
			cout << "new isoceles trapezoid" << endl;
			cout << "insert topside, bottomside and height\n" << endl;
			
			float t, b, h;
			scanf_s("%f%f%f\n", &t, &b, &h);
			figure[cont] = new isoTrapezoid(t, b, h);


			cont++;
			break;

		case (4):
			cout << "draw all of object" << endl;

			for (int t = 0; t < cont; t++) {
				figure[t]->Draw();
			}


			break;

		case (5):
			//delete[] figure;
			return 0;

			break;

		default:
			cout << "not possible number" << endl;

			break;
		}
	}
}