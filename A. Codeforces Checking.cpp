#include <iostream>

using namespace std;

int main()
{
    //Converting a small letter to a capital letter using ASCII:

	char x;
	cout<<"Enter small character to make it capital character: \n";
	cin>>x;
	if(x >='A' && x <='Z')
	  cout<<"character is Capital"<<endl;
    else
	  cout<<"Capital character: "<<char(int(x)-32)<<endl;
}
