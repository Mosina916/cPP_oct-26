
#include<iostream>
using namespace std;
int main (){
	int tr;
	cin>>tr;//7


	for(int rowno=1;rowno<=tr;rowno=rowno+1){
	
	for(int i=1;i<=tr+1-rowno;i=i+1){
		cout<<'*'<<" ";

	}
	cout<<endl;
}

	

	return 0;
}

