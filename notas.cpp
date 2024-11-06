#include <iostream>
using namespace std;

    float notas[10] = {15,2,12,17,12,11,17,18,19,10};
    
int main(){
    float soma=0;

    for (int i=0;i<10;i++) {
        soma +=notas[i];
    }
    cout <<soma<<endl;
    
    cout <<"Média:"<< soma/10<<endl;
}