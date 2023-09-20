#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];                    //Hiányzik az alulvonas
    std::cout << '1-100 ertekek duplazasa'          //Rossz aposztrof és illetve hianyzik a sor vegen a pontosvesszo
    for (int i = 0;)                                //Hianyzik a leptetes
    {
        b[i] = i * 2;                               //0-tol 99-ig duplaz - 1-tol 100-ig kene
    }
    for (int i = 0; i; i++)                         //Hibas ciklusvezerlo mindig hamisra fut ezert nen lep be a ciklusba
    {
        std::cout << "Ertek:"                       //Ertek kiirasa illetve a pontosvesszo hianyzik
    }    
    std::cout << "Atlag szamitasa: " << std::endl;      
    int atlag;                                      //Nincs kezdoerteke a valtozonak
    for (int i = 0; i < N_ELEMENTS, i++)            //Hianyzik a pontosvesszo
    {
        atlag += b[i]                               //Hianyzik a pontosvesszo
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
