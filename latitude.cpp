#include<iostream>
using namespace std;


 double latitude (int degrees, int minutes, int seconds);
 int main(int argc, char const *argv[])
 { 
 	double all{};
 	int degrees{}, minutes{}, seconds{};
 	cout << "Enter a latitude in degrees, minutes, and seconds"<<
 	endl << "First, enter the degrees: ";
 	cin >> degrees;

 	cout << "Next, enter the minutes of arc: ";
 	cin >> minutes;

 	cout << "Finally, enter the seconds of arc: ";
 	cin >> seconds;


 	all=latitude(degrees, minutes ,seconds);

 	cout << degrees << " degrees, " << minutes <<" minutes, "<<
 	seconds<<" seconds = "<< all <<" degrees"<<endl;
 	
 	return 0;
 }
double latitude (int degrees, int minutes, int seconds)
{
	double all{};

	all = degrees+(minutes+seconds/60.0)/60.0;

	return all;
} 
 
 