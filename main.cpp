#include <iostream>
#include <string.h>
using namespace std;

int main() {
  char palavra[50];
  char LO = ' ', LD = ' ';  //Letra Origem e Letra Destino
  char res = 'n';
  string destino = "";
  
  while(1==1){
    destino = "";

    cout << "\nDigite a palavra que quer criptografar: ";
    cin >> palavra;
    cout << "\nDigite a letra para ser criptografada: ";
    cin >> LO;
    cout << "\nDigite a letra que irá substituir: ";
    cin >> LD;

    //Busca letra por letra na palavra, e se for a desejada altera no destino final
    for(int i=0; i < strlen(palavra); i++){
      if(palavra[i] == LO) palavra[i] = LD;
      destino = destino + palavra[i];
    }
    
    cout << "Palavra destino: " << destino;

    //Torna o codigo autoexecutavel enquanto o usuário desejar
    cout << "\n\n\nDeseja outra palavra? S ou N\nRes: ";
    cin >> res;
    if(res != *"S"){
      break;
    }
  }
}