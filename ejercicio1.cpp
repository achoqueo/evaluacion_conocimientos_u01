#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;
    float r;

    cout << "Ingrese el primer numero: ";cin>>num1;
    cout << "Ingrese el segundo numero: ";cin>>num2;
    cout << "Ingrese un operador: "; cin >> op;

    switch(op) {
        case '+':
        	r=num1+num2;
            cout <<"La suma es "<<r<<endl;
            system("pause");
            break;
        case '-':
        	r=num1-num2;
            cout <<"La resta es "<<r<<endl;
            system("pause");
            break;
        case '*':
        	r=num1*num2;
            cout <<"La multiplicacion es "<<r<<endl;
            system("pause");
            break;
        case '/':
            if(op!=0){
            	r=num1/num2;
            	cout<<"La division es "<<r<<endl;
			}else {
				cout<<"La división no existe."<<endl;
			}
        default:
        	cout<<"Error, opcion invalida."<<endl;
        	system("pause");
        	break;
    }

    return 0;
}

