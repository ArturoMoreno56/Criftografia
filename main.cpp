#include<iostream>
#include <string>

using namespace std;

string cifradoCaesar(string fraseOriginal,int distancia);
int main(){
    string fraseAEncriptar;
    int distancia;

    cout<<"Ingrese la frase que desea encriptar"<<endl;
    getline(cin,fraseAEncriptar);

    cout<<"Ingrese la distancia del cifrado"<<endl;
    cin>>distancia;

    cout<<"La frase encriptada es : "<<cifradoCaesar(fraseAEncriptar,distancia)<<endl;

    return 0;
}


string cifradoCaesar(string fraseOriginal,int distancia){
    string fraseEncriptada;
    string abecedario="abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < fraseOriginal.length(); i++)
    {   
         if(fraseOriginal[i]==' '){
                fraseEncriptada+=' ';
                continue;
            }
        for (int j = 0; j < abecedario.length(); j++)
        {   
            if(fraseOriginal[i]==abecedario[j]){
                int nuevaPos = (j+distancia) % abecedario.length();
                fraseEncriptada+=abecedario[nuevaPos];  
                break;
            }   
        }   
    }
    return fraseEncriptada;
}
