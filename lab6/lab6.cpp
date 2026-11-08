

#include <iostream>
using namespace std;

void ascSort(int, int, int);
int main()
{
	int num1, num2, num3,ch;

	cout << "enter a three integer numbers :";
	cin >> num1 >> num2 >> num3;
	ascSort(num1, num2, num3);
	do {
		cout << "enter a three integer numbers :";
		cin >> num1 >> num2 >> num3;
		ascSort(num1, num2, num3);
		cout << "\n do you want to enter another numbrs (enter a negitive number to exit):";
		cin >> ch
	} while (ch >= 0);

	return 0;
}
void ascSora(int a, int b, int c);
{
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}

	if (a > c)
	{
		temp = a;
		a = c;
		c = temp;
	}

	if (b > c)
	{
		temp = b;
		b = c;
		c = temp;
	}

	cout << "the number afftr soring is asceding order :";


}













}
	
}