
#include<iostream>
#include<cmath>

using namespace std;
int main (){

	int no;
	cin>>no;//23
	int bans=0;

	int i=0;

	while(no>0){
	int rem=no%2;//1%2-->1
	bans=rem*pow(10,i)+bans;//1*10000+111=10111
	i=i+1;
	no=no/2;//2/2=1/2

}
	
	int count=0;

int x=bans;//10111

	while(x!=0){
	int ld=x%10; //1%10;
	if(ld==1){
		count=count+1;//4
	}
	x=x/10;//0
}


cout<<count<<endl;




	


	return 0;
}

