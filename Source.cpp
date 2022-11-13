#include<iostream>
#include "Source.h"


using namespace std;

int main() {
	int n;

	cin >> n;

	cout << fibFormula(n) << endl;

	cout << fibRecur(n) << endl;
	


}

int fibRecur(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fibRecur(n - 1) + fibRecur(n - 2);
}

int fibFormula(int n) {
	return round((pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2, n)) / sqrt(5));
}