#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("data.txt","w",stdout);
	for(int i=0;i<100;i++){
		int a = rand()%10000;
		int b = rand()%10000;
		cout<<a<<","<<b<<","<<a*a<<","<<b*b<<","<<a*b<<","<<(long long )(a+b)<<endl;
	}
	return 0;

}
