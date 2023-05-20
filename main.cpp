#include "isotriangle.h"
#include "rectangle.h"
#include "rhombus.h"
#include <iostream>

int main() {

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


				scanf_s("%d", &choice);

			switch (choice) {

			case (1):

					number++;

					cout << "Hai selezionato crea un rettangolo" << endl;
					cout << "Scegliere i parametri del rettangolo (Base, Altezza)" << endl;


					float base1, height1;
					scanf_s("%f%f", &base1, &height1);

					universo[number] = new Rectangle(base1, height1);
			
		
					cout << endl;
					cout <<"Hai creato il rettangolo! (elemento numero " << number << ")" << endl;
					cout << endl;
					cout << endl;
				break;



			case (2):
				number++;

				cout << "Hai selezionato crea un rombo" << endl;
				cout << "Scegliere i parametri del rombo (Diagonale, Diagonale)" << endl;


				float diag1, diag2;
				scanf_s("%f%f", &diag1, &diag2);

				universo[number] = new Rhombus(diag1, diag2);


				cout << endl;
				cout << "Hai creato il rombo! (elemento numero " << number << ")" << endl;
				cout << endl;
				cout << endl;
				break;



			case (3):
					number++;

					cout << "Hai selezionato crea un triangolo isosciele" << endl;
					cout << "Scegliere i parametri del triangolo (Base, Altezza)" << endl;


					float base3, height3;
					scanf_s("%f%f", &base3, &height3);

					universo[number] = new IsoTriangle(base3, height3);
	
		
					cout << endl;
					cout << "Hai creato il triangolo isosciele! (elemento numero " << number << ")" << endl;
					cout << endl;
					cout << endl;
				break;



			case (4):
					cout << "Hai selezionato stampa lo stato del sistema." << endl;
					cout << endl;
		

					for (i = 1; i <= number; i++) {
		

						cout << "elemento numero " << i << endl;
						universo[i]->Draw();
						cout << endl;
					}
				break;



			case (5):
				return 0;



			default: 
				cout << "Comando errato: ripetere la scelta." << endl;
				cout << endl;

				break;



			}
		}
	return 0;
}						