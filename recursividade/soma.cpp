#include <iostream>
using namespace std;

int soma (int N){
    if (N == 0)
    {   
        return 0;
    } else 
        return N+soma(N-1);
    
}


int main(){
    int N;
    cout << "Digite um numero \n";
    cin >> N;
    cout << "Soma: " << soma(N);

    return 0;
}