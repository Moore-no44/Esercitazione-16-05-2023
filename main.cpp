/**
* @file main.cpp
* @author Travi Lorenzo
* @author Tomaghelli Moreno
* @brief example of use of polygons (iso triangle, rectangle, rhombus) 
*/

#include "isotriangle.h"
#include "rectangle.h"
#include "rhombus.h"
#include <iostream>
/// @brief main
int main() {
	/// \var Polygon * universo
	/// @brief creation of an array containing all the polygons
	/// \var int choice
	/// \brief used to navigate on the main menu'
	/// \var int number
	/// \brief number of the element in the array (used to move between the elements)
	Polygon * universo[100];
	int choice = 0;
	int number = 0;

	
		for (int i = 0; i < 100; i++) {
				cout << "Scegliere la funzione da utilizzare" << endl;
				cout << endl;
				cout << "1: Crea rettangolo" << endl;
				cout << "2: Crea rombo" << endl;
				cout << "3: Crea triangolo isosciele" << endl;
				cout << "4: Stampa stato sistema" << endl;
				cout << "5: Esci dal programma" << endl;
				cout << endl;


				scanf_s("%i", &choice);

			switch (choice) {

			case (1):
				/**
				* Details.
				* creation of a rectangle but only if it has an area > 0, otherwise, it wouldn't be possible drawing it
				*/
					cout << "Hai selezionato crea un rettangolo" << endl;
					cout << "Scegliere i parametri del rettangolo (Base, Altezza)" << endl;


					float base1, height1;
					scanf_s("%f%f", &base1, &height1);

					universo[number] = new Rectangle(base1, height1);

					if (universo[number]->GetArea() == 0)
					{
						delete universo[number];
						cout << "Non e' possibile creare il poligono" << endl;
					}
					else {

						cout << endl;
						cout << "Hai creato il rettangolo! (elemento numero " << number << ")" << endl;
						cout << endl;
						cout << endl;
						number++;
					}
				break;



			case (2):
				/**
				* Details.
				* creation of a rhombus but only if it has an area > 0, otherwise, it wouldn't be possible drawing it
				*/

				cout << "Hai selezionato crea un rombo" << endl;
				cout << "Scegliere i parametri del rombo (Diagonale, Diagonale)" << endl;


				float diag1, diag2;
				scanf_s("%f%f", &diag1, &diag2);

				universo[number] = new Rhombus(diag1, diag2);

				if (universo[number]->GetArea() == 0)
				{
					delete universo[number];
					cout << "Non e' possibile creare il poligono" << endl;
				}
				else {
					cout << endl;
					cout << "Hai creato il rombo! (elemento numero " << number << ")" << endl;
					cout << endl;
					cout << endl;
					number++;
				}
				break;



			case (3):
				/**
				* Details.
				* creation of an iso triangle but only if it has an area > 0, otherwise, it wouldn't be possible drawing it
				*/

					cout << "Hai selezionato crea un triangolo isosciele" << endl;
					cout << "Scegliere i parametri del triangolo (Base, Altezza)" << endl;


					float base3, height3;
					scanf_s("%f%f", &base3, &height3);

					universo[number] = new IsoTriangle(base3, height3);
	
					if (universo[number]->GetArea() == 0)
					{
						delete universo[number];
						cout << "Non e' possibile creare il poligono" << endl;
					}
					else {
						cout << endl;
						cout << "Hai creato il triangolo isosciele! (elemento numero " << number << ")" << endl;
						cout << endl;
						cout << endl;
						number++;
					}
				break;



			case (4):
				/**
				* Details.
				* print all the polygons created (number+1 polygons)
				*/
					cout << "Hai selezionato stampa lo stato del sistema." << endl;
					cout << endl;
		

					for (i = 0; i < number; i++) {
						cout << "elemento numero " << i+1 << endl;
						universo[i]->Draw();
						cout << endl;
					}
				break;



			case (5):
				/**
				* Details.
				* exit the program
				*/
				return 0;

			default: 
				/**
				* Details.
				* if the choice is not correct, it must be typed again
				*/
				cout << "Comando errato: ripetere la scelta." << endl;
				cout << endl;
				break;



			}
		}
	return 0;
}						