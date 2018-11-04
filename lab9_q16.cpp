/*16. Contrary to Exercise 5, here, we want to show string repeatedly by shifting top character of string from right to left. Refer to a below execution example. Write a below source code, complement the expression hidden by "******" to meet this requirement.*/
#include<iostream>
#include<cstring>
using namespace std;

int main()
{	char str[50];
	cout<<"enter the string"<<endl;
	cin.getline(str,sizeof(str));
	char* ptr=str;
	for(int j=0;j<strlen(str);j++ )
        {
		for(int i=0;i<=j;i++)
		{cout<<str[strlen(str)-1-i];}
	        cout<<endl;
	}
	
	return 0;
}

