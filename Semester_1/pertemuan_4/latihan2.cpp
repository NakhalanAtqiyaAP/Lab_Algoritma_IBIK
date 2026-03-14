#include <iostream>
using namespace std;

int main()
{
	int a, b;
	
	cout << "masukan angka A" << endl;
	cin >> a;
	
	cout << "masukan angka B" << endl;
	cin >> b;
	
	if (a > b)
	{
		cout << a-b;
	}
	
	
	else if (a < b)
	{
		cout << b-a;
	}
	
	else
	{
		cout << a + b;
	}
	
	return 0;
	
}
