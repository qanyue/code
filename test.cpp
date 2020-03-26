
#include <iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string a{"2017"};
    a.insert(3,"0");
    a.insert(3,0,'0');
    cout <<  a << endl;
	return 0;
}
