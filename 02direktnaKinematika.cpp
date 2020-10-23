#include <iostream>
#include <cmath>

// SKALARNI PRODUKT
float skalarniProdukt(float* x, float* y, int dim = 3)
{
    float result = 0;

    for(int i = 0; i < dim; i++)
    {
        result += x[i]*y[i];
    }

    return result;
}

// VEKTORSKI PRODUKT
void vektorskiProdukt(float* x, float* y, float* result)
{
    result[0] = x[1]*y[2]-x[2]*y[1];
    result[1] = x[2]*y[0]-x[0]*y[2];
    result[2] = x[0]*y[1]-x[1]*y[0];
}

// NORMA

float vektNorma(float* vektor, int dim = 3)
{
    float norma = 0;
    for(int i=0; i < dim; i++)
    {
        norma += vektor[i]*vektor[i];
    }
    return sqrt(norma);
}

int main(void)
{
    float x[3] = {1,2,3};
    float y[3] = {3,2,2};

    // PRIMJER: SKALARNI PRODUKT

    std::cout << "Skalarni produkt vektora x = ["<<x[0]<<","<<x[1]<<","<<x[2]<<"] i y = ["<<y[0]<<","<<y[1]<<","<<y[2]<<"]  je : ";
    std::cout  << skalarniProdukt(x,y) << std::endl;

    // PRIMJER: VEKTORSKI PRODUKT

    float vektProdResult[3];
    vektorskiProdukt(x,y,vektProdResult); 
    std::cout << "Vektorski produkt vektora x = ["<<x[0]<<","<<x[1]<<","<<x[2]<<"] i y = ["<<y[0]<<","<<y[1]<<","<<y[2]<<"]  je : ";
    std::cout  << "["<<vektProdResult[0]<<","<<vektProdResult[1]<<","<<vektProdResult[2]<<"]." << std::endl;

    // PRIMJER: NORMA
    float xNorma = vektNorma(x);
    float yNorma = vektNorma(y);

    std::cout << "Norma vektora x = ["<<x[0]<<","<<x[1]<<","<<x[2]<<"]  je : "<<xNorma<<std::endl;
    std::cout << "Norma vektora y = ["<<y[0]<<","<<y[1]<<","<<y[2]<<"]  je : "<<yNorma<<std::endl; 

    std::cin.get();
    return 0;
}