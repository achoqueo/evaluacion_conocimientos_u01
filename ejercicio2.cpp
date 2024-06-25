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
    return 0;
}
