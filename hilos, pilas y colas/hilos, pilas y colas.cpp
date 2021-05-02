#include <iostream>
#include <thread>
#include <windows.h>
#include <time.h>
#include <mutex>
#define nums 20    //DEFINE EL NUMERO DE VALORES A INGRESAR POR CADA COLA
#define ting 2000  //DEFINE EL TIEMPO EN EL QUE SE VAN INGRESANDO LOS VALORES A LA COLA (DE SALIDA SERA EL DOBLE)


using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


void gotoxy(int x, int y)
{

	HANDLE Pantalla;
	Pantalla = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coordenadas;
	coordenadas.X = x;
	coordenadas.Y = y;
	SetConsoleCursorPosition(Pantalla, coordenadas);

}

struct Nodo
{
	int dato;
	Nodo* direccion_sig;
};
void Push(Nodo*&, int);
void Pop(Nodo*&);
void cola1() {
	Nodo* pila = NULL;
	Nodo* primero=NULL;
	Nodo* cola;
	Nodo *ultimo = NULL;
	int par = 0;
	int num;
	for (int i = 1; i <= nums*2; i++) {
		par = i;
		if (i <= nums) {
			cola = new(Nodo);
			srand(time(NULL));
			num = 1 + rand() % (91 - 1);
			cola->dato = num;
			if (ultimo != NULL) {
				ultimo->direccion_sig = cola;
				cola->direccion_sig = NULL;
				ultimo = cola;
			}
			else {
				primero = ultimo = cola;
			}

			if (ultimo == NULL) {
				return;
			}
			cola = primero;
			cout << "\nCLIENTES DE LA COLA 1: ";
			while (cola != NULL) {
				cout << " | " << cola->dato;
				cola = cola->direccion_sig;

			}
		}
		if (par % 2 == 0) {
			if (primero != NULL) {
				cola = primero;
				cout << "\n[1 ATENDIDO A  " << primero->dato<<" ]\n";
				Push(pila, primero->dato);
				primero = cola->direccion_sig;
				delete(cola);
				if (primero == NULL) {
					cola = NULL;
					ultimo = NULL;
				}
			}
			else {
				cout << "NO HAY CLIENTES EN ESTA COLA 1" << endl;
			}
		}
		Sleep(ting);
	}
	while (pila != NULL) {
		cout << "PILA 1: " << pila->dato << endl;
		Pop(pila);
	}
}
void col2() {
	Nodo* pila2 = NULL;
	Nodo* primero = NULL;
	Nodo* cola;
	Nodo* ultimo = NULL;
	int par = 0;
	int num;
	for (int i = 1; i <= nums*2; i++) {
		par = i;
		if (i <= nums) {
			cola = new(Nodo);
			srand(time(NULL));
			num = 1 + rand() % (91 - 1);
			cola->dato = num;
			if (ultimo != NULL) {
				ultimo->direccion_sig = cola;
				cola->direccion_sig = NULL;
				ultimo = cola;
			}
			else {
				primero = ultimo = cola;
			}

			if (ultimo == NULL) {
				return;
			}
			cola = primero;
			cout << "\nCLIENTES DE LA COLA 2: ";
			while (cola != NULL) {
				cout << " | " << cola->dato;
				cola = cola->direccion_sig;

			}
		}
		if (par % 2 == 0) {
			if (primero != NULL) {
				cola = primero;
				cout << "\n[2 ATENDIDO A  " << primero->dato << " ]\n";
				Push(pila2, primero->dato);
				primero = cola->direccion_sig;
				delete(cola);
				if (primero == NULL) {
					cola = NULL;
					ultimo = NULL;
				}
			}
			else {
				cout << "NO HAY CLIENTES EN ESTA COLA 2" << endl;
			}
		}
		Sleep(ting);
	}
	while (pila2 != NULL) {
		cout << "PILA 2: " << pila2->dato << endl;
		Pop(pila2);
	}
}
void col3() {
	Nodo* pila3 = NULL;
	Nodo* primero3 = NULL;
	Nodo* cola3;
	Nodo* ultimo3 = NULL;
	int par = 0;
	int num;
	for (int i = 1; i <= nums * 2; i++) {
		par = i;
		if (i <= nums) {
			cola3 = new(Nodo);
			srand(time(NULL));
			num = 1 + rand() % (91 - 1);
			cola3->dato = num;
			if (ultimo3 != NULL) {
				ultimo3->direccion_sig = cola3;
				cola3->direccion_sig = NULL;
				ultimo3 = cola3;
			}
			else {
				primero3 = ultimo3 = cola3;
			}

			if (ultimo3 == NULL) {
				return;
			}
			cola3 = primero3;
			cout << "\nCLIENTES DE LA COLA 3: ";
			while (cola3 != NULL) {
				cout << " | " << cola3->dato;
				cola3 = cola3->direccion_sig;

			}
		}
		if (par % 2 == 0) {
			if (primero3 != NULL) {
				cola3 = primero3;
				cout << " \n[3 ATENDIDO A  " << primero3->dato << " ]\n";
				Push(pila3, primero3->dato);
				primero3 = cola3->direccion_sig;
				delete(cola3);
				if (primero3 == NULL) {
					cola3 = NULL;
					ultimo3 = NULL;
				}
			}
			else {
				cout << "NO HAY CLIENTES EN ESTA COLA 3" << endl;
			}
		}
		Sleep(ting);
	}
	while (pila3 != NULL) {
		cout << "PILA 3: " << pila3->dato << endl;
		Pop(pila3);
	}
}
void col4() {
	Nodo* pila4 = NULL;
	Nodo* primero = NULL;
	Nodo* cola;
	Nodo* ultimo = NULL;
	int par = 0;
	int num;
	for (int i = 1; i <= nums * 2; i++) {
		par = i;
		if (i <= nums) {
			cola = new(Nodo);
			srand(time(NULL));
			num = 1 + rand() % (91 - 1);
			cola->dato = num;
			if (ultimo != NULL) {
				ultimo->direccion_sig = cola;
				cola->direccion_sig = NULL;
				ultimo = cola;
			}
			else {
				primero = ultimo = cola;
			}

			if (ultimo == NULL) {
				return;
			}
			cola = primero;
			cout << "\nCLIENTES DE LA COLA 4: ";
			while (cola != NULL) {
				cout << " | " << cola->dato;
				cola = cola->direccion_sig;

			}
		}
		if (par % 2 == 0) {
			if (primero != NULL) {
				cola = primero;
				cout << "\n[4 ATENDIDO A  " << primero->dato << " ]\n";
				Push(pila4, primero->dato);
				primero = cola->direccion_sig;
				delete(cola);
				if (primero == NULL) {
					cola = NULL;
					ultimo = NULL;
				}
			}
			else {
				cout << "NO HAY CLIENTES EN ESTA COLA 4" << endl;
			}
		}
		Sleep(ting);
	}
	while (pila4 != NULL) {
		cout << "PILA 4: " << pila4->dato << endl;
		Pop(pila4);
	}

}



int main() {
	cout << "BANCO INTERNACIONAL"<<endl;
	
		thread c1{ cola1 };
		thread c2{ col2 };
		thread c3{ col3 };
		thread c4{ col4 };
		c1.join();
		c2.join();
		c3.join();
		c4.join();
	system("pause");
	return 0;

}

void Push(Nodo*& pila, int v) {
	Nodo* push = new Nodo();
	push->dato = v;
	push->direccion_sig = pila;
	pila = push;
}
void Pop(Nodo*& pila) {
	int v = NULL;
	Nodo* pop = pila;
	v = pop->dato;
	pila = pop->direccion_sig;
	/*if(pila == NULL){
	}*/
	delete pop;
}