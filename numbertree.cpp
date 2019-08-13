#include <iostream>
#include <string>
using namespace std;

int main() {
  int height;
  int level = 1;
  string direction;
  cin >> height;
  cin >> direction;
  unsigned int num = (1<<(height+1));
  for(int i = 0; i < direction.size(); ++i){
    if(direction[i] == 'L'){
      level = 2*level;
    }
    else{
      level = 2*level + 1;
    }
  }
  cout << num - level << endl;
}
