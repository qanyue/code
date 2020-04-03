#include <iostream>
#include<string>
using namespace std;
void add(string& num1, string& num2);
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string num1, num2;
	cin >> num1 >> num2;
	add(num1, num2);


	return 0;
}
void add(string& num1, string& num2)//使用前判断num1,num2 大小，传入参数num1 需大于 num2
{
	size_t len1{ num1.length() }, len2{ num2.length() };
	bool isBiger = true;
	size_t big{};
	size_t small = len1 >= len2 ? (num1 = '0' + num1, big = ++len1,len2) : 
		(num2 = "0" + num2, isBiger = false, big = ++len2 ,len1);

	if (isBiger)
	{
		for (int i = big  - 1, j = small - 1; j >= 0 && i >= 0; --i, --j)
		{
			num1.at(i) += num2[j] - '0';
			if (num1[i] - '0' >= 10)
			{
				num1[i] -= 10;
				++num1[i - 1];
			}
		}
	}
	else
	{
		for (int i = big - 1 , j = small - 1; j >= 0 && i >= 0; --i, --j)
		{
			num2[i] += num2[i] - '0';
			if (num2[i] - '0' >= 10)
			{
				num2[i] -= 10;
				++num2[i - 1];
			}
		}

	}
	if (isBiger)
	{
		if (num1[0] == '0')
		{
			cout << num1.substr(1) << endl;
		}
		else
		{
			cout << num1 << endl;
		}
	}
	else
	{
		if (num2[0] == '0')
		{
			cout << num2.substr(1) << "\n";
		}
		else
		{
			cout << num2 << "\n";
		}
	}
}

