//QUESTION 7
/*Write a function that returns a pointer to the maximum value of an array of double's.  If the array is empty, return NULL.

  double* maximum(double* a, int size);
*/
#include<iostream>
using namespace std;

double* maximum(double* a,int k)
{	double *Q;
	int count=0;
	for(int i=0;i<k;i++)
	{
		if(a[i]==NULL)
		count++;
	}
	if(count==k)
	return NULL;
	
	double temp=a[0];
	for(int i=0;i<k;i++)
	{if(a[i]>temp)
		temp=a[i];	
	}

	Q=&temp;
	return Q;	
} 

int main()
{

return 0;
}
