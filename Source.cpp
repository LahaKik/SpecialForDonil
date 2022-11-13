#include<iostream>



using namespace std;

int main() {
	int values[10] = { 0 };


	Input(values);

	BubbleSort(values);

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

void BubbleSort(int  values[10])
{
	for (char i = 0; i < 10; i++)
	{
		for (char j = 0; j < 9; j++)
		{
			if (values[j] > values[j + 1]) {
				int buff = values[j];
				values[j] = values[j + 1];
				values[j + 1] = buff;
			}
		}
	}
}
