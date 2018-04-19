//-----------------------------------------------------------------------------------------------------
// CS2010											Lab 6							Date:2/16/18
// Paul Moesher																		Class time: 10:30
//
// Purpose:		To show how many cookies each scout sold, the average number of cokkies sold by the scouts, 
//				the number of scouts selling cookies, and the scout that sold the most cookies.
// Input:		The user will have to enter the number of cookies sold by each scout and then hit -1 to end.
// Processing:	The program will collect all of the numbers and add them all up for sum then divide the
//				by the total number of enteries for average.
//	Outout:		The output will show average, total number, total scouts, and highest preforming scout.

#include <iostream>
using namespace std;

int main()
{
	// int declarations
	int sum = 0;
	int count = 0; 
	int scoutnum = 1;
	int Most_boxes_sold;
	int Sales;

	// Double declarations 
	double average; // The average score
	double winner;


	// Get sales from each scout 
	cout << "Enter boxes sold from scout " << scoutnum << " (enter -1 to end): ";
	cin >> Sales;

	Most_boxes_sold = Sales;
	winner = scoutnum;


	while (Sales != -1) {

		if (Sales > Most_boxes_sold) {
			Most_boxes_sold = Sales;
			winner = scoutnum;
		}
			
		scoutnum = scoutnum + 1;
		sum += Sales; // Add current sales up;
		count++;
		average = (double)sum / count;
		cout << "Enter boxes sold from scout " << scoutnum << " (enter -1 to end): ";
		cin >> Sales;
	}

	// Display results

	cout << "Total boxes of cookies sold: " << sum << endl;

	cout << "Number of scouts selling cookies: " << count << endl;

	cout << "Average number of boxes sold by a scout: " << average << endl;

	cout << "The most boxes sold was " << Most_boxes_sold << " by scout " << winner << endl;

	cout << endl;
	system("pause");
	return 0;

}