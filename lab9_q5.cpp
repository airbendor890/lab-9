//QUESTION 5
//Write a piece of code which prints the characters in a 
//cstring in a reverse order.
//char s[10] = "abcde";
//char* cptr;
// WRITE YOUR CODE HERE

#include<iostream>
#include<cstring>
using namespace std;
int main()
{ 	char s[10] = "abcde";
	char* cptr;
	cout<<strlen(s)<<endl;
	//loop for cptr to point to elements in reverse order
	for(int i=strlen(s)-1;i>=0;i--)
	{	cptr = s+i;
		cout<<*cptr;
	}

}

