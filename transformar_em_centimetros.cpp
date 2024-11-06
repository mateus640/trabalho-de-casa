#include <iostream>
using namespace std;
    
int main(){
    int num;

    cout <<"indique o numero em metros"<<endl;
    cin >>num;

    cout <<num*100<<endl;

    const float PI=3.14;
    float raio;

    cout<<"indique o valor do raio"<<endl;
    cin >>raio;
    cout <<"O perimetro é:"<< 2*PI*raio <<endl;
    cout <<"A area é:"<<PI*(raio*raio)<<endl;

    float valor;
    float horas;

    cout <<"insira o valor por horas"<<endl;
    cin >>valor;
    cout <<"insira as horas de trabalho"<<endl;
    cin >>horas;
    cout <<"O valor é"<< valor*horas*0.125<<endl;
}