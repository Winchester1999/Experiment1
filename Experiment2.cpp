#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()

{

	cout <<"Find the Volume of the Object";
	cout << "  " << endl;

	int Mass;
	cout << "Mass:                " << "    " ;
	cin >> Mass;
	cout << "                         ";
	cout << Mass << "       " << " grams" << endl;

	int Density;
	cout << "Density:  " << "               " ;
	cin >> Density;
	cout << "                         ";
	cout << Density << "        " << "grams per cubic centimeters" << endl;

	double Volume;
	cout << fixed << showpoint;
    cout << setprecision(2);
	cout << "Volume:                 " << " " << 0.25*Mass/Density << "      " << " cubic centimeters" << endl;

_getch();
return 0;
}


