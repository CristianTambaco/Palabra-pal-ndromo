#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;



//palindromo(palabra que se lee ambos lados)
void ejercicio3(){
	string palabra; bool palindromo=true;
	
	cout<<"** Palabra palindromo **  "<<endl;	
	cout<<"Ingrese una palabra sin espacios en blanco: ";
	cin>>palabra;
	
		for(int i=0; i<palabra.length(); i++){
			if(palabra[i]!=palabra[palabra.length()-i-1]) palindromo=false;
		}
		
		cout<<"Numero de caracteres: "<<palabra.length()<<endl;
		
			if(palindromo){ cout<<"Es palindromo";}
			else{ cout<<"No es palindromo";}
			
			
}

int main(){

	ejercicio3();
	
	return 0;
}
