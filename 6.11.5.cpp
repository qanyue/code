#include <iostream>

int main(int argc, char const *argv[])
{
	std::cout <<  "Please enter the input : ";
	double  input {};
	
	double tax {};
	while(std::cin >> input)
	{
		if(input < 0)
		{
			break;
		}

		if(input <= 5000)
		{
			break;
		}
		else if( input <=15000)
				{
					tax = (input - 5000) * 0.1;

				}


		else if (input <= 35000)
				{
					tax = 10000 * 0.1 + (input - 15000) * 0.15;
				}

		else 

			{
				tax = 10000 * 0.1 + 20000 * 0.15 + (input - 35000) * 0.2;
			}	

			std::cout << "You need pay " << tax  << std::endl;		
		}




		
	






	return 0;
		
}