#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    string frase,morse=" ";
    cout <<"Escriba una frase: \n";
    getline(std::cin,frase);
    cout << "La frase en codigo morse es: \n";

    for(int i=0; i<frase.size();i++)
    {

        if(frase[i]=='a') {morse="._";}
        if(frase[i]=='b') {morse="_...";}
        if(frase[i]=='c') {morse="_._.";}
        if(frase[i]=='d') {morse="_..";}
        if(frase[i]=='e') {morse=".";}
        if(frase[i]=='f') {morse=".._.";}
        if(frase[i]=='g') {morse="__.";}
        if(frase[i]=='h') {morse="....";}
        if(frase[i]=='i') {morse="..";}
        if(frase[i]=='j') {morse=".___";}
        if(frase[i]=='k') {morse="_._";}
        if(frase[i]=='l') {morse="._..";}
        if(frase[i]=='m') {morse="__";}
        if(frase[i]=='n') {morse="_.";}
        if(frase[i]=='o') {morse="---";}
        if(frase[i]=='p') {morse=".__.";}
        if(frase[i]=='q') {morse="__._";}
        if(frase[i]=='r') {morse="._.";}
        if(frase[i]=='s') {morse="...";}
        if(frase[i]=='t') {morse="_";}
        if(frase[i]=='u') {morse=".._";}
        if(frase[i]=='v') {morse="..._";}
        if(frase[i]=='x'){ morse=".__";}
        if(frase[i]=='y') {morse="_.__";}
        if(frase[i]=='z') {morse="__..";}
        if(frase[i]==' ') {morse="/";}
       cout <<morse<<" ";

     }

cout << "\n La frase es: "<<frase<<endl;
    return 0;
}
