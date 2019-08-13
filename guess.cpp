#include <iostream>
using namespace std;

int main() {
  int guess = 500;
  int min = 1;
  int max = 1000;
  string ans;
  cout << guess << endl;
  while(cin >> ans){
    if(ans == "correct"){
      break;
    }
    if(ans == "lower"){
      max = guess - 1;
      guess = (min + max)/2;
    }
    else if(ans == "higher"){
      min = guess + 1;
      guess = (min+max)/2;
    }
    cout << guess << endl;
  }
}
