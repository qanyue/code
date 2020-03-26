#include <iostream>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
	
	char ch;

	while ((ch=cin.get()) != '@')
	{
		if(isdigit(ch))
		{
			break;
		}

		else if (isupper(ch))
		{
			ch = tolower(ch);
		}
		else if(islower(ch))
		{
			ch = toupper(ch);
		}
		
		cout << ch;


	}






	return 0;
}