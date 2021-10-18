#include <iostream>
#include <cmath>
using namespace std;


int main(int argc, char const *argv[])
{
	double m_Cleo {0};  
	double m_Daphne {0};

	int count {0};
	while (m_Daphne <= m_Cleo)
	{
		count ++;
		m_Cleo  = 10 * count;
		m_Daphne = 100 * pow(1.05,count) - 100;
		cout << m_Daphne << endl;
	}

	cout << count <<" years \n";

	return 0;
}