#include <iostream>
#include <string>

using namespace std;

int main() {
  string l = "left";
  string r = "right";
  string parada = "p";

  int direita = 0;
  int esquerda = 0;
  string dir;
  cin >> dir;
  
  while (dir != parada ){
    if (dir == r){
      direita += 90;
    } else if (dir == l){
      esquerda += -90;
    }
    cin >> dir;
    
  }

  int rotacao = direita + esquerda;

  cout << "Você girou " << direita << " graus para a direita e " << -esquerda << " para a esquerda.\n";
  cout << "(" << direita << "-" << -esquerda <<" = " << rotacao << ")" << endl;

  if (rotacao > 0){
    cout << rotacao/360 << endl;
  } else {
    cout << -(rotacao/360) << endl;
  }
  
}