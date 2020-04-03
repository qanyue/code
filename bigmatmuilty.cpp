#include<iostream>
#include<string> 
#include<cstdio>
using namespace std;
wchar_t* multiply(wstring &num1, wstring& num2);
int main()
{
	wstring num1{ '0' }, num2;
	wcin >> num1 >> num2;
	const  wchar_t* num3 = multiply(num1, num2);
	putchar('\n');
	int i = 0;
	if (num3[0] == '0')
		i = 1;
	for (; i < num1.length() + num2.length(); ++i)
	{
		putwchar(num3[i]);
	}
	delete[] num3;
	return 0;
}
wchar_t* multiply(wstring &num1, wstring& num2)
{
	size_t len1{ num1.length() }, len2{ num2.length() };
	bool flags = { len1 >= len2 ? true : false };
	auto len3 = len1 + len2;
	auto num3 = new wchar_t [len3] {};
	if (flags)
	{
		for (size_t j = 0; j < len2; ++j)
		{
			for (size_t i = 0; i < len1; ++i)
			{
				// num3 储存的是真正的num1*num2大小
				num3[i + j + 1] += ((num1.at(i) - '0') * (num2.at(j) - '0'));
				cout << num3[i + j + 1] << " # ";
			}
			putchar('\n');
		}
		for (int i = len3 - 1; i > 0; i--)
		{
			num3[i - 1] += (num3[i])/ 10;
			num3[i] = (num3[i]) % 10+'0';
			wcout << num3[i] << " # ";
		}
		num3[0] += '0';
	}
	return num3;
}


