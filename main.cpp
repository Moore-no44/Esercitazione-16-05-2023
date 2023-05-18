#include "IsoTriangle.h"
#include "rectangle.h"
#include <iostream>

int main() {

	Polygon* universo[100];
	int choice = 0;
	int number = 0;



	for (int i = 0; i < 100; i++) {
		cout << "scelta?\0" << endl;
		scanf_s("%d", &choice);





		switch (choice) {
		case (1):
			cout << "scelta1\0" << endl;
			universo[number] = new Rectangle;
			number++;
			break;

		case (2):
			cout << "scelta2\0" << endl;
			//Rhombus();
			number++;
			break;

		case (3):
			cout << "scelta3\0" << endl;
			universo[number] = new IsoTriangle;
			number++;
			break;


		case (4):

			cout << "scelta4\0" << endl;


			for (i = 0; i < number; i++) {
				universo[i]->Draw();

			}
			break;



		case (5):
			return 0;

		default:
			cout << "Comando errato: ripetere la scelta." << endl;
			break;

		}
	}
	return 0;
}