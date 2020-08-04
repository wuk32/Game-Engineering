// Designers Network
// Demonstrates logical operators
#include<iostream>
#include<string>
using namespace std;

int main(){
  string username;
  string password;
  bool success;
  cout << "\tGame Designer's Network\n";
  do{
    cout << "\nUsername: ";
    cin >> username;

    cout << "Password: ";
    cin >> password;

    if (username == "XX" && password == "YY"){
      cout << "\n Hi, " << username;
      success = true;
    }
    else{
      cout << "\nYour login failed.";
      success=false;
    }
  }while(!success);
  return 0;
}
