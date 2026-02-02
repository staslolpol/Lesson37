#include "logic.h"

int main() {

	int x1, x2;
	int y1, y2;

	cout << "Input first point(x1, y1): " << endl;
	cin >> x1 >> y1;

	cout << "Input first point(x2, y2): " << endl;
	cin >> x2 >> y2;

	
				   
	string exam = to_string(calculet_colors(x1, y1)) == to_string(calculet_colors(x2, y2)) ? "True" : "False";

	cout << exam;

	return 0;
}