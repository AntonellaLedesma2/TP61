#include <iostream>
using namespace std;
bool Esgrito(string frase);
int main(){
	string f;
	cout<<"ingrese una frase"<<endl;
	getline(cin,f);
	if(Esgrito(f)==false){
		cout<<"escrito"<<endl;
	}
	if(Esgrito(f)==true){
		cout<<"Esgrito"<<endl;
	}
	return 0;
}
bool Esgrito(string frase){
bool flag=false;
	for(int i=0;i<frase.size();i++){
		if(frase[i]=='!'){
			flag=true;	
	}
}
return flag;
}