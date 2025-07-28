#include<iostream>


using namespace std;

int main(){

    int idade;

    cout<<"Digite a sua idade: \n";
    cin>>idade;

    if(idade >60){
        cout<<"Idoso!";
    }else if(idade >= 18){
        cout<<"Adulto!";
    }else if(idade >= 12){
        cout<<"Adolescente!";
    }else if(idade >=0){
        cout<<"Criança!";
    }else{
        cout<<"Idade inválida!";
    }

    return 0;
}