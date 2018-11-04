/*Write a function myStrLen(char*) which returns the length of the parameter cstring.  Write the function without using the C++ function strlen.
*/

#include<iostream>
#include<cstring>
using namespace std;

//using strlen function/////

int myStrlen(char* a)
{	return strlen(a);

}

//without using c++ funcn strlen//////
int mystrlen(char* a)
{ 	char *b=a;
	int counter=0;//counter to count string
	while(*b!='\0')
	{ counter++;
		b++;
	}
	return counter;
}

//main funcn///////////////
int main()
{ 	cout<<"give a string"<<endl;
	char arr[1000];

	cin.getline(arr,sizeof(arr));
	cout<<"your string is "<<arr<<endl;
	cout<<"of size "<<myStrlen(arr)<<endl;
	cout<<"of size "<<mystrlen(arr)<<endl;

return 0;
}
