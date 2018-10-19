#include<bits/stdc++.h>
using namespace std;
void give(int i,int j,int a[][10])
{
	if(i==10 && j==1)
	{
	cout<<"complete"<<endl;
		for(int l=1;l<10;l++)
		{
			for(int k=1;k<10;k++)
			cout<<a[l][k]<<" ";
			cout<<endl;
		}
	return;
	}
	if(!a[i][j])
	{
		bool v[10];
		for(int l=1;l<10;l++)
		v[l]=true;
		for(int l=1;l<10;l++)
		{
			if(a[i][l])
			{
				v[a[i][l]]=false;
			}
			if(a[l][j])
			{
				v[a[l][j]]=false;
			}
		}
		for(int x=((i-1)/3)*3+1;x<=((i-1)/3)*3+3;x++)
		{
			for(int y=((j-1)/3)*3+1;y<=((j-1)/3)*3+3;y++)
			{
				if(a[x][y])
				{
					v[a[x][y]]=false;
				}
			}	
		}
		int flag=0;
		for(int k=1;k<10;k++)
		{
			if(v[k])
			{
				flag=1;
				break;
			}
		}
		if(!flag)
		return;
		int k,l;
		if(j==9)
		{k=i+1;l=1;}
		else
		{k=i;l=j+1;}
		for(int x=1;x<10;x++)
		{
			if(v[x])
			{
				a[i][j]=x;
				give(k,l,a);
				a[i][j]=0;
				
			}
		}
	}
	else 
	{
		int k,l;
		if(j==9)
		{k=i+1;l=1;}
		else
		{k=i;l=j+1;}
		give(k,l,a);	
	}	
	
}
int main()
{
	int a[10][10];
	for(int i=1;i<10;i++)
	{
		for(int j=1;j<10;j++)
		{
			a[i][j]=0;
		}
	}
	int n;
	cin>>n;
	while(n--)
	{
		int x,y,num;
		cin>>x>>y>>num;
		a[x][y]=num;
	}
	cout<<"yes"<<endl;
	give(1,1,a);
return 0;
}
