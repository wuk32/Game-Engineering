// Game Stats 2.0
// Demonstrates arithmetic operations with variables
#include<iostream>
using namespace std;
int main(){
  unsigned int score = 5000;
  cout << "score: " << score << endl;

  // altering the value of a variable
  score = score + 100;
  cout << "score: " << score << endl;

  //combined assignment operator
  score += 100;
  cout << "score: " << score << endl;

  //increment operation
  int lives = 3;
  ++lives;
  cout << "lives: " << lives << endl;
  int lives = 3;
  lives++;
  cout << "lives: " << lives << endl;

  int lives = 3;
  int bonus = ++lives * 3;
  cout << "lives, bonus = " << lives << ", " << bonus << endl;

  int lives = 3;
  int bonus = ++lives * 3;
  cout << "lives, bonus = " << lives << ", " << bonus << endl;

  //integer wrap around
  score = 4294967295;
  cout << "\nscore: " << score << endl;
  ++score;
  cout << "socre: " << score << endl;
  return 0;
}
