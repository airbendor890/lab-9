/*Write a function contains(char*, char) which returns true if the 1st parameter cstring contains the 2nd parameter char, or false otherwise.
*/
#include<iostream>
#include<cstring>
using namespace std;
bool str_cmp(char* a,char b)
{	int counter=0;//counter to count
	char *z=a;
	
	while(*z!='\0')//lop for countng of occurnce of char in str
	{	if(*z==b)
		counter++;
		z++;
	}
	
	if(counter !=0)
	return true;
	else
	return false;

}


int main()
{ 	cout<<"give a string"<<endl;
	char arr[1000];
	char b;

	cin.getline(arr,sizeof(arr));
	cout<<"give a char for chckng its presenc in given strng";
	cout<<endl;
	cin>>b;
	bool N=str_cmp(arr,b);

	if(N==true)
	cout<<"YES,the given char is inside the string"<<endl;
	else
	cout<<"NO,the given char is not inside the string"<<endl;

	return 0;
}
