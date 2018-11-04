/*13. Create an array of size 10. Use a loop to print array using the normal index method as well as the pointer method.*/
#include<iostream>
using namespace std;
int main()
{	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	//print using array index method
	for(int i=0;i<10;i++)
	cout<<arr[i]<<endl;
	//print using pointer method
	for(int i=0;i<10;i++)
	cout<<*(arr+i)<<endl;

	return 0;

} 
