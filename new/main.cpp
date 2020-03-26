#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	bool person[n] {true};
	//bool person2[n]{};
	for (int i = 0; i < n; ++i)
	{
		person[i] = true;
	}
	int count = n;
	bool status {false};;
	int state{0};
	for (int i = 1;count != 1;)
	{
		if(state >= n)
		{
			state = 0;
		}
		if(i%3==0)
		{
		    if(person[state])
            {
                person[state] = false;
                --count;
                status = true;
		    }
		}

		if(status|| person[state])
        {
            i++;
            state++;
            status = false;
        }
        if(!person[state])
        {
            i--;
        }


	}
	cout << state+1 <<endl;
	return 0;

}
