#include <iostream>
#include <string>
using namespace std;
int main()
{
	string culpable;

	string cartel="iras a casa";
	cout<<"eres culpable?"<<endl;
	cin>>culpable;
	if(culpable=="si")
	{
	cartel="iras a la carcel";
	}

	cout<<cartel<<endl;
	return 0;
		
}
