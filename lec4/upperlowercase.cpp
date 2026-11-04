
#include<iostream>
using namespace std;
int main (){

	// A -->upper case

	// j-->lower


	// @--> some other char

	// char ch;
	// cin>>ch;//c


	// if(ch>='A' and ch<='Z'){
	// 	cout<<"UPPERCASE"<<endl;
	// }
	// else if(ch>='a' and ch<='z'){
	// 	cout<<"lowercase"<<endl;
	// }
	// else{
	// 	cout<<"some other char"<<endl;
	// }



// char ch;
// 	cin>>ch;//c


// 	if(ch>=65 and ch<=90){
// 		cout<<"UPPERCASE"<<endl;
// 	}
// 	else if(ch>=97 and ch<=122){
// 		cout<<"lowercase"<<endl;
// 	}
// 	else{
// 		cout<<"some other char"<<endl;
// 	}


	char ch;
	cin>>ch;//c


	if(isupper(ch)){
		cout<<"UPPERCASE"<<endl;
	}
	else if(islower(ch)){
		cout<<"lowercase"<<endl;
	}
	else{
		cout<<"some other char"<<endl;
	}







	return 0;
}

