#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=0;i<=20;i++)
	{
		for(j=0;j<=33;j++)
		{
			k=100-i-j;
			if(i*5+j*3+k*1.0/3==100)
				cout<<"Chickens have"<<i<<" "<<"The chicken mother has"<<j<<" "<<"Chickens have"<<k<<" "<<endl;	
		}
	}
	return 0;
}


