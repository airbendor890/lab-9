//QUESTION 6
/*Write a function countEven(int*, int) which receives an integer array and its size, and returns the number of even numbers in the array.*/
#include<iostream>
using namespace std;

int countEven(int arr[],int size)
{ int counter=0;//counter to count the result
	for(int i=0;i<size;i++)	//lop to traverse whole array
	{	if(arr[i]%2==0)//check  even
		counter++;
		cout<<".";
	}
	return counter;
}

int main()
{int s;
	cout<<"give array size  "; 
	cin>>s;
 	int arr[s];
	cout<<"\n give inetger array elements  "<<endl;
	for(int i=0;i<s;i++)
	cin>>arr[i];
	cout<<"no of even elements = "<<countEven(arr,s);

 return 0;
}
