// Score Rater2
// Demonstrates if else-if else suite
#include<iostream>
using namespace std;
int main(){
  int score;
  cin >> score;
  if (score >= 1000){
     cout << "You scored 500 or more. Impressive.\n\n";
  }
  else if (score >= 500){
    cout << "You scored 500 or more. Nice.\n\n";
  }
  else if (score >= 250){
    cout << "You scored 250 or more. Decent.\n\n";
  }
  else{
    cout << "You scored less than 250. Nothing to brag about.\n\n";
  }
  return 0;
}
