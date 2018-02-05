#include <string.h>
#include <iostream>
#include <console.h>
#include <simpio.h>

using namespace std; 

int main()
{

	string myName="Akmal";

	while(true)
	{
		cout<<"Enter your name (or 'quit' to exit): ";
		string userName = getLine();
		if(userName=="Abu")
	       	{
			cout<<"Hey Abu!"<<endl;
		}
		else if(userName=="quit")
		{
			cout<<endl;
			break;
		}
		else if(userName !=myName)
		{
			cout<<"Aha! its "<<myName<<endl;
		}
		else
		{
			cout<<"Oh , its you,"<< myName << endl;
		}
	}
	return 0;
}

