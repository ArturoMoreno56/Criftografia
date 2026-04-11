#include<iostream>
#include <string>
#include <cctype>  
using namespace std;

string cifradoCaesar(string fraseOriginal,int distancia);
string fraseNormalizada(string fraseOriginal);
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

string fraseNormalizada(string fraseOriginal){

    string fraseFin;

    for (int i = 0; i < fraseOriginal.length(); i++)
    {
        fraseFin+=tolower(fraseOriginal[i]);
    }
    return fraseFin;
}

string cifradoCaesar(string fraseOriginal,int distancia){

    fraseOriginal=fraseNormalizada(fraseOriginal);
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
