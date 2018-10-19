#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("test_data.txt","w",stdout);
	for(int i=0;i<100;i++){
		int a = rand()%10000 + rand()%10000;
		int b = rand()%10000 + rand()%10000;
		cout<<1<<","<<a<<","<<b<<","<<a*a<<","<<b*b<<","<<a*b<<endl;
	}
	return 0;

}
