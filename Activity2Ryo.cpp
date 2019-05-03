//Create a program that generates the date mm-dd-yyyy
#include <iostream>

using namespace std;

int main()
{
	int mm,dd,yyyy;
	
	cout << "Type the Month number: ";
	cin >> mm;
	cout << "\nType the Day: ";
	cin >> dd;
	cout << "\nType the Year: ";
	cin >> yyyy;
	
	if ( mm == 2 && dd > 29)
	{
		cout << "\n\nFYI the month of February has only 28 days (with the exception of Leap years, which has 29 days in it)" << endl;
		cout << "\nA leap year is a calendar year containing one additional day  added to keep the calendar year synchronized with the astronomical or seasonal year.";
		cout << "\n\nPlease Type again" << endl;
	}
	else if ( mm > 12 || dd > 31 )
	{
		cout << "\n\nIt looks like the Month number or Day you typed exceeded the calendar" << endl;
		cout << "\nPlease Try Again" <<  endl;
	}
	else if ( yyyy < 1582)
	{
		cout << "\n\nThe date is: " << mm << " / " << dd << " / " << yyyy << endl;
		cout << "\nThe Gregorian Calendar wasn't developed in this year. It was created in 1582" << endl;
	}
    else if ( yyyy >= 2030)
	{
		cout << "\n\nThe date is: " << mm << " / " << dd << " / " << yyyy << endl;
		cout << "\nWe can expect that we have already landed on Mars and the other neighboring planets" << endl;
	}
	else if ( yyyy > 1582 || yyyy <= 2030)
	{
		cout << "\nThe date is: " << mm << " / " << dd << " / " << yyyy << endl;
	}
	
	return 0;
}

