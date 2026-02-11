#include <iostream>

int Add (int first, int second) {
	return (first + second);
}

int main() {
	using std::cout;
	using std::cin;

	cout << "Start\n";
	int a, b, c;
	cout << "Enter 2 numbers: ";
	cin >> a;
	cin >> b;
	cout << "Adding\n";
	c=Add(a,b);
	cout << "c was set to " << c;
	cout << "\nExiting...\n\n";
	return 0;
}
