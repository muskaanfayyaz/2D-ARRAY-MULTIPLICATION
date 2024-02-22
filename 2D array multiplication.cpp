#include<iostream>
using namespace std;
int main()
{
	int a[3][3]={{0,1,2},{3,4,5},{6,7,8}},
	b[3][3]={{9,10,11},{12,13,14},{15,16,17}},
	c[3][3]={0};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
			}
		}
	}
	for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
			cout<<c[i][j]<<" ";		
	}
cout<<endl;
}
		
}
