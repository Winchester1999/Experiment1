#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main ()

{
	string TicketPrice;
	string NumberOfTicketsSold;

	cout << " " << "Ticket Price" << "                         " << "Number of Tickets Sold";
	cout << " " << endl;
	
	int Box;
	cout << " Box ($250) " << "                                " ;
	cin >> Box;
	cout << "                                   " << " Total Box Sales Amount:      " << Box * 250 << endl;

	int SideLine;
	cout << " SideLine ($100) " << "                           " ;
	cin >> SideLine;
	cout << "                                   " << " Total Sideline Sales Amount: " << SideLine * 100 << endl;

	int Premium;
	cout << " Premium ($50) " << "                             " ;
	cin >> Premium;
	cout << "                                   " << " Total Premium Sales Amount:   " << Premium * 50 << endl;

	int GeneralAdmission;
	cout << " GeneralAdmission ($25) " << "                    " ;
	cin >> GeneralAdmission;
	cout << "                                   " << " Total General Admission Sales Amount:" << GeneralAdmission * 25 << endl;
	
	double TotalSale;
	cout << "                                   " << " Total Sales Amount:" << " " << (Box*250) + (SideLine*100) + (Premium*50) + (GeneralAdmission*25) << endl;

_getch();
	return 0;
}
