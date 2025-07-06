#include <iostream>
using namespace std;

namespace primeiro{
    void imprimir(){
        
        string imprimir1 = "Hello World! [NAMESPACE = primeiro]";
        std::cout << imprimir1 << std::endl;

    }

}

namespace segundo{
    void imprimir(){
        string imprimir2 = "Hello Japan! [NAMESPACE = segundo]";
        std::cout << imprimir2 << std::endl;
    }
}

int main(void){

    //NAMESPACE std;
    std::cout << "Hello Tokyo!!! [NAMESPACE = STD]" << std::endl;

    //NAMESPACE primeiro
    primeiro::imprimir();

    //NAMESPACE segundo
    segundo::imprimir();

    return 0;



}

