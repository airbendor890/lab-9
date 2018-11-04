/*Write a function revString(char*) which reverses the parameter cstring.  The function returns nothing.  You may use C++ string handling functions in <cstring> in the function if you wish.*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{ void revtString(char* ptr);

  char s[10] = "abcde";
  revtString(s);  // call the function
	cout<<s<<endl;
	  return 0;
}

void revtString(char* ptr)
{
  // WRITE YOUR CODE HERE
	for(int i=0;i<=(strlen(ptr)-1)/2;i++)
	{ char temp;
	  //swapping technique	
	  temp=ptr[i];
	  ptr[i]=ptr[strlen(ptr)-1-i];
	  ptr[strlen(ptr)-1-i]=temp;	
	}		
}
