#include <iostream>
#include <set>
using namespace std;

int main(){
  int num;
  int temp;
  set<int> s;
  cin >> num;
  cin >> temp;
  int max = temp;
  s.insert(temp);
  while(--num){
    cin >> temp;
    if(temp > max){
      s.insert(temp);
      max = temp;
    }
    else{
      auto iterate = s.begin();
      while(iterate != s.end()){
        if(*iterate > temp){
          iterate = s.erase(iterate);
        }
        else{
          ++iterate;
        }
      }
    }
  }
    cout << s.size() << endl;
}
