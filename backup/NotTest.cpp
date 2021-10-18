#include <iostream>

int main(int argc, char const *argv[])
{
	bool x = true;

	if(x)
	{
		std::cout << "X:I'm coming.\n";
	}

	if(!!x)
	{
		std::cout << "!!X:I'm coming too.";
	}


	return 0;
}