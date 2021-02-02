#include <iostream>
using namespace std;

int fatorial (int N){
    if (N == 0)
    {
        return 1;
    } else 
        return N*fatorial(N-1);
    
}


int main(){
    int N;
    cout << "Digite um numero \n";
    cin >> N;

    cout << "Fatorial de " << N << " = " << fatorial(N) << "\n";

    return 0;
}