/*14. [STRING] Create a string and store your name in it. Use a loop to print string character by character using the normal index method as well as the pointer method. */
#include<iostream>
#include<cstring>
using namespace std;
int main()
{	char name[50]="Haraprasad Dhal g8746rt '.p'[p//'l0";
	//index method printing	
	for(int i=0;i<strlen(name);i++)
	cout<<name[i];
	cout<<endl;
	
	//pointer method printing
	int i=0;	
	while(*(name+i)!='\0')
	{	cout<<*(name+i);
		i++;
	}
	return 0;
}
