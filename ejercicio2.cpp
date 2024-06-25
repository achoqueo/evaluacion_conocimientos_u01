#include <iostream>
using namespace std; 
int main(){
    int n1, n2, i, c;
    i = 1, 
	c = 0;
    
    cout << "Ingrese el primer valor: ";cin>>n1;
    cout << "Ingrese el segundo valor: ";cin>>n2;

    while (i <= n1 && i <= n2){
        if (n1 % i == 0 && n2 % i == 0)
        {
            c++;
        }
        i++;
    } if(c>1){
    	cout<<"No son pesi."<<endl;
	} else{
		cout<<"Son Pesi."<<endl;
	}
	if(n1%2==0){
		cout<<"El numero "<<n1<<" es par."<<endl;
	} else{
		cout<<"El numero "<<n1<<" es impar."<<endl;
	}
	if(n2%2==0){
		cout<<"El numero "<<n2<<" es par."<<endl;
	} else{
		cout<<"El numero "<<n2<<" es impar."<<endl;
	}
    return 0;
}
