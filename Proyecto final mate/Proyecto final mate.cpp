#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416

using namespace std;

char seleccion;
int asqui;


void nuevaM();

struct nuevamatriz
{
	int matriznumero = 1;
	int filas[1];
	int columnas[1];
	float matriz[10][10];

}m[99];

struct matrizcp
{
	int filas[1];
	int columnas[1];
	float matriz[10][10];

}mcp[99];
int idf = 1;

int id = 1;
int contador = 1;
int numero = 1;
float numx;
float numy;
float numz;
float vectornumx;
float vectornumy;
float vectornumz;


void cuaternio();
void mostrar();

void operaciones();
int parametro1;
int parametro2;
char prueba[99];

void suma(int parametro1, int parametro2);
void resta(int parametro1, int parametro2);
void mult(int parametro1, int parametro2);
void matrizcomp();
void rotax();
void rotay();
void rotaz();
void terminarmatrizcomp();
float angulox;
float anguloy;
float anguloz;

struct Cuaternios
{
	int filas, columnas;
	float matriz[5][5];

}c[3];

int cuater = 1;

void main() {


	int ciclo = 0;

	while (ciclo == 0) {


		asqui = 0;

		system("cls");
		cout << "\t\t\t\t\t\tMENU GENERAL" << endl;
		cout << "Estas son las operaciones que se pueden hacer" << endl;
		cout << "1.Matriz nueva. \n2.Mostrar matrices. \n3.Operaciones. \n4.Matriz compuesta \n5.Cuaternios " << endl;
		cin >> seleccion;
		asqui = seleccion;


		if (asqui >= 58 && asqui <= 126) {

			cout << "Dato invalido";
			ciclo = 0;
			system("pause>null");

		}


		else if (asqui >= 33 && asqui <= 48) {

			cout << "Dato invalido";
			ciclo = 0;
			system("pause>null");

		}

		else if (asqui == 49) {

			ciclo = 1;
			nuevaM();


		}

		else if (asqui == 50) {

			ciclo = 1;
			mostrar();

		}

		else if (asqui == 51) {

			ciclo = 1;
			operaciones();

		}

		else if (asqui == 52) {

			ciclo = 1;
			matrizcomp();

		}

		else if (asqui == 53) {

			ciclo = 1;
			cuaternio();

		}

	}

}

void nuevaM() {

	int ciclo = 0;

	while (ciclo == 0) {

		system("cls");

		cout << "Matriz numero:\t" << numero;
		cout << "\nDigite el numero de filas\n";
		char numero[99];
		cin >> numero;
		int comparador = 0;
		comparador = atoi(numero);
		if (comparador == 0) {

			cout << "\nDato invalido ";
			ciclo = 0;
			system("pause>null");

		}

		else if (comparador <= 0) {

			cout << "\nDato invalido ";
			ciclo = 0;
			system("pause>null");


		}

		else {

			ciclo = 1;
			m[id].filas[contador] = comparador;


		}

	}

	int ciclo1 = 0;

	while (ciclo1 == 0) {

		system("cls");
		cout << "Matriz numero:\t" << numero;
		cout << "\nDigite el numero de columnas\n";
		char numero1[99];
		cin >> numero1;
		int comparador1 = 0;
		comparador1 = atoi(numero1);



		if (comparador1 <= 0) {

			cout << "\nDato invalido ";
			ciclo1 = 0;
			system("pause>null");

		}


		else {

			ciclo1 = 1;
			m[id].columnas[contador] = comparador1;


		}
	}





	for (int i = 1; i <= m[id].filas[contador]; i++) {

		for (int j = 1; j <= m[id].columnas[contador]; j++) {

			int ciclor = 0;

			while (ciclor == 0) {

				float num[10];


				cout << "\nIngrese el numero[" << i << "][" << j << "]:";
				cin >> prueba;
				int longi = 0;
				longi = strlen(prueba);

				if (longi == 1 && prueba[0] == '0') {

					int *puntero;
					int cero = 0;
					puntero = &cero;

					m[id].matriz[i][j] = *puntero;
					ciclor = 1;


				}


				else
				{

					num[0] = atof(prueba);



					if (num[0] == 0) {

						cout << "Dato invalido";
						system("pause>null");
						ciclor = 0;
					}




					else {
						ciclor = 1;

						float *punteroo = 0;

						punteroo = &num[0];

						m[id].matriz[i][j] = *punteroo;


					}

				}

			}

		}

	}


	cout << "Matriz agregada con exito\n";
	system("pause>null");
	id++;
	numero++;

	main();
}

void mostrar() {
	system("cls");
	cout << "\t\t\t\tEn esta seccion se mostraran las matrices agregadas\n\n";

	for (int i = 1; i < id; i++) {

		cout << "Matriz " << i << ": " << endl;


		for (int j = 1; j <= m[i].filas[contador]; j++) {


			for (int k = 1; k <= m[i].columnas[contador]; k++) {

				cout << "[" << m[i].matriz[j][k] << "]";
			}
			cout << endl;
		}

		cout << endl;
	}



	system("pause>null");
	main();


}

void operaciones() {

	char opc = 0;

	if (id < 3) {
		cout << "\n\n\t\tPara realizar operaciones se necesitan minimo 2 matrices dadas de alta c:";
		system("pause>null");
		main();


	}


	while (opc != 'a' && opc != 'b' && opc != 'c') {


		system("cls");
		cout << "\t\t\t\tEstas son las operacion que se pueden realizar:" << endl;
		cout << "a) Suma de matrices\n";
		cout << "b) Resta de matrices\n";
		cout << "c) Multiplicacion de matrices\n";
		cin >> opc;


	}


	if (opc == 'a') {

		char numerito[99];
		char numerito1[99];
		int cicloa = 0;
		parametro1 = 0;
		while (cicloa == 0) {


			system("cls");
			cout << "En esta area usted podra realizar sumas de matrices" << endl;
			cout << "Elija la primera matriz\n\n";


			for (int i = 1; i < id; i++) {

				cout << "Matriz " << i << ": " << endl;


				for (int j = 1; j <= m[i].filas[contador]; j++) {


					for (int k = 1; k <= m[i].columnas[contador]; k++) {

						cout << "[" << m[i].matriz[j][k] << "]";

					}
					cout << endl;
				}

				cout << endl;
			}

			cin >> numerito;

			parametro1 = atoi(numerito);

			if (parametro1 <= 0) {

				cout << "\nDato invalido";
				system("pause>null");
				cicloa = 0;

			}


			else if (parametro1 >= id) {
				cout << "\nAun no existe esa matriz";
				system("pause>null");
				cicloa = 0;


			}

			else {

				cicloa = 1;

			}

		}

		int cicloawa = 0;
		parametro2 = 0;

		while (cicloawa == 0) {


			system("cls");

			cout << "En esta area usted podra realizar sumas de matrices" << endl;
			cout << "Elija la segunda matriz\n\n";

			for (int i = 1; i < id; i++) {

				cout << "Matriz " << i << ": " << endl;


				for (int j = 1; j <= m[i].filas[contador]; j++) {


					for (int k = 1; k <= m[i].columnas[contador]; k++) {

						cout << "[" << m[i].matriz[j][k] << "]";

					}
					cout << endl;
				}

				cout << endl;
			}


			cin >> numerito1;

			parametro2 = atoi(numerito1);

			if (parametro2 <= 0) {

				cout << "\nDato invalido";
				system("pause>null");
				cicloawa = 0;

			}


			else if (parametro2 >= id) {
				cout << "\nAun no existe esa matriz";
				system("pause>null");
				cicloawa = 0;

			}

			else
			{
				cicloawa = 1;
				suma(parametro1, parametro2);

			}


		}

	}

	else if (opc == 'b') {

		char numerito[99];
		char numerito1[99];
		int cicloa = 0;
		parametro1 = 0;
		while (cicloa == 0) {


			system("cls");
			cout << "En esta area usted podra realizar restas de matrices" << endl;
			cout << "Elija la primera matriz\n\n";


			for (int i = 1; i < id; i++) {

				cout << "Matriz " << i << ": " << endl;


				for (int j = 1; j <= m[i].filas[contador]; j++) {


					for (int k = 1; k <= m[i].columnas[contador]; k++) {

						cout << "[" << m[i].matriz[j][k] << "]";

					}
					cout << endl;
				}

				cout << endl;
			}

			cin >> numerito;

			parametro1 = atoi(numerito);

			if (parametro1 <= 0) {

				cout << "\nDato invalido";
				system("pause>null");
				cicloa = 0;

			}


			else if (parametro1 >= id) {
				cout << "\nAun no existe esa matriz";
				system("pause>null");
				cicloa = 0;


			}

			else {

				cicloa = 1;

			}

		}

		int cicloawa = 0;
		parametro2 = 0;

		while (cicloawa == 0) {


			system("cls");

			cout << "En esta area usted podra realizar restas de matrices" << endl;
			cout << "Elija la segunda matriz\n\n";

			for (int i = 1; i < id; i++) {

				cout << "Matriz " << i << ": " << endl;


				for (int j = 1; j <= m[i].filas[contador]; j++) {


					for (int k = 1; k <= m[i].columnas[contador]; k++) {

						cout << "[" << m[i].matriz[j][k] << "]";

					}
					cout << endl;
				}

				cout << endl;
			}


			cin >> numerito1;

			parametro2 = atoi(numerito1);

			if (parametro2 <= 0) {

				cout << "\nDato invalido";
				system("pause>null");
				cicloawa = 0;

			}


			else if (parametro2 >= id) {
				cout << "\nAun no existe esa matriz";
				system("pause>null");
				cicloawa = 0;

			}

			else
			{
				cicloawa = 1;
				resta(parametro1, parametro2);

			}


		}

	}

	else if (opc == 'c') {


		char numerito[99];
		char numerito1[99];
		int cicloa = 0;
		parametro1 = 0;
		while (cicloa == 0) {


			system("cls");
			cout << "En esta area usted podra realizar multiplicaciones de matrices" << endl;
			cout << "Elija la primera matriz\n\n";


			for (int i = 1; i < id; i++) {

				cout << "Matriz " << i << ": " << endl;


				for (int j = 1; j <= m[i].filas[contador]; j++) {


					for (int k = 1; k <= m[i].columnas[contador]; k++) {

						cout << "[" << m[i].matriz[j][k] << "]";

					}
					cout << endl;
				}

				cout << endl;
			}

			cin >> numerito;

			parametro1 = atoi(numerito);

			if (parametro1 <= 0) {

				cout << "\nDato invalido";
				system("pause>null");
				cicloa = 0;

			}


			else if (parametro1 >= id) {
				cout << "\nAun no existe esa matriz";
				system("pause>null");
				cicloa = 0;


			}

			else {

				cicloa = 1;

			}

		}

		int cicloawa = 0;
		parametro2 = 0;

		while (cicloawa == 0) {


			system("cls");

			cout << "En esta area usted podra realizar multiplicaciones de matrices" << endl;
			cout << "Elija la segunda matriz\n\n";

			for (int i = 1; i < id; i++) {

				cout << "Matriz " << i << ": " << endl;


				for (int j = 1; j <= m[i].filas[contador]; j++) {


					for (int k = 1; k <= m[i].columnas[contador]; k++) {

						cout << "[" << m[i].matriz[j][k] << "]";

					}
					cout << endl;
				}

				cout << endl;
			}


			cin >> numerito1;

			parametro2 = atoi(numerito1);

			if (parametro2 <= 0) {

				cout << "\nDato invalido";
				system("pause>null");
				cicloawa = 0;

			}


			else if (parametro2 >= id) {
				cout << "\nAun no existe esa matriz";
				system("pause>null");
				cicloawa = 0;

			}

			else
			{
				cicloawa = 1;
				mult(parametro1, parametro2);

			}


		}

	}



}

void suma(int parametro1, int parametro2) {


	if (m[parametro1].filas[contador] == m[parametro2].filas[contador] && m[parametro1].columnas[contador] == m[parametro2].columnas[contador]) {



		cout << "\nLa nueva matriz es el numero:\t" << id << endl;


		for (int i = 1; i <= m[parametro1].filas[contador]; i++) {
			for (int j = 1; j <= m[parametro1].columnas[contador]; j++) {

				m[id].matriz[i][j] = m[parametro1].matriz[i][j] + m[parametro2].matriz[i][j];
			}
		}

		m[id].filas[contador] = m[parametro1].filas[contador];
		m[id].columnas[contador] = m[parametro1].columnas[contador];


		for (int i = 1; i <= m[id].filas[contador]; i++) {

			for (int j = 1; j <= m[id].columnas[contador]; j++) {

				cout << "[" << m[id].matriz[i][j] << "]";
			}

			cout << endl;
		}
		id++;
		system("pause>null");
		main();

	}


	else {

		cout << endl;
		cout << "La suma de matrices no se puede realizar ya que son de diferentes dimensiones.";

		system("pause>null");
		main();

	}
}

void resta(int parametro1, int parametro2) {

	if (m[parametro1].filas[contador] == m[parametro2].filas[contador] && m[parametro1].columnas[contador] == m[parametro2].columnas[contador]) {



		cout << "\nLa nueva matriz es el numero:\t" << id << endl;


		for (int i = 1; i <= m[parametro1].filas[contador]; i++) {
			for (int j = 1; j <= m[parametro1].columnas[contador]; j++) {

				m[id].matriz[i][j] = m[parametro1].matriz[i][j] - m[parametro2].matriz[i][j];
			}
		}

		m[id].filas[contador] = m[parametro1].filas[contador];
		m[id].columnas[contador] = m[parametro1].columnas[contador];


		for (int i = 1; i <= m[id].filas[contador]; i++) {

			for (int j = 1; j <= m[id].columnas[contador]; j++) {

				cout << "[" << m[id].matriz[i][j] << "]";
			}

			cout << endl;
		}
		id++;
		system("pause>null");
		main();

	}


	else {

		cout << endl;
		cout << "La resta de matrices no se puede realizar ya que son de diferentes dimensiones.";

		system("pause>null");
		main();

	}

}

void mult(int parametro1, int parametro2) {




	if (m[parametro1].filas[contador] == m[parametro2].columnas[contador]) {

		cout << "\nLa nueva matriz es el numero:\t" << id << endl;

		m[id].filas[contador] = m[parametro1].filas[contador];
		m[id].columnas[contador] = m[parametro2].columnas[contador];


		for (int i = 1; i <= m[parametro1].filas[contador]; i++) {
			for (int j = 1; j <= m[parametro2].columnas[contador]; j++) {

				for (int k = 1; k <= m[parametro2].filas[contador]; k++) {

					m[id].matriz[i][j] = m[id].matriz[i][j] + m[parametro1].matriz[i][k] * m[parametro2].matriz[k][j];

				}
			}
		}


		for (int j = 1; j <= m[id].filas[contador]; j++) {

			for (int k = 1; k <= m[id].columnas[contador]; k++) {

				cout << "[" << m[id].matriz[j][k] << "]";
			}

			cout << endl;
		}

		id++;
		system("pause>null");
		main();


	}

	else
	{
		cout << "La multiplicacion de matrices no se puede realizar." << endl;
		cout << "El numero de columnas de la Matriz\t" << parametro1 << endl << "es diferente a el de las filas de la Matriz\t" << parametro2;
		system("pause>null");
		main();
	}


}

void matrizcomp() {

	system("cls");

	char numero = 0;

	while (numero != 'r' && numero != 's' && numero != 't') {
		system("cls");

		cout << "En esta area podra elegir las operaciones en el orden en el que quiera que se realice la matriz compuesta";
		cout << "\nEstas son las operaciones que se pueden realizar\n";
		cout << "r-rotacion\ns-escalacion\nt-traslacion\n";
		cout << "\nCual es la primera operacion que desea realizar?\n";
		cin >> numero;


	}

	if (numero == 't') {

		int ciclotx = 0;

		numx = 0;
		numy = 0;
		numz = 0;

		while (ciclotx == 0) {

			system("cls");

			cout << "Digite el punto que desea trasladar en (x, y, z)\n";
			cout << "punto en x\t";

			char punto[99];
			int longi = 0;
			cin >> punto;
			longi = strlen(punto);

			if (longi == 1 && punto[0] == '0') {

				numx = 0;

				ciclotx = 1;


			}

			else
			{
				numx = atof(punto);


				if (numx == 0) {

					cout << "Dato invalido";
					system("pause>null");
					ciclotx = 0;
				}

				else
				{
					numx;
					ciclotx = 1;

				}

			}

		}

		int cicloty = 0;

		while (cicloty == 0) {

			system("cls");
			cout << endl << endl;
			cout << "Digite el punto que desea trasladar en (x, y, z)\n";
			cout << "punto en y\t";

			char punto[5];
			int longi = 0;
			cin >> punto;
			longi = strlen(punto);

			if (longi == 1 && punto[0] == '0') {

				numy = 0;

				cicloty = 1;


			}

			else
			{
				numy = atof(punto);


				if (numy == 0) {

					cout << "Dato invalido";
					system("pause>null");
					ciclotx = 0;
				}

				else
				{
					numx;
					cicloty = 1;

				}



			}



		}


		int ciclotz = 0;

		while (ciclotz == 0) {

			system("cls");
			cout << endl << endl;
			cout << "Digite el punto que desea trasladar en (x, y, z)\n";
			cout << "punto en z\t";

			char punto[5];
			int longi = 0;
			cin >> punto;
			longi = strlen(punto);

			if (longi == 1 && punto[0] == '0') {

				numz = 0;

				ciclotz = 1;

			}

			else
			{
				numz = atof(punto);


				if (numz == 0) {

					cout << "Dato invalido";
					system("pause>null");
					ciclotz = 0;
				}

				else
				{

					ciclotz = 1;

				}



			}



		}



		m[id].columnas[contador] = 4;
		m[id].filas[contador] = 4;


		mcp[idf].columnas[contador] = 4;
		mcp[idf].filas[contador] = 4;

		float *punterox;
		float *punteroy;
		float *punteroz;

		punterox = &numx;
		punteroy = &numy;
		punteroz = &numz;


		mcp[idf].matriz[1][1] = 1;
		mcp[idf].matriz[1][2] = 0;
		mcp[idf].matriz[1][3] = 0;
		mcp[idf].matriz[1][4] = *punterox;
		mcp[idf].matriz[2][1] = 0;
		mcp[idf].matriz[2][2] = 1;
		mcp[idf].matriz[2][3] = 0;
		mcp[idf].matriz[2][4] = *punteroy;
		mcp[idf].matriz[3][1] = 0;
		mcp[idf].matriz[3][2] = 0;
		mcp[idf].matriz[3][3] = 1;
		mcp[idf].matriz[3][4] = *punteroz;
		mcp[idf].matriz[4][1] = 0;
		mcp[idf].matriz[4][2] = 0;
		mcp[idf].matriz[4][3] = 0;
		mcp[idf].matriz[4][4] = 1;

		for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


			for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

				cout << "[" << mcp[idf].matriz[i][j] << "]";

			}
			cout << endl;
		}

		system("pause>null");
		terminarmatrizcomp();

	}

	else if (numero == 's') {


		numx = 0;
		numy = 0;
		numz = 0;
		int ciclosx = 0;

		while (ciclosx == 0) {

			system("cls");
			cout << endl;
			cout << "Digite el punto que desea escalar en (x, y, z)\n";
			cout << "punto en x\t";

			char punto[99];
			int longi = 0;
			cin >> punto;
			longi = strlen(punto);

			if (longi == 1 && punto[0] == '0') {

				numx = 0;

				ciclosx = 1;


			}

			else
			{
				numx = atof(punto);


				if (numx == 0) {

					cout << "Dato invalido";
					system("pause>null");
					ciclosx = 0;
				}

				else
				{
					ciclosx = 1;

				}

			}

		}

		int ciclosy = 0;

		while (ciclosy == 0) {

			system("cls");
			cout << endl ;
			cout << "Digite el punto que desea escalar en (x, y, z)\n";
			cout << "punto en y\t";

			char punto[5];
			int longi = 0;
			cin >> punto;
			longi = strlen(punto);

			if (longi == 1 && punto[0] == '0') {

				numy = 0;

				ciclosy = 1;


			}

			else
			{
				numy = atof(punto);


				if (numy == 0) {

					cout << "Dato invalido";
					system("pause>null");
					ciclosy = 0;
				}

				else
				{
					numx;
					ciclosy = 1;

				}



			}



		}

		int ciclosz = 0;

		while (ciclosz == 0) {

			system("cls");
			cout << endl << endl;
			cout << "Digite el punto que desea escalar en (x, y, z)\n";
			cout << "punto en z\t";

			char punto[5];
			int longi = 0;
			cin >> punto;
			longi = strlen(punto);

			if (longi == 1 && punto[0] == '0') {

				numz = 0;

				ciclosz = 1;


			}

			else
			{
				numz = atof(punto);


				if (numz == 0) {

					cout << "Dato invalido";
					system("pause>null");
					ciclosz = 0;
				}

				else
				{

					ciclosz = 1;

				}



			}



		}

		m[id].columnas[contador] = 4;
		m[id].filas[contador] = 4;

		mcp[idf].columnas[contador] = 4;
		mcp[idf].filas[contador] = 4;


		float *punterox;
		float *punteroy;
		float *punteroz;

		punterox = &numx;
		punteroy = &numy;
		punteroz = &numz;

		mcp[idf].matriz[1][1] = *punterox;
		mcp[idf].matriz[1][2] = 0;
		mcp[idf].matriz[1][3] = 0;
		mcp[idf].matriz[1][4] = 0;
		mcp[idf].matriz[2][1] = 0;
		mcp[idf].matriz[2][2] = *punteroy;
		mcp[idf].matriz[2][3] = 0;
		mcp[idf].matriz[2][4] = 0;
		mcp[idf].matriz[3][1] = 0;
		mcp[idf].matriz[3][2] = 0;
		mcp[idf].matriz[3][3] = *punteroz;
		mcp[idf].matriz[3][4] = 0;
		mcp[idf].matriz[4][1] = 0;
		mcp[idf].matriz[4][2] = 0;
		mcp[idf].matriz[4][3] = 0;
		mcp[idf].matriz[4][4] = 1;

		for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


			for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

				cout << "[" << mcp[idf].matriz[i][j] << "]";

			}
			cout << endl;
		}


		system("pause>null");
		terminarmatrizcomp();



	}

	else {

		char numerito = 0;


		while (numerito != 'x' && numerito != 'y' && numerito != 'z') {

			system("cls");
			cout << "En que angulo desea rotar?\n";
			cout << "x\ny\nz\n";

			cin >> numerito;


		}

		if (numerito == 'x') {

			rotax();

		}

		else if (numerito == 'y') {

			rotay();

		}

		else
		{
			rotaz();
		}


	}

}

void rotax() {

	angulox = 0;
	char angulo[99];
	int ciclosupremox = 0;

	while (ciclosupremox == 0) {


		system("cls");
		cout << "\nIngrese porfavor el angulo\t";
		cin >> angulo;
		cout << endl;
		float longi = 0;
		longi = strlen(angulo);

		if (longi == 1 && angulo[0] == '0') {


			angulox = 0;
			ciclosupremox = 1;

		}

		else
		{

			angulox = atof(angulo);


			if (angulox == 0) {

				cout << "Dato invalido";
				system("pause>null");
				ciclosupremox = 0;
			}

			else
			{

				ciclosupremox = 1;

			}

		}

	}


	m[id].columnas[contador] = 4;
	m[id].filas[contador] = 4;


	mcp[idf].columnas[contador] = 4;
	mcp[idf].filas[contador] = 4;

	if (angulox == 90) {

		mcp[idf].matriz[1][1] = 1;
		mcp[idf].matriz[1][2] = 0;
		mcp[idf].matriz[1][3] = 0;
		mcp[idf].matriz[1][4] = 0;
		mcp[idf].matriz[2][1] = 0;
		mcp[idf].matriz[2][2] = 0;//
		mcp[idf].matriz[2][3] = -1;//1
		mcp[idf].matriz[2][4] = 0;
		mcp[idf].matriz[3][1] = 0;
		mcp[idf].matriz[3][2] = 1;//1
		mcp[idf].matriz[3][3] = 0;//
		mcp[idf].matriz[3][4] = 0;
		mcp[idf].matriz[4][1] = 0;
		mcp[idf].matriz[4][2] = 0;
		mcp[idf].matriz[4][3] = 0;
		mcp[idf].matriz[4][4] = 1;

		for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


			for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

				cout << "[" << mcp[idf].matriz[i][j] << "]";

			}
			cout << endl;
		}


		system("pause>null");

		terminarmatrizcomp();

	}

	else if (angulox == -90) {

		mcp[idf].matriz[1][1] = 1;
		mcp[idf].matriz[1][2] = 0;
		mcp[idf].matriz[1][3] = 0;
		mcp[idf].matriz[1][4] = 0;
		mcp[idf].matriz[2][1] = 0;
		mcp[idf].matriz[2][2] = 0;//
		mcp[idf].matriz[2][3] = 1;//
		mcp[idf].matriz[2][4] = 0;
		mcp[idf].matriz[3][1] = 0;
		mcp[idf].matriz[3][2] = -1;//
		mcp[idf].matriz[3][3] = 0;//
		mcp[idf].matriz[3][4] = 0;
		mcp[idf].matriz[4][1] = 0;
		mcp[idf].matriz[4][2] = 0;
		mcp[idf].matriz[4][3] = 0;
		mcp[idf].matriz[4][4] = 1;

		for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


			for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

				cout << "[" << mcp[idf].matriz[i][j] << "]";

			}
			cout << endl;
		}

		system("pause>null");
		terminarmatrizcomp();

	}

	else if (angulox == 180 || angulox == -180) {

		mcp[idf].matriz[1][1] = 1;
		mcp[idf].matriz[1][2] = 0;
		mcp[idf].matriz[1][3] = 0;
		mcp[idf].matriz[1][4] = 0;
		mcp[idf].matriz[2][1] = 0;
		mcp[idf].matriz[2][2] = -1;//
		mcp[idf].matriz[2][3] = 0;//
		mcp[idf].matriz[2][4] = 0;
		mcp[idf].matriz[3][1] = 0;
		mcp[idf].matriz[3][2] = 0;//
		mcp[idf].matriz[3][3] = -1;//
		mcp[idf].matriz[3][4] = 0;
		mcp[idf].matriz[4][1] = 0;
		mcp[idf].matriz[4][2] = 0;
		mcp[idf].matriz[4][3] = 0;
		mcp[idf].matriz[4][4] = 1;
		for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


			for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

				cout << "[" << mcp[idf].matriz[i][j] << "]";

			}
			cout << endl;
		}


		system("pause>null");
		terminarmatrizcomp();
	}

	else if (angulox == 360 || angulox == -360) {

		mcp[idf].matriz[1][1] = 1;
		mcp[idf].matriz[1][2] = 0;
		mcp[idf].matriz[1][3] = 0;
		mcp[idf].matriz[1][4] = 0;
		mcp[idf].matriz[2][1] = 0;
		mcp[idf].matriz[2][2] = 1;//
		mcp[idf].matriz[2][3] = 0;//
		mcp[idf].matriz[2][4] = 0;
		mcp[idf].matriz[3][1] = 0;
		mcp[idf].matriz[3][2] = 0;//
		mcp[idf].matriz[3][3] = 1;//
		mcp[idf].matriz[3][4] = 0;
		mcp[idf].matriz[4][1] = 0;
		mcp[idf].matriz[4][2] = 0;
		mcp[idf].matriz[4][3] = 0;
		mcp[idf].matriz[4][4] = 1;

		for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


			for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

				cout << "[" << mcp[idf].matriz[i][j] << "]";

			}
			cout << endl;
		}


		system("pause>null");
		terminarmatrizcomp();


	}


	else
	{


		float senox = 0;
		float cosenox = 0;
		float senoxnegativo = 0;

		senox = sin(angulox*PI / 180);
		cosenox = cos(angulox*PI / 180);
		senoxnegativo = senox;
		senoxnegativo = senoxnegativo * -1;


		mcp[idf].matriz[1][1] = 1;
		mcp[idf].matriz[1][2] = 0;
		mcp[idf].matriz[1][3] = 0;
		mcp[idf].matriz[1][4] = 0;
		mcp[idf].matriz[2][1] = 0;
		mcp[idf].matriz[2][2] = cosenox;//
		mcp[idf].matriz[2][3] = senoxnegativo;//
		mcp[idf].matriz[2][4] = 0;
		mcp[idf].matriz[3][1] = 0;
		mcp[idf].matriz[3][2] = senox;//
		mcp[idf].matriz[3][3] = cosenox;//
		mcp[idf].matriz[3][4] = 0;
		mcp[idf].matriz[4][1] = 0;
		mcp[idf].matriz[4][2] = 0;
		mcp[idf].matriz[4][3] = 0;
		mcp[idf].matriz[4][4] = 1;

		for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


			for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

				cout << "[" << mcp[idf].matriz[i][j] << "]";

			}
			cout << endl;
		}



		system("pause>null");
		terminarmatrizcomp();


	}
}

void rotay() {


	anguloy = 0;
	char angulo[99];
	int ciclosupremoy = 0;

	while (ciclosupremoy == 0) {


		system("cls");
		cout << "\nIngrese porfavor el angulo\t";
		cin >> angulo;
		cout << endl;
		float longi = 0;
		longi = strlen(angulo);

		if (longi == 1 && angulo[0] == '0') {

			anguloy = 0;
			ciclosupremoy = 1;

		}

		else
		{

			anguloy = atof(angulo);


			if (anguloy == 0) {

				cout << "Dato invalido";
				system("pause>null");
				ciclosupremoy = 0;
			}

			else
			{

				ciclosupremoy = 1;

			}

		}

	}


	m[id].columnas[contador] = 4;
	m[id].filas[contador] = 4;

	mcp[idf].columnas[contador] = 4;
	mcp[idf].filas[contador] = 4;

	if (anguloy == 90) {


		mcp[idf].matriz[1][1] = 0;
		mcp[idf].matriz[1][2] = 0;
		mcp[idf].matriz[1][3] = 1;
		mcp[idf].matriz[1][4] = 0;
		mcp[idf].matriz[2][1] = 0;
		mcp[idf].matriz[2][2] = 1;
		mcp[idf].matriz[2][3] = 0;
		mcp[idf].matriz[2][4] = 0;
		mcp[idf].matriz[3][1] = -1;
		mcp[idf].matriz[3][2] = 0;
		mcp[idf].matriz[3][3] = 0;
		mcp[idf].matriz[3][4] = 0;
		mcp[idf].matriz[4][1] = 0;
		mcp[idf].matriz[4][2] = 0;
		mcp[idf].matriz[4][3] = 0;
		mcp[idf].matriz[4][4] = 1;

		for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


			for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

				cout << "[" << mcp[idf].matriz[i][j] << "]";

			}
			cout << endl;
		}


		system("pause>null");
		terminarmatrizcomp();


	}

	else if (anguloy == -90) {


		mcp[idf].matriz[1][1] = 0;
		mcp[idf].matriz[1][2] = 0;
		mcp[idf].matriz[1][3] = -1;
		mcp[idf].matriz[1][4] = 0;
		mcp[idf].matriz[2][1] = 0;
		mcp[idf].matriz[2][2] = 1;
		mcp[idf].matriz[2][3] = 0;
		mcp[idf].matriz[2][4] = 0;
		mcp[idf].matriz[3][1] = 1;
		mcp[idf].matriz[3][2] = 0;
		mcp[idf].matriz[3][3] = 0;
		mcp[idf].matriz[3][4] = 0;
		mcp[idf].matriz[4][1] = 0;
		mcp[idf].matriz[4][2] = 0;
		mcp[idf].matriz[4][3] = 0;
		mcp[idf].matriz[4][4] = 1;

		for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


			for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

				cout << "[" << mcp[idf].matriz[i][j] << "]";

			}
			cout << endl;
		}



		system("pause>null");
		terminarmatrizcomp();


	}

	else if (anguloy == 180 || anguloy == -180) {


		mcp[idf].matriz[1][1] = -1;
		mcp[idf].matriz[1][2] = 0;
		mcp[idf].matriz[1][3] = 0;
		mcp[idf].matriz[1][4] = 0;
		mcp[idf].matriz[2][1] = 0;
		mcp[idf].matriz[2][2] = 1;
		mcp[idf].matriz[2][3] = 0;
		mcp[idf].matriz[2][4] = 0;
		mcp[idf].matriz[3][1] = 0;
		mcp[idf].matriz[3][2] = 0;
		mcp[idf].matriz[3][3] = -1;
		mcp[idf].matriz[3][4] = 0;
		mcp[idf].matriz[4][1] = 0;
		mcp[idf].matriz[4][2] = 0;
		mcp[idf].matriz[4][3] = 0;
		mcp[idf].matriz[4][4] = 1;

		for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


			for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

				cout << "[" << mcp[idf].matriz[i][j] << "]";

			}
			cout << endl;
		}



		system("pause>null");
		terminarmatrizcomp();


	}

	else if (anguloy == 360 || anguloy == -360) {

		mcp[idf].matriz[1][1] = 1;
		mcp[idf].matriz[1][2] = 0;
		mcp[idf].matriz[1][3] = 0;
		mcp[idf].matriz[1][4] = 0;
		mcp[idf].matriz[2][1] = 0;
		mcp[idf].matriz[2][2] = 1;
		mcp[idf].matriz[2][3] = 0;
		mcp[idf].matriz[2][4] = 0;
		mcp[idf].matriz[3][1] = 0;
		mcp[idf].matriz[3][2] = 0;
		mcp[idf].matriz[3][3] = 1;
		mcp[idf].matriz[3][4] = 0;
		mcp[idf].matriz[4][1] = 0;
		mcp[idf].matriz[4][2] = 0;
		mcp[idf].matriz[4][3] = 0;
		mcp[idf].matriz[4][4] = 1;

		for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


			for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

				cout << "[" << mcp[idf].matriz[i][j] << "]";

			}
			cout << endl;
		}



		system("pause>null");
		terminarmatrizcomp();

	}

	else {

		float senoy = 0;
		float cosenoy = 0;
		float senoynegativo = 0;

		senoy = sin(anguloy*PI / 180);
		cosenoy = sin(anguloy*PI / 180);
		senoynegativo = senoy;
		senoynegativo = senoynegativo * -1;


		float *punterocosenoy;
		float *punterosenoy;
		float *punterosenoyneg;


		punterosenoy = &senoy;
		punterocosenoy = &cosenoy;
		punterosenoyneg = &senoynegativo;


		mcp[idf].matriz[1][1] = *punterocosenoy;
		mcp[idf].matriz[1][2] = 0;
		mcp[idf].matriz[1][3] = *punterosenoy;
		mcp[idf].matriz[1][4] = 0;
		mcp[idf].matriz[2][1] = 0;
		mcp[idf].matriz[2][2] = 1;
		mcp[idf].matriz[2][3] = 0;
		mcp[idf].matriz[2][4] = 0;
		mcp[idf].matriz[3][1] = *punterosenoyneg;;
		mcp[idf].matriz[3][2] = 0;
		mcp[idf].matriz[3][3] = *punterocosenoy;
		mcp[idf].matriz[3][4] = 0;
		mcp[idf].matriz[4][1] = 0;
		mcp[idf].matriz[4][2] = 0;
		mcp[idf].matriz[4][3] = 0;
		mcp[idf].matriz[4][4] = 1;

		for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


			for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

				cout << "[" << mcp[idf].matriz[i][j] << "]";

			}
			cout << endl;
		}


		system("pause>null");
		terminarmatrizcomp();

	}
}

void rotaz() {

	anguloz = 0;
	char angulo[99];
	int ciclosupremoz = 0;

	while (ciclosupremoz == 0) {


		system("cls");
		cout << "\nIngrese porfavor el angulo\t";
		cin >> angulo;
		cout << endl;
		float longi = 0;
		longi = strlen(angulo);

		if (longi == 1 && angulo[0] == '0') {


			anguloz = 0;
			ciclosupremoz = 1;

		}

		else
		{
			anguloz = atof(angulo);


			if (anguloz == 0) {

				cout << "Dato invalido";
				system("pause>null");
				ciclosupremoz = 0;
			}

			else
			{

				ciclosupremoz = 1;

			}

		}

	}


	m[id].columnas[contador] = 4;
	m[id].filas[contador] = 4;


	mcp[idf].columnas[contador] = 4;
	mcp[idf].filas[contador] = 4;


	if (anguloz == 90) {

		mcp[idf].matriz[1][1] = 0;
		mcp[idf].matriz[1][2] = -1;
		mcp[idf].matriz[1][3] = 0;
		mcp[idf].matriz[1][4] = 0;
		mcp[idf].matriz[2][1] = 1;
		mcp[idf].matriz[2][2] = 0;
		mcp[idf].matriz[2][3] = 0;
		mcp[idf].matriz[2][4] = 0;
		mcp[idf].matriz[3][1] = 0;
		mcp[idf].matriz[3][2] = 0;
		mcp[idf].matriz[3][3] = 1;
		mcp[idf].matriz[3][4] = 0;
		mcp[idf].matriz[4][1] = 0;
		mcp[idf].matriz[4][2] = 0;
		mcp[idf].matriz[4][3] = 0;
		mcp[idf].matriz[4][4] = 1;

		for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


			for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

				cout << "[" << mcp[idf].matriz[i][j] << "]";

			}
			cout << endl;
		}


		system("pause>null");
		terminarmatrizcomp();

	}

	else if (anguloz == -90) {

		mcp[idf].matriz[1][1] = 0;
		mcp[idf].matriz[1][2] = 1;
		mcp[idf].matriz[1][3] = 0;
		mcp[idf].matriz[1][4] = 0;
		mcp[idf].matriz[2][1] = -1;
		mcp[idf].matriz[2][2] = 0;
		mcp[idf].matriz[2][3] = 0;
		mcp[idf].matriz[2][4] = 0;
		mcp[idf].matriz[3][1] = 0;
		mcp[idf].matriz[3][2] = 0;
		mcp[idf].matriz[3][3] = 1;
		mcp[idf].matriz[3][4] = 0;
		mcp[idf].matriz[4][1] = 0;
		mcp[idf].matriz[4][2] = 0;
		mcp[idf].matriz[4][3] = 0;
		mcp[idf].matriz[4][4] = 1;

		for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


			for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

				cout << "[" << mcp[idf].matriz[i][j] << "]";

			}
			cout << endl;
		}



		system("pause>null");
		terminarmatrizcomp();


	}

	else if (anguloz == 180 || anguloz == -180) {

		mcp[idf].matriz[1][1] = -1;
		mcp[idf].matriz[1][2] = 0;
		mcp[idf].matriz[1][3] = 0;
		mcp[idf].matriz[1][4] = 0;
		mcp[idf].matriz[2][1] = 0;
		mcp[idf].matriz[2][2] = -1;
		mcp[idf].matriz[2][3] = 0;
		mcp[idf].matriz[2][4] = 0;
		mcp[idf].matriz[3][1] = 0;
		mcp[idf].matriz[3][2] = 0;
		mcp[idf].matriz[3][3] = 1;
		mcp[idf].matriz[3][4] = 0;
		mcp[idf].matriz[4][1] = 0;
		mcp[idf].matriz[4][2] = 0;
		mcp[idf].matriz[4][3] = 0;
		mcp[idf].matriz[4][4] = 1;

		for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


			for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

				cout << "[" << mcp[idf].matriz[i][j] << "]";

			}
			cout << endl;
		}


		system("pause>null");
		terminarmatrizcomp();


	}

	else if (anguloz == 360 || anguloz == -360) {

		mcp[idf].matriz[1][1] = 1;
		mcp[idf].matriz[1][2] = 0;
		mcp[idf].matriz[1][3] = 0;
		mcp[idf].matriz[1][4] = 0;
		mcp[idf].matriz[2][1] = 0;
		mcp[idf].matriz[2][2] = 1;
		mcp[idf].matriz[2][3] = 0;
		mcp[idf].matriz[2][4] = 0;
		mcp[idf].matriz[3][1] = 0;
		mcp[idf].matriz[3][2] = 0;
		mcp[idf].matriz[3][3] = 1;
		mcp[idf].matriz[3][4] = 0;
		mcp[idf].matriz[4][1] = 0;
		mcp[idf].matriz[4][2] = 0;
		mcp[idf].matriz[4][3] = 0;
		mcp[idf].matriz[4][4] = 1;

		for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


			for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

				cout << "[" << mcp[idf].matriz[i][j] << "]";

			}
			cout << endl;
		}

		system("pause>null");
		terminarmatrizcomp();

	}

	else
	{
		float senoz = 0;
		float cosenoz = 0;
		float senoznegativo = 0;

		senoz = sin(anguloz*PI / 180);
		cosenoz = cos(anguloz*PI / 180);

		senoznegativo = senoz;
		senoznegativo = senoznegativo * -1;


		float *punterocosenoz;
		float *punterosenoz;
		float *punterosenozneg;

		punterosenoz = &senoz;
		punterocosenoz = &cosenoz;
		punterosenozneg = &senoznegativo;


		mcp[idf].matriz[1][1] = *punterocosenoz;
		mcp[idf].matriz[1][2] = *punterosenozneg;
		mcp[idf].matriz[1][3] = 0;
		mcp[idf].matriz[1][4] = 0;
		mcp[idf].matriz[2][1] = *punterosenoz;
		mcp[idf].matriz[2][2] = *punterocosenoz;
		mcp[idf].matriz[2][3] = 0;
		mcp[idf].matriz[2][4] = 0;
		mcp[idf].matriz[3][1] = 0;
		mcp[idf].matriz[3][2] = 0;
		mcp[idf].matriz[3][3] = 1;
		mcp[idf].matriz[3][4] = 0;
		mcp[idf].matriz[4][1] = 0;
		mcp[idf].matriz[4][2] = 0;
		mcp[idf].matriz[4][3] = 0;
		mcp[idf].matriz[4][4] = 1;

		for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


			for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

				cout << "[" << mcp[idf].matriz[i][j] << "]";

			}
			cout << endl;
		}



		system("pause>null");
		terminarmatrizcomp();


	}


}

void terminarmatrizcomp() {


	char numero = 0;

	while (numero != 'r' && numero != 's' && numero != 't' && numero !=  'v'  ) {
		system("cls");


		cout << "\n\nQue otra area operacion que quiera desea realizar?";
		cout << "\nEstas son las operaciones que se pueden realizar\n";
		cout << "r-rotacion\ns-escalacion\nt-traslacion\nv-Matriz por vector\n";
		cin >> numero;


	}


	if (numero == 't') {

		int ciclotx = 0;

		numx = 0;
		numy = 0;
		numz = 0;

		while (ciclotx == 0) {

			system("cls");



			for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


				for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

					cout << "[" << mcp[idf].matriz[i][j] << "]";

				}
				cout << endl;
			}

			cout << "\nDigite el punto que desea trasladar en (x, y, z)\n";
			cout << "punto en x\t";

			char punto[99];
			int longi = 0;
			cin >> punto;
			longi = strlen(punto);

			if (longi == 1 && punto[0] == '0') {

				numx = 0;

				ciclotx = 1;


			}

			else
			{
				numx = atof(punto);


				if (numx == 0) {

					cout << "Dato invalido";
					system("pause>null");
					ciclotx = 0;
				}

				else
				{
					numx;
					ciclotx = 1;

				}

			}

		}

		int cicloty = 0;

		while (cicloty == 0) {

			system("cls");


			for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


				for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

					cout << "[" << mcp[idf].matriz[i][j] << "]";

				}
				cout << endl;
			}
			cout << "\nDigite el punto que desea trasladar en (x, y, z)\n";
			cout << "punto en y\t";

			char punto[5];
			int longi = 0;
			cin >> punto;
			longi = strlen(punto);

			if (longi == 1 && punto[0] == '0') {

				numy = 0;

				cicloty = 1;


			}

			else
			{
				numy = atof(punto);


				if (numy == 0) {

					cout << "Dato invalido";
					system("pause>null");
					ciclotx = 0;
				}

				else
				{
					numx;
					cicloty = 1;

				}



			}



		}


		int ciclotz = 0;

		while (ciclotz == 0) {

			system("cls");


			for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


				for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

					cout << "[" << mcp[idf].matriz[i][j] << "]";

				}
				cout << endl;
			}
			cout << "\nDigite el punto que desea trasladar en (x, y, z)\n";
			cout << "punto en z\t";

			char punto[5];
			int longi = 0;
			cin >> punto;
			longi = strlen(punto);

			if (longi == 1 && punto[0] == '0') {

				numz = 0;

				ciclotz = 1;

			}

			else
			{
				numz = atof(punto);


				if (numz == 0) {

					cout << "Dato invalido";
					system("pause>null");
					ciclotz = 0;
				}

				else
				{

					ciclotz = 1;

				}



			}



		}


		mcp[idf + 1].columnas[contador] = 4;
		mcp[idf + 1].filas[contador] = 4;


		float *punterox;
		float *punteroy;
		float *punteroz;

		punterox = &numx;
		punteroy = &numy;
		punteroz = &numz;


		mcp[idf + 1].matriz[1][1] = 1;
		mcp[idf + 1].matriz[1][2] = 0;
		mcp[idf + 1].matriz[1][3] = 0;
		mcp[idf + 1].matriz[1][4] = *punterox;
		mcp[idf + 1].matriz[2][1] = 0;
		mcp[idf + 1].matriz[2][2] = 1;
		mcp[idf + 1].matriz[2][3] = 0;
		mcp[idf + 1].matriz[2][4] = *punteroy;
		mcp[idf + 1].matriz[3][1] = 0;
		mcp[idf + 1].matriz[3][2] = 0;
		mcp[idf + 1].matriz[3][3] = 1;
		mcp[idf + 1].matriz[3][4] = *punteroz;
		mcp[idf + 1].matriz[4][1] = 0;
		mcp[idf + 1].matriz[4][2] = 0;
		mcp[idf + 1].matriz[4][3] = 0;
		mcp[idf + 1].matriz[4][4] = 1;

		cout << endl;

		for (int i = 1; i <= mcp[idf + 1].filas[contador]; i++) {


			for (int j = 1; j <= mcp[idf + 1].columnas[contador]; j++) {

				cout << "[" << mcp[idf + 1].matriz[i][j] << "]";

			}
			cout << endl;
		}


		cout << "\n\nLa nueva matriz es el numero:\t" << id << endl;

		cout << endl;



		for (int i = 1; i <= m[id].filas[contador]; i++) {

			for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {


				for (int k = 1; k <= mcp[idf].filas[contador]; k++) {

					m[id].matriz[i][j] = m[id].matriz[i][j] + mcp[idf].matriz[i][k] * mcp[idf + 1].matriz[k][j];

				}
			}
		}


		for (int j = 1; j <= m[id].filas[contador]; j++) {

			for (int k = 1; k <= m[id].columnas[contador]; k++) {

				cout << "[" << m[id].matriz[j][k] << "]";
			}

			cout << endl;
		}

		char opc = 0;

		while (opc != 'a' && opc != 'b') {

			cout << "\n\nDesea hacer otra operacion?";
			cout << "\na) si";
			cout << "\nb) no\n";
			cin >> opc;

		}

		if (opc == 'a') {

			system("cls");

			//igualando id con idf



			for (int j = 1; j <= m[id].filas[contador]; j++) {

				for (int k = 1; k <= m[id].columnas[contador]; k++) {
					
					mcp[idf].matriz[j][k] = m[id].matriz[j][k];
				}

			}



			//haciendo cero id

			for (int j = 1; j <= m[id].filas[contador]; j++) {

				for (int k = 1; k <= m[id].columnas[contador]; k++) {

					m[id].matriz[j][k] = 0;
				}

			}
			//haciendo cero idf + 1xd

			for (int j = 1; j <= m[id].filas[contador]; j++) {

				for (int k = 1; k <= m[id].columnas[contador]; k++) {

					mcp[idf + 1].matriz[j][k] = 0;
				}

			}

			terminarmatrizcomp();


		}

		else
		{
			id++;
			system("pause>null");
			main();

		}

	}

	else if (numero == 's') {


		numx = 0;
		numy = 0;
		numz = 0;
		int ciclosx = 0;

		while (ciclosx == 0) {

			system("cls");



			for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


				for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

					cout << "[" << mcp[idf].matriz[i][j] << "]";

				}
				cout << endl;
			}



			cout << "\nDigite el punto que desea escalar en (x, y, z)\n";
			cout << "punto en x\t";

			char punto[99];
			int longi = 0;
			cin >> punto;
			longi = strlen(punto);

			if (longi == 1 && punto[0] == '0') {

				numx = 0;

				ciclosx = 1;


			}

			else
			{
				numx = atof(punto);


				if (numx == 0) {

					cout << "Dato invalido";
					system("pause>null");
					ciclosx = 0;
				}

				else
				{
					ciclosx = 1;

				}

			}

		}

		int ciclosy = 0;

		while (ciclosy == 0) {

			system("cls");


			for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


				for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

					cout << "[" << mcp[idf].matriz[i][j] << "]";

				}
				cout << endl;
			}


			cout << "\nDigite el punto que desea escalar en (x, y, z)\n";
			cout << "punto en y\t";

			char punto[5];
			int longi = 0;
			cin >> punto;
			longi = strlen(punto);

			if (longi == 1 && punto[0] == '0') {

				numy = 0;

				ciclosy = 1;


			}

			else
			{
				numy = atof(punto);


				if (numy == 0) {

					cout << "Dato invalido";
					system("pause>null");
					ciclosy = 0;
				}

				else
				{
					numx;
					ciclosy = 1;

				}



			}



		}

		int ciclosz = 0;

		while (ciclosz == 0) {

			system("cls");
			


			for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


				for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

					cout << "[" << mcp[idf].matriz[i][j] << "]";

				}
				cout << endl;
			}


			cout << "\nDigite el punto que desea escalar en (x, y, z)\n";
			cout << "punto en y\t";

			char punto[5];
			int longi = 0;
			cin >> punto;
			longi = strlen(punto);

			if (longi == 1 && punto[0] == '0') {

				numz = 0;

				ciclosz = 1;


			}

			else
			{
				numz = atof(punto);


				if (numz == 0) {

					cout << "Dato invalido";
					system("pause>null");
					ciclosz = 0;
				}

				else
				{

					ciclosz = 1;

				}



			}



		}

	
		mcp[idf + 1].columnas[contador] = 4;
		mcp[idf + 1].filas[contador] = 4;


		float *punterox;
		float *punteroy;
		float *punteroz;

		punterox = &numx;
		punteroy = &numy;
		punteroz = &numz;

		mcp[idf + 1].matriz[1][1] = *punterox;
		mcp[idf + 1].matriz[1][2] = 0;
		mcp[idf + 1].matriz[1][3] = 0;
		mcp[idf + 1].matriz[1][4] = 0;
		mcp[idf + 1].matriz[2][1] = 0;
		mcp[idf + 1].matriz[2][2] = *punteroy;
		mcp[idf + 1].matriz[2][3] = 0;
		mcp[idf + 1].matriz[2][4] = 0;
		mcp[idf + 1].matriz[3][1] = 0;
		mcp[idf + 1].matriz[3][2] = 0;
		mcp[idf + 1].matriz[3][3] = *punteroz;
		mcp[idf + 1].matriz[3][4] = 0;
		mcp[idf + 1].matriz[4][1] = 0;
		mcp[idf + 1].matriz[4][2] = 0;
		mcp[idf + 1].matriz[4][3] = 0;
		mcp[idf + 1].matriz[4][4] = 1;

		for (int i = 1; i <= mcp[idf + 1].filas[contador]; i++) {

			for (int j = 1; j <= mcp[idf + 1].columnas[contador]; j++) {

				cout << "[" << mcp[idf + 1].matriz[i][j] << "]";

			}
			cout << endl;
		}

		cout << "\n\nLa nueva matriz es el numero:\t" << id << endl;

		cout << endl;

	
		for (int i = 1; i <= m[id].filas[contador]; i++) {

			for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {


				for (int k = 1; k <= mcp[idf].filas[contador]; k++) {

					m[id].matriz[i][j] = m[id].matriz[i][j] + mcp[idf].matriz[i][k] * mcp[idf + 1].matriz[k][j];

				}
			}
		}



		for (int j = 1; j <= m[id].filas[contador]; j++) {

			for (int k = 1; k <= m[id].columnas[contador]; k++) {

				cout << "[" << m[id].matriz[j][k] << "]";
			}

			cout << endl;
		}


		char opc = 0;

		while (opc != 'a' && opc != 'b') {

			cout << "\n\nDesea hacer otra operacion?";
			cout << "\na) si";
			cout << "\nb) no\n";
			cin >> opc;

		}

		if (opc == 'a') {

			system("cls");
			
			//igualando id con idf

			for (int j = 1; j <= m[id].filas[contador]; j++) {

				for (int k = 1; k <= m[id].columnas[contador]; k++) {

					mcp[idf].matriz[j][k] = m[id].matriz[j][k];
				}

			}

			//haciendo cero id

			for (int j = 1; j <= m[id].filas[contador]; j++) {

				for (int k = 1; k <= m[id].columnas[contador]; k++) {

					m[id].matriz[j][k] = 0;
				}

			}
			//haciendo cero idf + 1xd

			for (int j = 1; j <= m[id].filas[contador]; j++) {

				for (int k = 1; k <= m[id].columnas[contador]; k++) {

					mcp[idf + 1].matriz[j][k] = 0;
				}

			}

			terminarmatrizcomp();


		}

		else
		{
			id++;
			system("pause>null");
			main();

		}

	}

	else if (numero == 'r'){

		char numerito = 0;

		angulox = 0;

		while (numerito != 'x' && numerito != 'y' && numerito != 'z') {

			system("cls");

			for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


				for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

					cout << "[" << mcp[idf].matriz[i][j] << "]";

				}
				cout << endl;
			}

			cout << "En que angulo desea rotar?\n";
			cout << "x\ny\nz\n";

			cin >> numerito;


		}

		if (numerito == 'x') {

			angulox = 0;
			char angulo[99];
			int ciclosupremox = 0;

			while (ciclosupremox == 0) {

				system("cls");

				for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


					for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

						cout << "[" << mcp[idf].matriz[i][j] << "]";

					}
					cout << endl;
				}

				cout << "\nIngrese porfavor el angulo\t";
				cin >> angulo;
				cout << endl;
				float longi = 0;
				longi = strlen(angulo);

				if (longi == 1 && angulo[0] == '0') {


					angulox = 0;
					ciclosupremox = 1;

				}

				else
				{

					angulox = atof(angulo);


					if (angulox == 0) {

						cout << "Dato invalido";
						system("pause>null");
						ciclosupremox = 0;
					}

					else
					{

						ciclosupremox = 1;

					}

				}

			}


			mcp[idf + 1].columnas[contador] = 4;
			mcp[idf + 1].filas[contador] = 4;



			if (angulox == 90) {

				mcp[idf + 1].matriz[1][1] = 1;
				mcp[idf + 1].matriz[1][2] = 0;
				mcp[idf + 1].matriz[1][3] = 0;
				mcp[idf + 1].matriz[1][4] = 0;
				mcp[idf + 1].matriz[2][1] = 0;
				mcp[idf + 1].matriz[2][2] = 0;//
				mcp[idf + 1].matriz[2][3] = -1;//1
				mcp[idf + 1].matriz[2][4] = 0;
				mcp[idf + 1].matriz[3][1] = 0;
				mcp[idf + 1].matriz[3][2] = 1;//1
				mcp[idf + 1].matriz[3][3] = 0;//
				mcp[idf + 1].matriz[3][4] = 0;
				mcp[idf + 1].matriz[4][1] = 0;
				mcp[idf + 1].matriz[4][2] = 0;
				mcp[idf + 1].matriz[4][3] = 0;
				mcp[idf + 1].matriz[4][4] = 1;

				cout << endl;

				for (int i = 1; i <= mcp[idf + 1].filas[contador]; i++) {


					for (int j = 1; j <= mcp[idf + 1].columnas[contador]; j++) {

						cout << "[" << mcp[idf + 1].matriz[i][j] << "]";

					}
					cout << endl;
				}

				cout << "\n\nLa nueva matriz es el numero:\t" << id << endl;
				

				cout << endl;



				for (int i = 1; i <= m[id].filas[contador]; i++) {

					for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {


						for (int k = 1; k <= mcp[idf].filas[contador]; k++) {

							m[id].matriz[i][j] = m[id].matriz[i][j] + mcp[idf].matriz[i][k] * mcp[idf + 1].matriz[k][j];

						}
					}
				}


				for (int j = 1; j <= m[id].filas[contador]; j++) {

					for (int k = 1; k <= m[id].columnas[contador]; k++) {

						cout << "[" << m[id].matriz[j][k] << "]";
					}

					cout << endl;
				}



				char opc = 0;

				while (opc != 'a' && opc != 'b') {

					cout << "\n\nDesea hacer otra operacion?";
					cout << "\na) si";
					cout << "\nb) no\n";
					cin >> opc;

				}


				if (opc == 'a') {

					system("cls");

					//igualando id con idf



					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							mcp[idf].matriz[j][k] = m[id].matriz[j][k];
						}

					}



					//haciendo cero id

					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							m[id].matriz[j][k] = 0;
						}

					}
					//haciendo cero idf + 1xd

					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							mcp[idf + 1].matriz[j][k] = 0;
						}

					}

					terminarmatrizcomp();


				}

				else
				{
					id++;
					system("pause>null");
					main();

				}

			}

			else if (angulox == -90) {

				mcp[idf + 1].matriz[1][1] = 1;
				mcp[idf + 1].matriz[1][2] = 0;
				mcp[idf + 1].matriz[1][3] = 0;
				mcp[idf + 1].matriz[1][4] = 0;
				mcp[idf + 1].matriz[2][1] = 0;
				mcp[idf + 1].matriz[2][2] = 0;//
				mcp[idf + 1].matriz[2][3] = 1;//
				mcp[idf + 1].matriz[2][4] = 0;
				mcp[idf + 1].matriz[3][1] = 0;
				mcp[idf + 1].matriz[3][2] = -1;//
				mcp[idf + 1].matriz[3][3] = 0;//
				mcp[idf + 1].matriz[3][4] = 0;
				mcp[idf + 1].matriz[4][1] = 0;
				mcp[idf + 1].matriz[4][2] = 0;
				mcp[idf + 1].matriz[4][3] = 0;
				mcp[idf + 1].matriz[4][4] = 1;

				cout << endl;

				for (int i = 1; i <= mcp[idf + 1].filas[contador]; i++) {


					for (int j = 1; j <= mcp[idf + 1].columnas[contador]; j++) {

						cout << "[" << mcp[idf + 1].matriz[i][j] << "]";

					}

					cout << endl;
				}

				cout << "\n\nLa nueva matriz es el numero:\t" << id << endl;


				cout << endl;


				for (int i = 1; i <= m[id].filas[contador]; i++) {

					for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {


						for (int k = 1; k <= mcp[idf].filas[contador]; k++) {

							m[id].matriz[i][j] = m[id].matriz[i][j] + mcp[idf].matriz[i][k] * mcp[idf + 1].matriz[k][j];

						}
					}
				}


				for (int j = 1; j <= m[id].filas[contador]; j++) {

					for (int k = 1; k <= m[id].columnas[contador]; k++) {

						cout << "[" << m[id].matriz[j][k] << "]";
					}

					cout << endl;
				}


				char opc = 0;

				while (opc != 'a' && opc != 'b') {

					cout << "\n\nDesea hacer otra operacion?";
					cout << "\na) si";
					cout << "\nb) no\n";
					cin >> opc;

				}


				if (opc == 'a') {

					system("cls");

					//igualando id con idf

					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							mcp[idf].matriz[j][k] = m[id].matriz[j][k];
						}

					}



					//haciendo cero id

					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							m[id].matriz[j][k] = 0;
						}

					}
					//haciendo cero idf + 1xd

					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							mcp[idf + 1].matriz[j][k] = 0;
						}

					}

					terminarmatrizcomp();


				}

				else
				{
					id++;
					system("pause>null");
					main();

				}
				
			}

			else if (angulox == 180 || angulox == -180) {

				mcp[idf + 1].matriz[1][1] = 1;
				mcp[idf + 1].matriz[1][2] = 0;
				mcp[idf + 1].matriz[1][3] = 0;
				mcp[idf + 1].matriz[1][4] = 0;
				mcp[idf + 1].matriz[2][1] = 0;
				mcp[idf + 1].matriz[2][2] = -1;//
				mcp[idf + 1].matriz[2][3] = 0;//
				mcp[idf + 1].matriz[2][4] = 0;
				mcp[idf + 1].matriz[3][1] = 0;
				mcp[idf + 1].matriz[3][2] = 0;//
				mcp[idf + 1].matriz[3][3] = -1;//
				mcp[idf + 1].matriz[3][4] = 0;
				mcp[idf + 1].matriz[4][1] = 0;
				mcp[idf + 1].matriz[4][2] = 0;
				mcp[idf + 1].matriz[4][3] = 0;
				mcp[idf + 1].matriz[4][4] = 1;

				

				cout << endl;

				for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


					for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

						cout << "[" << mcp[idf].matriz[i][j] << "]";

					}
					cout << endl;
				}

				cout << endl;

				for (int i = 1; i <= mcp[idf + 1].filas[contador]; i++) {


					for (int j = 1; j <= mcp[idf + 1].columnas[contador]; j++) {

						cout << "[" << mcp[idf + 1].matriz[i][j] << "]";

					}
					cout << endl;
				}

				cout << "\n\nLa nueva matriz es el numero:\t" << id << endl;


				cout << endl;



				for (int i = 1; i <= m[id].filas[contador]; i++) {

					for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {


						for (int k = 1; k <= mcp[idf].filas[contador]; k++) {

							m[id].matriz[i][j] = m[id].matriz[i][j] + mcp[idf].matriz[i][k] * mcp[idf + 1].matriz[k][j];

						}
					}
				}


				for (int j = 1; j <= m[id].filas[contador]; j++) {

					for (int k = 1; k <= m[id].columnas[contador]; k++) {

						cout << "[" << m[id].matriz[j][k] << "]";
					}

					cout << endl;
				}



				char opc = 0;

				while (opc != 'a' && opc != 'b') {

					cout << "\n\nDesea hacer otra operacion?";
					cout << "\na) si";
					cout << "\nb) no\n";
					cin >> opc;

				}


				if (opc == 'a') {

					system("cls");

					//igualando id con idf



					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							mcp[idf].matriz[j][k] = m[id].matriz[j][k];
						}

					}



					//haciendo cero id

					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							m[id].matriz[j][k] = 0;
						}

					}
					//haciendo cero idf + 1xd

					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							mcp[idf + 1].matriz[j][k] = 0;
						}

					}

					terminarmatrizcomp();


				}

				else
				{
					id++;
					system("pause>null");
					main();

				}



			}

			else if (angulox == 360 || angulox == -360) {

				mcp[idf + 1].matriz[1][1] = 1;
				mcp[idf + 1].matriz[1][2] = 0;
				mcp[idf + 1].matriz[1][3] = 0;
				mcp[idf + 1].matriz[1][4] = 0;
				mcp[idf + 1].matriz[2][1] = 0;
				mcp[idf + 1].matriz[2][2] = 1;//
				mcp[idf + 1].matriz[2][3] = 0;//
				mcp[idf + 1].matriz[2][4] = 0;
				mcp[idf + 1].matriz[3][1] = 0;
				mcp[idf + 1].matriz[3][2] = 0;//
				mcp[idf + 1].matriz[3][3] = 1;//
				mcp[idf + 1].matriz[3][4] = 0;
				mcp[idf + 1].matriz[4][1] = 0;
				mcp[idf + 1].matriz[4][2] = 0;
				mcp[idf + 1].matriz[4][3] = 0;
				mcp[idf + 1].matriz[4][4] = 1;

				cout << endl;

				for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


					for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

						cout << "[" << mcp[idf].matriz[i][j] << "]";

					}
					cout << endl;
				}

				cout << endl;

				for (int i = 1; i <= mcp[idf + 1].filas[contador]; i++) {


					for (int j = 1; j <= mcp[idf + 1].columnas[contador]; j++) {

						cout << "[" << mcp[idf + 1].matriz[i][j] << "]";

					}
					cout << endl;
				}

				cout << "\n\nLa nueva matriz es el numero:\t" << id << endl;


				cout << endl;



				for (int i = 1; i <= m[id].filas[contador]; i++) {

					for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {


						for (int k = 1; k <= mcp[idf].filas[contador]; k++) {

							m[id].matriz[i][j] = m[id].matriz[i][j] + mcp[idf].matriz[i][k] * mcp[idf + 1].matriz[k][j];

						}
					}
				}


				for (int j = 1; j <= m[id].filas[contador]; j++) {

					for (int k = 1; k <= m[id].columnas[contador]; k++) {

						cout << "[" << m[id].matriz[j][k] << "]";
					}

					cout << endl;
				}



				char opc = 0;

				while (opc != 'a' && opc != 'b') {

					cout << "\n\nDesea hacer otra operacion?";
					cout << "\na) si";
					cout << "\nb) no\n";
					cin >> opc;

				}


				if (opc == 'a') {

					system("cls");

					//igualando id con idf



					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							mcp[idf].matriz[j][k] = m[id].matriz[j][k];
						}

					}



					//haciendo cero id

					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							m[id].matriz[j][k] = 0;
						}

					}
					//haciendo cero idf + 1xd

					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							mcp[idf + 1].matriz[j][k] = 0;
						}

					}

					terminarmatrizcomp();


				}

				else
				{
					id++;
					system("pause>null");
					main();

				}


			}

			else
			{

				float senox = 0;
				float cosenox = 0;
				float senoxnegativo = 0;

				senox = sin(angulox*PI / 180);
				cosenox = cos(angulox*PI / 180);
				senoxnegativo = senox;
				senoxnegativo = senoxnegativo * -1;


				mcp[idf + 1].matriz[1][1] = 1;
				mcp[idf + 1].matriz[1][2] = 0;
				mcp[idf + 1].matriz[1][3] = 0;
				mcp[idf + 1].matriz[1][4] = 0;
				mcp[idf + 1].matriz[2][1] = 0;
				mcp[idf + 1].matriz[2][2] = cosenox;//
				mcp[idf + 1].matriz[2][3] = senoxnegativo;//
				mcp[idf + 1].matriz[2][4] = 0;
				mcp[idf + 1].matriz[3][1] = 0;
				mcp[idf + 1].matriz[3][2] = senox;//
				mcp[idf + 1].matriz[3][3] = cosenox;//
				mcp[idf + 1].matriz[3][4] = 0;
				mcp[idf + 1].matriz[4][1] = 0;
				mcp[idf + 1].matriz[4][2] = 0;
				mcp[idf + 1].matriz[4][3] = 0;
				mcp[idf + 1].matriz[4][4] = 1;

				cout << endl;

				for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


					for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

						cout << "[" << mcp[idf].matriz[i][j] << "]";

					}
					cout << endl;
				}

				cout << endl;

				for (int i = 1; i <= mcp[idf + 1].filas[contador]; i++) {


					for (int j = 1; j <= mcp[idf + 1].columnas[contador]; j++) {

						cout << "[" << mcp[idf + 1].matriz[i][j] << "]";

					}
					cout << endl;
				}

				cout << "\n\nLa nueva matriz es el numero:\t" << id << endl;


				cout << endl;



				for (int i = 1; i <= m[id].filas[contador]; i++) {

					for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {


						for (int k = 1; k <= mcp[idf].filas[contador]; k++) {

							m[id].matriz[i][j] = m[id].matriz[i][j] + mcp[idf].matriz[i][k] * mcp[idf + 1].matriz[k][j];

						}
					}
				}


				for (int j = 1; j <= m[id].filas[contador]; j++) {

					for (int k = 1; k <= m[id].columnas[contador]; k++) {

						cout << "[" << m[id].matriz[j][k] << "]";
					}

					cout << endl;
				}



				char opc = 0;

				while (opc != 'a' && opc != 'b') {

					cout << "\n\nDesea hacer otra operacion?";
					cout << "\na) si";
					cout << "\nb) no\n";
					cin >> opc;

				}


				if (opc == 'a') {

					system("cls");

					//igualando id con idf



					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							mcp[idf].matriz[j][k] = m[id].matriz[j][k];
						}

					}



					//haciendo cero id

					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							m[id].matriz[j][k] = 0;
						}

					}
					//haciendo cero idf + 1xd

					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							mcp[idf + 1].matriz[j][k] = 0;
						}

					}

					terminarmatrizcomp();


				}

				else
				{
					id++;
					system("pause>null");
					main();

				}


			}

		}	

		else if (numerito == 'y') {

			anguloy = 0;
			char angulo[99];
			int ciclosupremoy = 0;

			while (ciclosupremoy == 0) {


				system("cls");

				for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


					for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

						cout << "[" << mcp[idf].matriz[i][j] << "]";

					}
					cout << endl;
				}

				cout << "\nIngrese porfavor el angulo\t";
				cin >> angulo;
				cout << endl;
				float longi = 0;
				longi = strlen(angulo);

				if (longi == 1 && angulo[0] == '0') {

					anguloy = 0;
					ciclosupremoy = 1;

				}

				else
				{

					anguloy = atof(angulo);


					if (anguloy == 0) {

						cout << "Dato invalido";
						system("pause>null");
						ciclosupremoy = 0;
					}

					else
					{

						ciclosupremoy = 1;

					}

				}

			}

			mcp[idf + 1].columnas[contador] = 4;
			mcp[idf + 1].filas[contador] = 4;



			if (anguloy == 90) {


				mcp[idf + 1].matriz[1][1] = 0;
				mcp[idf + 1].matriz[1][2] = 0;
				mcp[idf + 1].matriz[1][3] = 1;
				mcp[idf + 1].matriz[1][4] = 0;
				mcp[idf + 1].matriz[2][1] = 0;
				mcp[idf + 1].matriz[2][2] = 1;
				mcp[idf + 1].matriz[2][3] = 0;
				mcp[idf + 1].matriz[2][4] = 0;
				mcp[idf + 1].matriz[3][1] = -1;
				mcp[idf + 1].matriz[3][2] = 0;
				mcp[idf + 1].matriz[3][3] = 0;
				mcp[idf + 1].matriz[3][4] = 0;
				mcp[idf + 1].matriz[4][1] = 0;
				mcp[idf + 1].matriz[4][2] = 0;
				mcp[idf + 1].matriz[4][3] = 0;
				mcp[idf + 1].matriz[4][4] = 1;

				
				cout << endl;

				for (int i = 1; i <= mcp[idf + 1].filas[contador]; i++) {


					for (int j = 1; j <= mcp[idf + 1].columnas[contador]; j++) {

						cout << "[" << mcp[idf + 1].matriz[i][j] << "]";

					}
					cout << endl;
				}

				cout << "\n\nLa nueva matriz es el numero:\t" << id << endl;


				cout << endl;



				for (int i = 1; i <= m[id].filas[contador]; i++) {

					for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {


						for (int k = 1; k <= mcp[idf].filas[contador]; k++) {

							m[id].matriz[i][j] = m[id].matriz[i][j] + mcp[idf].matriz[i][k] * mcp[idf + 1].matriz[k][j];

						}
					}
				}


				for (int j = 1; j <= m[id].filas[contador]; j++) {

					for (int k = 1; k <= m[id].columnas[contador]; k++) {

						cout << "[" << m[id].matriz[j][k] << "]";
					}

					cout << endl;
				}



				char opc = 0;

				while (opc != 'a' && opc != 'b') {

					cout << "\n\nDesea hacer otra operacion?";
					cout << "\na) si";
					cout << "\nb) no\n";
					cin >> opc;

				}


				if (opc == 'a') {

					system("cls");

					//igualando id con idf



					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							mcp[idf].matriz[j][k] = m[id].matriz[j][k];
						}

					}



					//haciendo cero id

					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							m[id].matriz[j][k] = 0;
						}

					}
					//haciendo cero idf + 1xd

					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							mcp[idf + 1].matriz[j][k] = 0;
						}

					}

					terminarmatrizcomp();


				}

				else
				{
					id++;
					system("pause>null");
					main();

				}

			}

			else if (anguloy == -90) {


				mcp[idf + 1].matriz[1][1] = 0;
				mcp[idf + 1].matriz[1][2] = 0;
				mcp[idf + 1].matriz[1][3] = -1;
				mcp[idf + 1].matriz[1][4] = 0;
				mcp[idf + 1].matriz[2][1] = 0;
				mcp[idf + 1].matriz[2][2] = 1;
				mcp[idf + 1].matriz[2][3] = 0;
				mcp[idf + 1].matriz[2][4] = 0;
				mcp[idf + 1].matriz[3][1] = 1;
				mcp[idf + 1].matriz[3][2] = 0;
				mcp[idf + 1].matriz[3][3] = 0;
				mcp[idf + 1].matriz[3][4] = 0;
				mcp[idf + 1].matriz[4][1] = 0;
				mcp[idf + 1].matriz[4][2] = 0;
				mcp[idf + 1].matriz[4][3] = 0;
				mcp[idf + 1].matriz[4][4] = 1;

				
				cout << endl;

				for (int i = 1; i <= mcp[idf + 1].filas[contador]; i++) {


					for (int j = 1; j <= mcp[idf + 1].columnas[contador]; j++) {

						cout << "[" << mcp[idf + 1].matriz[i][j] << "]";

					}
					cout << endl;
				}

				cout << "\n\nLa nueva matriz es el numero:\t" << id << endl;


				cout << endl;



				for (int i = 1; i <= m[id].filas[contador]; i++) {

					for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {


						for (int k = 1; k <= mcp[idf].filas[contador]; k++) {

							m[id].matriz[i][j] = m[id].matriz[i][j] + mcp[idf].matriz[i][k] * mcp[idf + 1].matriz[k][j];

						}
					}
				}


				for (int j = 1; j <= m[id].filas[contador]; j++) {

					for (int k = 1; k <= m[id].columnas[contador]; k++) {

						cout << "[" << m[id].matriz[j][k] << "]";
					}

					cout << endl;
				}



				char opc = 0;

				while (opc != 'a' && opc != 'b') {

					cout << "\n\nDesea hacer otra operacion?";
					cout << "\na) si";
					cout << "\nb) no\n";
					cin >> opc;

				}


				if (opc == 'a') {

					system("cls");

					//igualando id con idf



					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							mcp[idf].matriz[j][k] = m[id].matriz[j][k];
						}

					}



					//haciendo cero id

					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							m[id].matriz[j][k] = 0;
						}

					}
					//haciendo cero idf + 1xd

					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							mcp[idf + 1].matriz[j][k] = 0;
						}

					}

					terminarmatrizcomp();


				}

				else
				{
					id++;
					system("pause>null");
					main();

				}

			}

			else if (anguloy == 180 || anguloy == -180) {


				mcp[idf + 1].matriz[1][1] = -1;
				mcp[idf + 1].matriz[1][2] = 0;
				mcp[idf + 1].matriz[1][3] = 0;
				mcp[idf + 1].matriz[1][4] = 0;
				mcp[idf + 1].matriz[2][1] = 0;
				mcp[idf + 1].matriz[2][2] = 1;
				mcp[idf + 1].matriz[2][3] = 0;
				mcp[idf + 1].matriz[2][4] = 0;
				mcp[idf + 1].matriz[3][1] = 0;
				mcp[idf + 1].matriz[3][2] = 0;
				mcp[idf + 1].matriz[3][3] = -1;
				mcp[idf + 1].matriz[3][4] = 0;
				mcp[idf + 1].matriz[4][1] = 0;
				mcp[idf + 1].matriz[4][2] = 0;
				mcp[idf + 1].matriz[4][3] = 0;
				mcp[idf + 1].matriz[4][4] = 1;

			

				cout << endl;

				for (int i = 1; i <= mcp[idf + 1].filas[contador]; i++) {


					for (int j = 1; j <= mcp[idf + 1].columnas[contador]; j++) {

						cout << "[" << mcp[idf + 1].matriz[i][j] << "]";

					}
					cout << endl;
				}

				cout << "\n\nLa nueva matriz es el numero:\t" << id << endl;


				cout << endl;



				for (int i = 1; i <= m[id].filas[contador]; i++) {

					for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {


						for (int k = 1; k <= mcp[idf].filas[contador]; k++) {

							m[id].matriz[i][j] = m[id].matriz[i][j] + mcp[idf].matriz[i][k] * mcp[idf + 1].matriz[k][j];

						}
					}
				}


				for (int j = 1; j <= m[id].filas[contador]; j++) {

					for (int k = 1; k <= m[id].columnas[contador]; k++) {

						cout << "[" << m[id].matriz[j][k] << "]";
					}

					cout << endl;
				}



				char opc = 0;

				while (opc != 'a' && opc != 'b') {

					cout << "\n\nDesea hacer otra operacion?";
					cout << "\na) si";
					cout << "\nb) no\n";
					cin >> opc;

				}


				if (opc == 'a') {

					system("cls");

					//igualando id con idf



					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							mcp[idf].matriz[j][k] = m[id].matriz[j][k];
						}

					}



					//haciendo cero id

					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							m[id].matriz[j][k] = 0;
						}

					}
					//haciendo cero idf + 1xd

					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							mcp[idf + 1].matriz[j][k] = 0;
						}

					}

					terminarmatrizcomp();


				}

				else
				{
					id++;
					system("pause>null");
					main();

				}






















			}

			else if (anguloy == 360 || anguloy == -360) {

				mcp[idf + 1].matriz[1][1] = 1;
				mcp[idf + 1].matriz[1][2] = 0;
				mcp[idf + 1].matriz[1][3] = 0;
				mcp[idf + 1].matriz[1][4] = 0;
				mcp[idf + 1].matriz[2][1] = 0;
				mcp[idf + 1].matriz[2][2] = 1;
				mcp[idf + 1].matriz[2][3] = 0;
				mcp[idf + 1].matriz[2][4] = 0;
				mcp[idf + 1].matriz[3][1] = 0;
				mcp[idf + 1].matriz[3][2] = 0;
				mcp[idf + 1].matriz[3][3] = 1;
				mcp[idf + 1].matriz[3][4] = 0;
				mcp[idf + 1].matriz[4][1] = 0;
				mcp[idf + 1].matriz[4][2] = 0;
				mcp[idf + 1].matriz[4][3] = 0;
				mcp[idf + 1].matriz[4][4] = 1;

				
				cout << endl;

				for (int i = 1; i <= mcp[idf + 1].filas[contador]; i++) {


					for (int j = 1; j <= mcp[idf + 1].columnas[contador]; j++) {

						cout << "[" << mcp[idf + 1].matriz[i][j] << "]";

					}
					cout << endl;
				}

				cout << "\n\nLa nueva matriz es el numero:\t" << id << endl;


				cout << endl;



				for (int i = 1; i <= m[id].filas[contador]; i++) {

					for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {


						for (int k = 1; k <= mcp[idf].filas[contador]; k++) {

							m[id].matriz[i][j] = m[id].matriz[i][j] + mcp[idf].matriz[i][k] * mcp[idf + 1].matriz[k][j];

						}
					}
				}


				for (int j = 1; j <= m[id].filas[contador]; j++) {

					for (int k = 1; k <= m[id].columnas[contador]; k++) {

						cout << "[" << m[id].matriz[j][k] << "]";
					}

					cout << endl;
				}



				char opc = 0;

				while (opc != 'a' && opc != 'b') {

					cout << "\n\nDesea hacer otra operacion?";
					cout << "\na) si";
					cout << "\nb) no\n";
					cin >> opc;

				}


				if (opc == 'a') {

					system("cls");

					//igualando id con idf



					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							mcp[idf].matriz[j][k] = m[id].matriz[j][k];
						}

					}



					//haciendo cero id

					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							m[id].matriz[j][k] = 0;
						}

					}
					//haciendo cero idf + 1xd

					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							mcp[idf + 1].matriz[j][k] = 0;
						}

					}

					terminarmatrizcomp();


				}

				else
				{
					id++;
					system("pause>null");
					main();

				}

			}

			else {

				float senoy = 0;
				float cosenoy = 0;
				float senoynegativo = 0;

				senoy = sin(anguloy*PI / 180);
				cosenoy = cos(anguloy*PI / 180);
				senoynegativo = senoy;
				senoynegativo = senoynegativo * -1;


				float *punterocosenoy;
				float *punterosenoy;
				float *punterosenoyneg;


				punterosenoy = &senoy;
				punterocosenoy = &cosenoy;
				punterosenoyneg = &senoynegativo;


				mcp[idf + 1].matriz[1][1] = *punterocosenoy;
				mcp[idf + 1].matriz[1][2] = 0;
				mcp[idf + 1].matriz[1][3] = *punterosenoy;
				mcp[idf + 1].matriz[1][4] = 0;
				mcp[idf + 1].matriz[2][1] = 0;
				mcp[idf + 1].matriz[2][2] = 1;
				mcp[idf + 1].matriz[2][3] = 0;
				mcp[idf + 1].matriz[2][4] = 0;
				mcp[idf + 1].matriz[3][1] = *punterosenoyneg;;
				mcp[idf + 1].matriz[3][2] = 0;
				mcp[idf + 1].matriz[3][3] = *punterocosenoy;
				mcp[idf + 1].matriz[3][4] = 0;
				mcp[idf + 1].matriz[4][1] = 0;
				mcp[idf + 1].matriz[4][2] = 0;
				mcp[idf + 1].matriz[4][3] = 0;
				mcp[idf + 1].matriz[4][4] = 1;

				
				cout << endl;

				for (int i = 1; i <= mcp[idf + 1].filas[contador]; i++) {


					for (int j = 1; j <= mcp[idf + 1].columnas[contador]; j++) {

						cout << "[" << mcp[idf + 1].matriz[i][j] << "]";

					}
					cout << endl;
				}

				cout << "\n\nLa nueva matriz es el numero:\t" << id << endl;


				cout << endl;



				for (int i = 1; i <= m[id].filas[contador]; i++) {

					for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {


						for (int k = 1; k <= mcp[idf].filas[contador]; k++) {

							m[id].matriz[i][j] = m[id].matriz[i][j] + mcp[idf].matriz[i][k] * mcp[idf + 1].matriz[k][j];

						}
					}
				}


				for (int j = 1; j <= m[id].filas[contador]; j++) {

					for (int k = 1; k <= m[id].columnas[contador]; k++) {

						cout << "[" << m[id].matriz[j][k] << "]";
					}

					cout << endl;
				}



				char opc = 0;

				while (opc != 'a' && opc != 'b') {

					cout << "\n\nDesea hacer otra operacion?";
					cout << "\na) si";
					cout << "\nb) no\n";
					cin >> opc;

				}


				if (opc == 'a') {

					system("cls");

					//igualando id con idf



					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							mcp[idf].matriz[j][k] = m[id].matriz[j][k];
						}

					}



					//haciendo cero id

					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							m[id].matriz[j][k] = 0;
						}

					}
					//haciendo cero idf + 1xd

					for (int j = 1; j <= m[id].filas[contador]; j++) {

						for (int k = 1; k <= m[id].columnas[contador]; k++) {

							mcp[idf + 1].matriz[j][k] = 0;
						}

					}

					terminarmatrizcomp();


				}

				else
				{
					id++;
					system("pause>null");
					main();

				}


			}
		}

		else if (numerito == 'z') {


		anguloz = 0;
		char angulo[99];
		int ciclosupremoz = 0;

		while (ciclosupremoz == 0) {

			system("cls");

			for (int i = 1; i <= mcp[idf].filas[contador]; i++) {


				for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {

					cout << "[" << mcp[idf].matriz[i][j] << "]";

				}
				cout << endl;
			}


			system("cls");
			cout << "\nIngrese porfavor el angulo\t";
			cin >> angulo;
			cout << endl;
			float longi = 0;
			longi = strlen(angulo);

			if (longi == 1 && angulo[0] == '0') {


				anguloz = 0;
				ciclosupremoz = 1;

			}

			else
			{
				anguloz = atof(angulo);


				if (anguloz == 0) {

					cout << "Dato invalido";
					system("pause>null");
					ciclosupremoz = 0;
				}

				else
				{

					ciclosupremoz = 1;

				}

			}

		}



		mcp[idf + 1].columnas[contador] = 4;
		mcp[idf + 1].filas[contador] = 4;




		if (anguloz == 90) {

			mcp[idf + 1].matriz[1][1] = 0;
			mcp[idf + 1].matriz[1][2] = -1;
			mcp[idf + 1].matriz[1][3] = 0;
			mcp[idf + 1].matriz[1][4] = 0;
			mcp[idf + 1].matriz[2][1] = 1;
			mcp[idf + 1].matriz[2][2] = 0;
			mcp[idf + 1].matriz[2][3] = 0;
			mcp[idf + 1].matriz[2][4] = 0;
			mcp[idf + 1].matriz[3][1] = 0;
			mcp[idf + 1].matriz[3][2] = 0;
			mcp[idf + 1].matriz[3][3] = 1;
			mcp[idf + 1].matriz[3][4] = 0;
			mcp[idf + 1].matriz[4][1] = 0;
			mcp[idf + 1].matriz[4][2] = 0;
			mcp[idf + 1].matriz[4][3] = 0;
			mcp[idf + 1].matriz[4][4] = 1;

			

			cout << endl;

			for (int i = 1; i <= mcp[idf + 1].filas[contador]; i++) {


				for (int j = 1; j <= mcp[idf + 1].columnas[contador]; j++) {

					cout << "[" << mcp[idf + 1].matriz[i][j] << "]";

				}
				cout << endl;
			}

			cout << "\n\nLa nueva matriz es el numero:\t" << id << endl;


			cout << endl;



			for (int i = 1; i <= m[id].filas[contador]; i++) {

				for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {


					for (int k = 1; k <= mcp[idf].filas[contador]; k++) {

						m[id].matriz[i][j] = m[id].matriz[i][j] + mcp[idf].matriz[i][k] * mcp[idf + 1].matriz[k][j];

					}
				}
			}


			for (int j = 1; j <= m[id].filas[contador]; j++) {

				for (int k = 1; k <= m[id].columnas[contador]; k++) {

					cout << "[" << m[id].matriz[j][k] << "]";
				}

				cout << endl;
			}



			char opc = 0;

			while (opc != 'a' && opc != 'b') {

				cout << "\n\nDesea hacer otra operacion?";
				cout << "\na) si";
				cout << "\nb) no\n";
				cin >> opc;

			}


			if (opc == 'a') {

				system("cls");

				//igualando id con idf



				for (int j = 1; j <= m[id].filas[contador]; j++) {

					for (int k = 1; k <= m[id].columnas[contador]; k++) {

						mcp[idf].matriz[j][k] = m[id].matriz[j][k];
					}

				}



				//haciendo cero id

				for (int j = 1; j <= m[id].filas[contador]; j++) {

					for (int k = 1; k <= m[id].columnas[contador]; k++) {

						m[id].matriz[j][k] = 0;
					}

				}
				//haciendo cero idf + 1xd

				for (int j = 1; j <= m[id].filas[contador]; j++) {

					for (int k = 1; k <= m[id].columnas[contador]; k++) {

						mcp[idf + 1].matriz[j][k] = 0;
					}

				}

				terminarmatrizcomp();


			}

			else
			{
				id++;
				system("pause>null");
				main();

			}

		}

		else if (anguloz == -90) {

			mcp[idf + 1].matriz[1][1] = 0;
			mcp[idf + 1].matriz[1][2] = 1;
			mcp[idf + 1].matriz[1][3] = 0;
			mcp[idf + 1].matriz[1][4] = 0;
			mcp[idf + 1].matriz[2][1] = -1;
			mcp[idf + 1].matriz[2][2] = 0;
			mcp[idf + 1].matriz[2][3] = 0;
			mcp[idf + 1].matriz[2][4] = 0;
			mcp[idf + 1].matriz[3][1] = 0;
			mcp[idf + 1].matriz[3][2] = 0;
			mcp[idf + 1].matriz[3][3] = 1;
			mcp[idf + 1].matriz[3][4] = 0;
			mcp[idf + 1].matriz[4][1] = 0;
			mcp[idf + 1].matriz[4][2] = 0;
			mcp[idf + 1].matriz[4][3] = 0;
			mcp[idf + 1].matriz[4][4] = 1;

			cout << endl;

			for (int i = 1; i <= mcp[idf + 1].filas[contador]; i++) {


				for (int j = 1; j <= mcp[idf + 1].columnas[contador]; j++) {

					cout << "[" << mcp[idf + 1].matriz[i][j] << "]";

				}
				cout << endl;
			}

			cout << "\n\nLa nueva matriz es el numero:\t" << id << endl;


			cout << endl;



			for (int i = 1; i <= m[id].filas[contador]; i++) {

				for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {


					for (int k = 1; k <= mcp[idf].filas[contador]; k++) {

						m[id].matriz[i][j] = m[id].matriz[i][j] + mcp[idf].matriz[i][k] * mcp[idf + 1].matriz[k][j];

					}
				}
			}


			for (int j = 1; j <= m[id].filas[contador]; j++) {

				for (int k = 1; k <= m[id].columnas[contador]; k++) {

					cout << "[" << m[id].matriz[j][k] << "]";
				}

				cout << endl;
			}



			char opc = 0;

			while (opc != 'a' && opc != 'b') {

				cout << "\n\nDesea hacer otra operacion?";
				cout << "\na) si";
				cout << "\nb) no\n";
				cin >> opc;

			}


			if (opc == 'a') {

				system("cls");

				//igualando id con idf



				for (int j = 1; j <= m[id].filas[contador]; j++) {

					for (int k = 1; k <= m[id].columnas[contador]; k++) {

						mcp[idf].matriz[j][k] = m[id].matriz[j][k];
					}

				}



				//haciendo cero id

				for (int j = 1; j <= m[id].filas[contador]; j++) {

					for (int k = 1; k <= m[id].columnas[contador]; k++) {

						m[id].matriz[j][k] = 0;
					}

				}
				//haciendo cero idf + 1xd

				for (int j = 1; j <= m[id].filas[contador]; j++) {

					for (int k = 1; k <= m[id].columnas[contador]; k++) {

						mcp[idf + 1].matriz[j][k] = 0;
					}

				}

				terminarmatrizcomp();


			}

			else
			{
				id++;
				system("pause>null");
				main();

			}


		}

		else if (anguloz == 180 || anguloz == -180) {

			mcp[idf + 1].matriz[1][1] = -1;
			mcp[idf + 1].matriz[1][2] = 0;
			mcp[idf + 1].matriz[1][3] = 0;
			mcp[idf + 1].matriz[1][4] = 0;
			mcp[idf + 1].matriz[2][1] = 0;
			mcp[idf + 1].matriz[2][2] = -1;
			mcp[idf + 1].matriz[2][3] = 0;
			mcp[idf + 1].matriz[2][4] = 0;
			mcp[idf + 1].matriz[3][1] = 0;
			mcp[idf + 1].matriz[3][2] = 0;
			mcp[idf + 1].matriz[3][3] = 1;
			mcp[idf + 1].matriz[3][4] = 0;
			mcp[idf + 1].matriz[4][1] = 0;
			mcp[idf + 1].matriz[4][2] = 0;
			mcp[idf + 1].matriz[4][3] = 0;
			mcp[idf + 1].matriz[4][4] = 1;

			cout << endl;

			for (int i = 1; i <= mcp[idf + 1].filas[contador]; i++) {


				for (int j = 1; j <= mcp[idf + 1].columnas[contador]; j++) {

					cout << "[" << mcp[idf + 1].matriz[i][j] << "]";

				}
				cout << endl;
			}

			cout << "\n\nLa nueva matriz es el numero:\t" << id << endl;


			cout << endl;



			for (int i = 1; i <= m[id].filas[contador]; i++) {

				for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {


					for (int k = 1; k <= mcp[idf].filas[contador]; k++) {

						m[id].matriz[i][j] = m[id].matriz[i][j] + mcp[idf].matriz[i][k] * mcp[idf + 1].matriz[k][j];

					}
				}
			}


			for (int j = 1; j <= m[id].filas[contador]; j++) {

				for (int k = 1; k <= m[id].columnas[contador]; k++) {

					cout << "[" << m[id].matriz[j][k] << "]";
				}

				cout << endl;
			}



			char opc = 0;

			while (opc != 'a' && opc != 'b') {

				cout << "\n\nDesea hacer otra operacion?";
				cout << "\na) si";
				cout << "\nb) no\n";
				cin >> opc;

			}


			if (opc == 'a') {

				system("cls");

				//igualando id con idf



				for (int j = 1; j <= m[id].filas[contador]; j++) {

					for (int k = 1; k <= m[id].columnas[contador]; k++) {

						mcp[idf].matriz[j][k] = m[id].matriz[j][k];
					}

				}



				//haciendo cero id

				for (int j = 1; j <= m[id].filas[contador]; j++) {

					for (int k = 1; k <= m[id].columnas[contador]; k++) {

						m[id].matriz[j][k] = 0;
					}

				}
				//haciendo cero idf + 1xd

				for (int j = 1; j <= m[id].filas[contador]; j++) {

					for (int k = 1; k <= m[id].columnas[contador]; k++) {

						mcp[idf + 1].matriz[j][k] = 0;
					}

				}

				terminarmatrizcomp();


			}

			else
			{
				id++;
				system("pause>null");
				main();

			}


		}

		else if (anguloz == 360 || anguloz == -360) {

			mcp[idf + 1].matriz[1][1] = 1;
			mcp[idf + 1].matriz[1][2] = 0;
			mcp[idf + 1].matriz[1][3] = 0;
			mcp[idf + 1].matriz[1][4] = 0;
			mcp[idf + 1].matriz[2][1] = 0;
			mcp[idf + 1].matriz[2][2] = 1;
			mcp[idf + 1].matriz[2][3] = 0;
			mcp[idf + 1].matriz[2][4] = 0;
			mcp[idf + 1].matriz[3][1] = 0;
			mcp[idf + 1].matriz[3][2] = 0;
			mcp[idf + 1].matriz[3][3] = 1;
			mcp[idf + 1].matriz[3][4] = 0;
			mcp[idf + 1].matriz[4][1] = 0;
			mcp[idf + 1].matriz[4][2] = 0;
			mcp[idf + 1].matriz[4][3] = 0;
			mcp[idf + 1].matriz[4][4] = 1;

			cout << endl;

			for (int i = 1; i <= mcp[idf + 1].filas[contador]; i++) {


				for (int j = 1; j <= mcp[idf + 1].columnas[contador]; j++) {

					cout << "[" << mcp[idf + 1].matriz[i][j] << "]";

				}
				cout << endl;
			}

			cout << "\n\nLa nueva matriz es el numero:\t" << id << endl;


			cout << endl;



			for (int i = 1; i <= m[id].filas[contador]; i++) {

				for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {


					for (int k = 1; k <= mcp[idf].filas[contador]; k++) {

						m[id].matriz[i][j] = m[id].matriz[i][j] + mcp[idf].matriz[i][k] * mcp[idf + 1].matriz[k][j];

					}
				}
			}


			for (int j = 1; j <= m[id].filas[contador]; j++) {

				for (int k = 1; k <= m[id].columnas[contador]; k++) {

					cout << "[" << m[id].matriz[j][k] << "]";
				}

				cout << endl;
			}



			char opc = 0;

			while (opc != 'a' && opc != 'b') {

				cout << "\n\nDesea hacer otra operacion?";
				cout << "\na) si";
				cout << "\nb) no\n";
				cin >> opc;

			}


			if (opc == 'a') {

				system("cls");

				//igualando id con idf



				for (int j = 1; j <= m[id].filas[contador]; j++) {

					for (int k = 1; k <= m[id].columnas[contador]; k++) {

						mcp[idf].matriz[j][k] = m[id].matriz[j][k];
					}

				}



				//haciendo cero id

				for (int j = 1; j <= m[id].filas[contador]; j++) {

					for (int k = 1; k <= m[id].columnas[contador]; k++) {

						m[id].matriz[j][k] = 0;
					}

				}
				//haciendo cero idf + 1xd

				for (int j = 1; j <= m[id].filas[contador]; j++) {

					for (int k = 1; k <= m[id].columnas[contador]; k++) {

						mcp[idf + 1].matriz[j][k] = 0;
					}

				}

				terminarmatrizcomp();


			}

			else
			{
				id++;
				system("pause>null");
				main();

			}

		}

		else
		{
			float senoz = 0;
			float cosenoz = 0;
			float senoznegativo = 0;

			senoz = sin(anguloz*PI / 180);
			cosenoz = cos(anguloz*PI / 180);

			senoznegativo = senoz;
			senoznegativo = senoznegativo * -1;


			float *punterocosenoz;
			float *punterosenoz;
			float *punterosenozneg;

			punterosenoz = &senoz;
			punterocosenoz = &cosenoz;
			punterosenozneg = &senoznegativo;


			mcp[idf + 1].matriz[1][1] = *punterocosenoz;
			mcp[idf + 1].matriz[1][2] = *punterosenozneg;
			mcp[idf + 1].matriz[1][3] = 0;
			mcp[idf + 1].matriz[1][4] = 0;
			mcp[idf + 1].matriz[2][1] = *punterosenoz;
			mcp[idf + 1].matriz[2][2] = *punterocosenoz;
			mcp[idf + 1].matriz[2][3] = 0;
			mcp[idf + 1].matriz[2][4] = 0;
			mcp[idf + 1].matriz[3][1] = 0;
			mcp[idf + 1].matriz[3][2] = 0;
			mcp[idf + 1].matriz[3][3] = 1;
			mcp[idf + 1].matriz[3][4] = 0;
			mcp[idf + 1].matriz[4][1] = 0;
			mcp[idf + 1].matriz[4][2] = 0;
			mcp[idf + 1].matriz[4][3] = 0;
			mcp[idf + 1].matriz[4][4] = 1;

			cout << endl;

			for (int i = 1; i <= mcp[idf + 1].filas[contador]; i++) {


				for (int j = 1; j <= mcp[idf + 1].columnas[contador]; j++) {

					cout << "[" << mcp[idf + 1].matriz[i][j] << "]";

				}
				cout << endl;
			}

			cout << "\n\nLa nueva matriz es el numero:\t" << id << endl;


			cout << endl;



			for (int i = 1; i <= m[id].filas[contador]; i++) {

				for (int j = 1; j <= mcp[idf].columnas[contador]; j++) {


					for (int k = 1; k <= mcp[idf].filas[contador]; k++) {

						m[id].matriz[i][j] = m[id].matriz[i][j] + mcp[idf].matriz[i][k] * mcp[idf + 1].matriz[k][j];

					}
				}
			}


			for (int j = 1; j <= m[id].filas[contador]; j++) {

				for (int k = 1; k <= m[id].columnas[contador]; k++) {

					cout << "[" << m[id].matriz[j][k] << "]";
				}

				cout << endl;
			}



			char opc = 0;

			while (opc != 'a' && opc != 'b') {

				cout << "\n\nDesea hacer otra operacion?";
				cout << "\na) si";
				cout << "\nb) no\n";
				cin >> opc;

			}


			if (opc == 'a') {

				system("cls");

				//igualando id con idf



				for (int j = 1; j <= m[id].filas[contador]; j++) {

					for (int k = 1; k <= m[id].columnas[contador]; k++) {

						mcp[idf].matriz[j][k] = m[id].matriz[j][k];
					}

				}



				//haciendo cero id

				for (int j = 1; j <= m[id].filas[contador]; j++) {

					for (int k = 1; k <= m[id].columnas[contador]; k++) {

						m[id].matriz[j][k] = 0;
					}

				}
				//haciendo cero idf + 1xd

				for (int j = 1; j <= m[id].filas[contador]; j++) {

					for (int k = 1; k <= m[id].columnas[contador]; k++) {

						mcp[idf + 1].matriz[j][k] = 0;
					}

				}

				terminarmatrizcomp();


			}

			else
			{
				id++;
				system("pause>null");
				main();

			}




		}


		}
	
	}

	else if(numero == 'v') {

	 


	int vx = 0;
	int vy = 0;
	int vz = 0;

	while (vx == 0) {

		system("cls");

		cout << "Digite los vectores en coordenadas (x, y, z)\n";
		cout << "vector en x\t";

		char punto[99];
		int longi = 0;
		cin >> punto;
		longi = strlen(punto);

		if (longi == 1 && punto[0] == '0') {

			vectornumx = 0;

			vx = 1;
		}

		else
		{
			vectornumx = atof(punto);


			if (vectornumx == 0) {

				cout << "Dato invalido";
				system("pause>null");
				vx = 0;
			}

			else
			{
				vx = 1;

			}

		}

	}

	while (vy == 0) {

		system("cls");
		cout << endl << endl;
		cout << "Digite los vectores en coordenadas (x, y, z)\n";
		cout << "vector en y\t";

		char punto[99];
		int longi = 0;
		cin >> punto;
		longi = strlen(punto);

		if (longi == 1 && punto[0] == '0') {

			vectornumy = 0;

			vy = 1;


		}

		else
		{
			vectornumy = atof(punto);


			if (vectornumy == 0) {

				cout << "Dato invalido";
				system("pause>null");
				vx = 0;
			}

			else
			{

				vy = 1;

			}



		}



	}

	while (vz == 0) {

		system("cls");
		cout << endl << endl;
		cout << "Digite los vectores en coordenadas (x, y, z)\n";
		cout << "vector en z\t";

		char punto[99];
		int longi = 0;
		cin >> punto;
		longi = strlen(punto);

		if (longi == 1 && punto[0] == '0') {

			vectornumz = 0;

			vz = 1;

		}

		else
		{
			vectornumz = atof(punto);


			if (vectornumz == 0) {

				cout << "Dato invalido";
				system("pause>null");
				vz = 0;
			}

			else
			{

				vz = 1;

			}

		}

	}



	cout << "\n\n";

	m[idf + 1].filas[contador] = 4;
	m[idf + 1].columnas[contador] = 1;

	m[id].filas[contador] = 4;
	m[id].columnas[contador] = 1;

	mcp[idf + 1].matriz[1][1] = vectornumx;
	mcp[idf + 1].matriz[2][1] = vectornumy;
	mcp[idf + 1].matriz[3][1] = vectornumz;
	mcp[idf + 1].matriz[4][1] = 1;



	for (int i = 1; i <= m[id].filas[contador]; i++) {

		for (int j = 1; j <= mcp[idf + 1].columnas[contador]; j++) {


			for (int k = 1; k <= mcp[idf + 1].filas[contador]; k++) {

				m[id].matriz[i][j] = m[id].matriz[i][j] + mcp[idf].matriz[i][k] * mcp[idf + 1].matriz[k][j];

			}
		}
	}




	for (int j = 1; j <= m[id].filas[contador]; j++) {

		for (int k = 1; k <= m[id].columnas[contador]; k++) {

			cout << "[" << m[id].matriz[j][k] << "]";
		}

		cout << endl;
	}


	cout<<"\n\nSe le enviara a menu general y la matriz se guardo c:";


	for (int j = 1; j <= mcp[idf + 1].filas[contador]; j++) {

		for (int k = 1; k <= mcp[idf + 1].columnas[contador]; k++) {

			mcp[idf + 1].matriz[j][k] = 0;
		}

	}


	for (int j = 1; j <= mcp[idf ].filas[contador]; j++) {

		for (int k = 1; k <= mcp[idf ].columnas[contador]; k++) {

			mcp[idf ].matriz[j][k] = 0;
		}

	}


	system("pause>null");

	id++;

	main();
    }

}




void cuaternio() {

	int ciclotx = 0;
	numx = 0;
	numy = 0;
	numz = 0;
	vectornumx = 0;
	vectornumy = 0;
	vectornumz = 0;
	float anguloreal = 0;


	while (ciclotx == 0) {

		system("cls");

		cout << "Digite los puntos en coordenadas (x, y, z)\n";
		cout << "punto en x\t";

		char punto[99];
		int longi = 0;
		cin >> punto;
		longi = strlen(punto);

		if (longi == 1 && punto[0] == '0') {

			numx = 0;

			ciclotx = 1;


		}

		else
		{
			numx = atof(punto);


			if (numx == 0) {

				cout << "Dato invalido";
				system("pause>null");
				ciclotx = 0;
			}

			else
			{
				ciclotx = 1;

			}

		}

	}

	int cicloty = 0;

	while (cicloty == 0) {

		system("cls");
		cout << endl << endl;
		cout << "Digite los puntos en coordenadas (x, y, z)\n";
		cout << "punto en y\t";

		char punto[99];
		int longi = 0;
		cin >> punto;
		longi = strlen(punto);

		if (longi == 1 && punto[0] == '0') {

			numy = 0;

			cicloty = 1;


		}

		else
		{
			numy = atof(punto);


			if (numy == 0) {

				cout << "Dato invalido";
				system("pause>null");
				ciclotx = 0;
			}

			else
			{

				cicloty = 1;

			}



		}



	}

	int ciclotz = 0;

	while (ciclotz == 0) {

		system("cls");
		cout << endl << endl;
		cout << "Digite los puntos en coordenadas (x, y, z)\n";
		cout << "punto en z\t";

		char punto[99];
		int longi = 0;
		cin >> punto;
		longi = strlen(punto);

		if (longi == 1 && punto[0] == '0') {

			numz = 0;

			ciclotz = 1;

		}

		else
		{
			numz = atof(punto);


			if (numz == 0) {

				cout << "Dato invalido";
				system("pause>null");
				ciclotz = 0;
			}

			else
			{

				ciclotz = 1;

			}



		}



	}

	int vx = 0;




	while (vx == 0) {

		system("cls");

		cout << "Digite los vectores en coordenadas (x, y, z)\n";
		cout << "vector en x\t";

		char punto[99];
		int longi = 0;
		cin >> punto;
		longi = strlen(punto);

		if (longi == 1 && punto[0] == '0') {

			vectornumx = 0;

			vx = 1;
		}

		else
		{
			vectornumx = atof(punto);


			if (vectornumx == 0) {

				cout << "Dato invalido";
				system("pause>null");
				vx = 0;
			}

			else
			{
				vx = 1;

			}

		}

	}

	int vy = 0;

	while (vy == 0) {

		system("cls");
		cout << endl << endl;
		cout << "Digite los vectores en coordenadas (x, y, z)\n";
		cout << "vector en y\t";

		char punto[99];
		int longi = 0;
		cin >> punto;
		longi = strlen(punto);

		if (longi == 1 && punto[0] == '0') {

			vectornumy = 0;

			vy = 1;


		}

		else
		{
			vectornumy = atof(punto);


			if (vectornumy == 0) {

				cout << "Dato invalido";
				system("pause>null");
				vx = 0;
			}

			else
			{

				vy = 1;

			}



		}



	}

	int vz = 0;

	while (vz == 0) {

		system("cls");
		cout << endl << endl;
		cout << "Digite los vectores en coordenadas (x, y, z)\n";
		cout << "vector en z\t";

		char punto[99];
		int longi = 0;
		cin >> punto;
		longi = strlen(punto);

		if (longi == 1 && punto[0] == '0') {

			vectornumz = 0;

			vz = 1;

		}

		else
		{
			vectornumz = atof(punto);


			if (vectornumz == 0) {

				cout << "Dato invalido";
				system("pause>null");
				vz = 0;
			}

			else
			{

				vz = 1;

			}

		}

	}

	int ciclo = 0;

	while (ciclo == 0) {

		char anguloxd[5];

		cout << "\n\nAhora ingrese el angulo\n";
		int longi = 0;
		cin >> anguloxd;

		longi = strlen(anguloxd);

		if (longi == 1 && anguloxd[0] == '0') {

			anguloreal = 0;

			ciclo = 1;

		}

		else
		{
			anguloreal = atof(anguloxd);


			if (anguloreal == 0) {

				cout << "Dato invalido";
				system("pause>null");
				ciclo = 0;
			}

			else
			{

				ciclo = 1;

			}


		}



	}


	float vectorresultante = 0;
	float senoxd = 0;
	float cosenoxd = 0;


	anguloreal = anguloreal / 2;
	

	cout << endl;
	cout << anguloreal;

	if (anguloreal == 90)
	{
		cosenoxd = 0;
		senoxd = 1;
	}

	else if (anguloreal == -90)
	{
		cosenoxd = 0;
		senoxd = -1;
	}

	else if (anguloreal == 180 || anguloreal == -180)
	{
		cosenoxd = -1;
		senoxd = 0;
	}

	else if (anguloreal == 360 || anguloreal == -360)
	{
		cosenoxd = 1;
		senoxd = 0;
	}

	else
	{

		senoxd = sin(anguloreal*PI / 180);
		cosenoxd = cos(anguloreal*PI / 180);
	}


	vectorresultante = (vectornumx * vectornumx + vectornumy * vectornumy + vectornumz * vectornumz);
	
	

	float raiz = 0;
	raiz = sqrt(vectorresultante);

	
	vectornumx = vectornumx / raiz;
	vectornumy = vectornumy / raiz;
	vectornumz = vectornumz / raiz;





	

	vectornumx = vectornumx * senoxd;
	vectornumy = vectornumy * senoxd;
	vectornumz = vectornumz * senoxd;



	c[cuater].filas = 4;
	c[cuater].columnas = 3;






	c[cuater].matriz[1][1] = cosenoxd * numx;  //i
	c[cuater].matriz[1][2] = cosenoxd * numy;  //j
	c[cuater].matriz[1][3] = cosenoxd * numz;  //k

	c[cuater].matriz[2][1] = -1 * (vectornumx * numx); //sin dueñoxd
	c[cuater].matriz[2][2] = vectornumx * numy; //k
	c[cuater].matriz[2][3] = vectornumx * (-1 * numz); //j

	c[cuater].matriz[3][1] = vectornumy * (-1 * numx); //k
	c[cuater].matriz[3][2] = -1 * (vectornumy * numy);  //sin dueño
	c[cuater].matriz[3][3] = vectornumy * numz; //i

	c[cuater].matriz[4][1] = vectornumz * numx; //j
	c[cuater].matriz[4][2] = vectornumz * (-1 * numy); //i
	c[cuater].matriz[4][3] = -1 * (vectornumz * numz); //sin dueño


	cout << endl;
	cout << endl;

	float nada = 0;
	float sumai = 0;
	float sumaj = 0;
	float sumak = 0;


	//sumas de la nada

	nada = c[cuater].matriz[2][1] + c[cuater].matriz[3][2] + c[cuater].matriz[4][3];


	//sumas de la i
	
	sumai = c[cuater].matriz[1][1] + c[cuater].matriz[3][3] + c[cuater].matriz[4][2];


	//sumas de la j

	sumaj = c[cuater].matriz[1][2] + c[cuater].matriz[2][3] + c[cuater].matriz[4][1];


	//sumas de la k

	sumak = c[cuater].matriz[1][3] + c[cuater].matriz[2][2] + c[cuater].matriz[3][1];


	nada;
	sumai;
	sumaj;
	sumak;

	vectornumx = vectornumx * -1;

	vectornumy = vectornumy * -1;

	vectornumz = vectornumz * -1;


	c[cuater + 1].filas = 4;
	c[cuater + 1].columnas = 4;


	c[cuater + 1].matriz[1][1] = nada * cosenoxd;  //i
	c[cuater + 1].matriz[1][2] = nada * vectornumx;  //j
	c[cuater + 1].matriz[1][3] = nada * vectornumy;  //k
	c[cuater + 1].matriz[1][4] = nada * vectornumz;  //k
	c[cuater + 1].matriz[2][1] = sumai * cosenoxd;  //i
	c[cuater + 1].matriz[2][2] = -1 *(sumai * vectornumx);  //j
	c[cuater + 1].matriz[2][3] = sumai * vectornumy;  //k
	c[cuater + 1].matriz[2][4] = sumai * (-1 *vectornumz);  //k
	c[cuater + 1].matriz[3][1] = sumaj * cosenoxd;  //i
	c[cuater + 1].matriz[3][2] = sumaj * (-1 *vectornumx);  //j
	c[cuater + 1].matriz[3][3] = -1 *(sumaj * vectornumy);  //k
	c[cuater + 1].matriz[3][4] = sumaj * vectornumz;  //k
	c[cuater + 1].matriz[4][1] = sumak * cosenoxd;  //i
	c[cuater + 1].matriz[4][2] = sumak * vectornumx;  //j
	c[cuater + 1].matriz[4][3] = sumak *(-1 *vectornumy);  //k
	c[cuater + 1].matriz[4][4] = -1 *(sumak * vectornumz);  //k


	float respuestanul = 0;
	float respuestanulx = 0;
	float respuestanuly = 0;
	float respuestanulz = 0;

	respuestanul =  c[cuater + 1].matriz[1][1] + c[cuater + 1].matriz[2][2] + c[cuater + 1].matriz[3][3] + c[cuater + 1].matriz[4][4];
	respuestanulx = c[cuater + 1].matriz[1][2] + c[cuater + 1].matriz[2][1] + c[cuater + 1].matriz[3][4] + c[cuater + 1].matriz[4][3];
	respuestanuly = c[cuater + 1].matriz[1][3] + c[cuater + 1].matriz[2][4] + c[cuater + 1].matriz[3][1] + c[cuater + 1].matriz[4][2];
	respuestanulz = c[cuater + 1].matriz[1][4] + c[cuater + 1].matriz[2][3] + c[cuater + 1].matriz[3][2] + c[cuater + 1].matriz[4][1];

	cout << "\nLa respuesta se guardara en la seccion de mostrar matrices :D\n\n"<<respuestanulx<<"\t"<<respuestanuly<<"\t"<<respuestanulz;
	
	m[id].filas[contador] = 1;
	m[id].columnas[contador] = 3;


	m[id].matriz[1][1] = respuestanulx;
	m[id].matriz[1][2] = respuestanuly;
	m[id].matriz[1][3] = respuestanulz;

	id++;



	for (int j = 1; j <= 4; j++) {

		for (int k = 1; k <= 3; k++) {

			c[cuater].matriz[j][k] = 0;
		}

	}
	for (int j = 1; j <= 4; j++) {

		for (int k = 1; k <= 3; k++) {

			c[cuater + 1].matriz[j][k] = 0;
		}

	}


	system("pause>null");
	main();


}