/*11. Write a program to declare variables of all predefined sizes and declare corresponding pointers (of all predefined types). Print out the sizes of each of variables and pointer variables. (Hint: use sizeof )*/
#include<iostream>
using namespace std;
int main()
{	int a;float b;char c;double d;bool e;
	int *A;float *B;char *C;double *D;bool *E;
	
	cout<<"size of int variable"<<sizeof(a)<<endl;
	cout<<"size of float variable"<<sizeof(b)<<endl;
	cout<<"size of double variable"<<sizeof(d)<<endl;
	cout<<"size of char variable"<<sizeof(c)<<endl;
	cout<<"size of bool variable"<<sizeof(e)<<endl;

	cout<<"size of pointer int variable"<<sizeof(A)<<endl;
	cout<<"size of pointer float variable"<<sizeof(B)<<endl;
	cout<<"size of pointer double variable"<<sizeof(D)<<endl;
	cout<<"size of pointer char variable"<<sizeof(C)<<endl;
	cout<<"size of pointer bool variable"<<sizeof(E)<<endl;
	
	return 0;
}



