#include<iostream>
#include<cstring>
using namespace std;

int main()
{	char str1[50];
	strcpy(str1,"hey there hello!");
	cout<<str1<<endl;

	char str2[50]=" how are you !";
	strcat(str1,str2);
	cout<<str1<<endl;
	
	cout<<strlen(str1)<<endl;
	int a=strcmp(str1,str2);
	
	if(a==0)
	cout<<"strings are equall"<<endl;
	else
	cout<<"strings are unequal"<<endl;
	//shows position of occurence of a first time
	char* ch = strchr(str1, 'a'); 
    	cout << ch - str1 + 1<<endl; 	

	char* p = strstr(str1,str2);
	//checks for first occurence of string str2 in str1
	if(p!=NULL)
	cout<<"yes str2 is contained in str1"<<endl;
	else
	cout<<"no str2 is not in str 1"<<endl;
	
return 0;

}
