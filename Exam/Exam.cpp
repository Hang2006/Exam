#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "輸入一個正整數: ";
	cin >> n;
	
	// 非遞迴計算n!
	int result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
		//result = result * i;
	}
	cout << n << "! = " << result << endl;

	// 遞迴計算n!
	result = factorial(num); 
	cout << "遞迴版本 : " << num << "!= " << result << endl;

}

