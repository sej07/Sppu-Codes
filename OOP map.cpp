#include <iostream> 
#include <map>
using namespace std; 
int main()
{
	map<string,int>state;
	state.insert(pair<string,int>("Maharastra",102345226));
	state.insert(pair<string,int>("Goa",104566));
	state.insert(pair<string,int>("Punjab",402345));
	state.insert(pair<string,int>("Odisa",2023456));
	state.insert(pair<string,int>("MP",5623456));
	state.insert(pair<string,int>("AP",4323456));
	state.insert(pair<string,int>("HP",2323456));
	string search;
	cout<<"Enter the state:"<<endl;
	cin>>search;
	map<string,int>::iterator i;
	int f=0;
	for(i=state.begin();i!=state.end();i++)
	{
		if(search==i->first)
		{
			f++;
			cout<<"Population of"<<i->first<<"="<<i->second<<endl;
		}
		
	}
	if(f==0)
	cout<<"state not found"<<endl;
	
return 0;
}
