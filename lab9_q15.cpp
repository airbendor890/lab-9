/*15. We want to show string repeatedly by shifting top character of string to right. Refer to a below execution example. Write a below source code, complement the expression hidden by "******" to meet this requirement.*/ 
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
		for(int i=j;i<strlen(str);i++)
		{cout<<str[i];}
	        cout<<endl;
	}
	
	return 0;
}

