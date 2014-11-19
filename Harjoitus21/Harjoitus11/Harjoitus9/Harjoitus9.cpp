/*Sami Liimatainen
IIO14S1
Harjoitus 21
Versio 1
18.11.2014

Muunna harjoitus 11 niin, etta k‰yt‰t seuraavia aliohjelmia:

int KysyValinta(void);

-> KysyValinta paluttaa k‰ytt‰j‰n antaman valintanumeron (0-6)

double Summa(float luku1, int luku2);

-> Summa laskee yhteen annetut tiedot ja palauttaa summan p‰‰ohjelmaan
*/


#include <iostream> 
using namespace std;
int KysyValinta();
double Summa(float, int);

int main()
{
	int luku1;
	int luku2;
	int summa = 0, erotus = 0, tulo = 0, osamaara = 0, jaannos = 0;
	int looppi = 0;
	int uusiks = 0;

	while (looppi == 0)
	{
		if (uusiks == 0)
		{
			cout << "Anna ensimm‰inen luku ";
			cin >> luku1;

			cout << "Anna toinen luku ";
			cin >> luku2;
			uusiks++;
		}

		int valinta = KysyValinta();
		switch (valinta)
		{
		case 0:	cout << "\nValittu Lopetus\n";
			looppi++;
			break;
		case 1: cout << "\nSumma on " << Summa(luku1,luku2) << endl;
			break;
		case 2:	cout << "\nErotus on " << (erotus = luku1 - luku2) << endl;
			break;
		case 3:	cout << "\nTulo on " << (tulo = luku1 * luku2) << endl;
			break;
		case 4:	cout << "\nOsamaara on " << (osamaara = luku1 / luku2) << endl;
			break;
		case 5:	cout << "\nJakojaannos on " << (jaannos = luku1 % luku2) << endl;
			break;
		case 6:	cout << "\n" <<uusiks-- << endl;
			break;
		default: cout << "\nValitse luku 0-6";
			break;
		}
	}
	return 0;
}

int KysyValinta()
{
	int valinta;
	cout << "\n\nValikko";
	cout << "\n0 Lopetus ";
	cout << "\n1 Summa ";
	cout << "\n2 Erotus ";
	cout << "\n3 Tulo ";
	cout << "\n4 Osamaara ";
	cout << "\n5 Jakojaannos ";
	cout << "\n6 Syota uudet luvut laskemista varten \n";
	cin >> ws >> valinta;
	return valinta;
}

double Summa(float luku, int toinenluku)
{
	int summa;
	summa = luku + toinenluku;
	return summa;
}