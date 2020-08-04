// Play Again
// Demonstrates while loops

#include<iostream>
using namespace std;

int main(){
  char again ;
  do{
    cout << "\n**Played an exciting game**";
    cout << "\nDo you want to play again?(Y/n): ";
    cin >> again;
  }while(again == 'y');
  cout << "\nOkay, bye.";
  return 0;
}
