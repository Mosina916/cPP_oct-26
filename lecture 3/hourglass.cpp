
#include<iostream>
using namespace std;
int main (){


	int tr;
	cin>>tr;//7

		for (int rowno=1;rowno<=(tr+1)/2;rowno=rowno+1)
	{

	// space 
	for(int sp=1;sp<=rowno-1;sp=sp+1){
		cout<<" "<<'\t';
	}


	// st
	int no=(tr+1)/2;
	for(int st=1;st<=((tr+3)/2)-rowno;st=st+1){
		cout<<no<<'\t';
		no=no-1;
		
		
	}

	// hash

	int hno=2;
	
	for(int hc=1;hc<=((tr+1)/2)-rowno;hc=hc+1){
		cout<<hno<<'\t';
		hno=hno+1;
		
		
	}

	cout<<endl;
}



// /lower part



		for (int rowno=1;rowno<=(tr-1)/2;rowno=rowno+1)
	{

// space 
	for(int sp=1;sp<=((tr-1)/2)-rowno;sp=sp+1){
		cout<<" "<<'\t';
	}


	// st
	int noo=rowno+1;
	for(int st=1;st<=rowno+1;st=st+1){
		cout<<noo<<'\t';
		noo=noo-1;
		
		
	}

	// hash
	int hnoo=2;
	
	for(int hc=1;hc<=rowno;hc=hc+1){
		cout<<hnoo<<'\t';
		hnoo=hnoo+1;
		
		
	}

	cout<<endl;

}







	


	

	

	return 0;
}

