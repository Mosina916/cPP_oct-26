
#include<iostream>
using namespace std;
int main (){
	int tr;
	cin>>tr;//7


	for (int rowno=1;rowno<=tr;rowno=rowno+1)
	{

	// space 
	for(int sp=1;sp<=tr-rowno;sp=sp+1){
		cout<<" ";
	}

	// stars
	for(int st=1;st<=2*rowno-1;st=st+1){
		cout<<'*';
	}

	cout<<endl;
}


	

	return 0;
}

