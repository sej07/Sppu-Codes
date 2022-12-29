#include <iostream> 
#include <algorithm>
#include<vector> 
using namespace std; 

int main() 
{ 
int a[]={ 12, 56, 33, 2, 10, 5, 7 };
vector<int> v(a,a+7); 
int myints[] = { 10, 20, 30, 40 };
  int * p;
  int choice;
  cout<<"enter your choice";
  cout<<"\nfor sorting press 1";
  cout<<"\nfor searching press 2";
  cin>>choice;
  switch(choice)
  {
  case 1:
	sort(v.begin(), v.end()); 
	cout << "Sorted vector is \n"; 
	for (int i=0; i<v.size(); i++) 
    cout << v[i] << " ";
    break;
    
  case 2: 
  	p = std::find (myints, myints+4, 30);
  	if (p != myints+4)
    	std::cout << "Element found in myints: " << *p << '\n';
  	else
    	std::cout << "Element not found in myints\n";

  // using std::find with vector and iterator:
  	std::vector<int> myvector (myints,myints+4);
  	std::vector<int>::iterator it;

  	it = find (myvector.begin(), myvector.end(), 30);
  	if (it != myvector.end())
    	std::cout << "Element found in myvector: " << *it << '\n';
  	else
    	std::cout << "Element not found in myvector\n";
	break;
	}
return 0;
}
