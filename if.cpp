#include <iostream>
using namespace std;
int main(void){
    
    char c_res = ' ';

    cout << "Digite uma resposta [Y] [N]" << endl;
    cin >> c_res;


    if(c_res == 'y' || c_res == 'Y'){
        cout << "A resposta foi Sim!" << endl;
    }
    else if(c_res == 'n' || c_res == 'N'){
        cout << "A resposta foi nao" << endl;
    }
    else{
        cout << "Resposta Invalida!" << endl;
    }

    return 0;
}