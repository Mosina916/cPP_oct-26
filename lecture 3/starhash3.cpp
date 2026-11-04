
#include<iostream>
using namespace std;
int main (){


	int tr;
	cin>>tr;//7
	


	for (int rowno=1;rowno<=tr;rowno=rowno+1)
	{
	
	// space 
	for(int sp=1;sp<=tr-rowno;sp=sp+1){
		cout<<" "<<'\t';
	}


	// st
	int no=rowno;
	for(int st=1;st<=rowno;st=st+1){
		cout<<no<<'\t';
		no=no+1;
		
	}

	// hash
	int hno=no-2;
	for(int hc=1;hc<=rowno-1;hc=hc+1){
		cout<<hno<<'\t';
		hno=hno-1;
		
	}

	cout<<endl;
}


	

	return 0;
}

