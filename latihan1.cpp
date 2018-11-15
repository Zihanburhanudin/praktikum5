#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	int a,max=0;

	do{
		cout<<"Masukan bilangan :" ;
	cin>>a;

	if (a>max)
		max=a;
	}
	while (a!=0);
			cout<< "Nilai terbesarnya adalah :"<<max;
	getch();
}