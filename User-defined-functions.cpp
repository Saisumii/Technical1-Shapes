#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int choice, isToContinue;
	double result = 0.0;
	double side = 4;
	double length = 6;
	double width = 3;
	double base = 5;
	double height = 6;
	double radius = 4;

	do {
		cout << "**************\n"
		<< "Menu\n"
		<< "**************\n"
		<< "1. Area of Square\n"
		<< "2. Area of Rectangle\n"
		<< "3. Area of triangle\n"
		<< "4. Area of circle\n"
		<< "5. Exit\n"
		<< "Enter your choice: ";
		cin >> choice;
		if (choice == 5) {
			cout << "Thank you!";
			exit(5);
		}
		else {

			switch (choice) {
			case 1:
				cout << "--------------\n"
					<< "THE AREA OF SQUARE\n"
					<< "--------------\n";
				cout << "Enter the side of Square: ";
				cin >> side;
				result = pow(side, 2);
				break;
			case 2:
				cout << "--------------\n"
					<< "THE AREA OF RECTANGLE\n"
					<< "--------------\n";
				cout << "Enter the length and width of the rectangle: ";
				cin >> length >> width;
				result = length * width;
				break;
			case 3:
				cout << "--------------\n"
					<< "THE AREA OF TRIANGLE\n"
					<< "--------------\n";
				cout << "Enter the base and width of the height: ";
				cin >> base >> height;
				result = 0.5 * base * height;
				break;
			case 4:
				cout << "--------------\n"
					<< "THE AREA OF CIRCLE\n"
					<< "--------------\n";
				cout << "Enter the radius: ";
				cin >> radius;
				result = 3.14159 * pow(radius, 2);
				break;
			default:
				cout << "Invalid choice.\n";
			}
		}
		cout << "\nThe area is " << result << " sq. units\n";
		cout << "\nPress any number to continue: "
			<< "\nPress 5 to exit." << endl;
		cin >> isToContinue;
	} 
	while (isToContinue != 5);
	cout << "Thank you!";
	return 0;
}
