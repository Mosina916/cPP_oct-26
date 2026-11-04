
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
	for(int st=1;st<=rowno;st=st+1){
		cout<<'*'<<'\t';
		
	}

	// hash
	for(int hc=1;hc<=rowno-1;hc=hc+1){
		cout<<'#'<<'\t';
		
	}

	cout<<endl;
}


	

	return 0;
}

