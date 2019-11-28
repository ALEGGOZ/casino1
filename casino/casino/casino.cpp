#include <string>
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	string nombre;
	float saldoincial,saldoactual;
	int seguirapostando, apuesta,aleatorio;
	srand(time(NULL));
	cout << "bienvenido a mi casino" << endl;
	cout << "introducir tu nombre: ";
	cin >> nombre;
	cout << "cual es tu saldo: ";
	cin >> saldoactual;
	do
	{
		cout << "cuanto vas a apostar: ";
		cin >> apuesta;
		if (saldoactual >= apuesta)
		{
			aleatorio = 1 + rand() % (3 - 1);
			if (aleatorio > 1)
			{
				cout << "ganaste felicidades: ";
				saldoactual = saldoactual + apuesta;
				cout << "tu saldo actual es:" << saldoactual << endl;
				cout << "quieres seguir apostando: 1=si 2 = no: ";
				cin >> seguirapostando;
			}
			else
			{
				cout << "has perdido tu apuesta";
				saldoactual = saldoactual - apuesta;
				cout << "tu saldo actual es:" << saldoactual << endl;
				cout << "quieres seguir apostando 1=si 2 = no: ";
				cin >> seguirapostando;
			}
		}
		else
		{
			cout << "Saldo insuficiente";
			seguirapostando = 2;
			break;
		}
		
	} while (seguirapostando = 2);
}

