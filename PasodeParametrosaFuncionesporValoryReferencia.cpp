#include <iostream>
using namespace std;

void areaTrianguloPV(double base, double altura, double& area){
    area = (base * altura) / 2;
}

void areaTrianguloPR(double& base, double& altura, double& area){
    area = (base * altura) / 2;
}

int main(){
    double base, altura, areaPV, areaPR;
    
    
    cout << "Introduce la base del triangulo: ";
    cin >> base;
    cout << "Introduce la altura del triangulo: ";
    cin >> altura;
    
    
    areaTrianguloPV(base, altura, areaPV);
    cout << "El area del triangulo utilizando paso por valor es: " << areaPV << endl;
    
    
    areaTrianguloPR(base, altura, areaPR);
    cout << "El area del triangulo utilizando paso por referencia es: " << areaPR << endl;
    
    return 0;
}


