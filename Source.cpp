#include<iostream>
#include "Source.h"


using namespace std;

int main() {
	int values[10] = { 0 };
	Input(values);

	IncertionSort(values);

	Print(values);

}

void Input(int  values[10])
{
	for (char i = 0; i < 10; i++)
	{
		cin >> values[i];
	}
}

void Print(int  values[10])
{
	for (char i = 0; i < 10; i++)
	{
		cout << values[i] << ' ';
	}
}

void IncertionSort(int  values[10])
{
	for (char i = 1; i < 10; i++)
	{
		if (values[i] < values[i - 1]) {
			char j = i;
			while (values[j] < values[j - 1] && j != 0) {
				int buff = values[j];
				values[j] = values[j - 1];
				values[j - 1] = buff;
				j--;
			}
		}
	}
}