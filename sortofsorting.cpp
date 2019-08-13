#include <iostream>
#include <vector>
using namespace std;


void sorts(vector <string> &vec);
void swap(vector <string> &vec, int x, int y);

void swap(vector <string> &vec, int x, int y){
  auto temp = vec[x];
  vec[x] = vec[y];
  vec[y] = temp;
}

void sorts(vector <string> &vec){
  bool check = false;
  while(!check){
    check = true;
    for(int i=0; i<vec.size()-1; ++i){
      if(vec[i][0]>vec[i+1][0]){
        swap(vec, i, i+1);
        check = false;
      }
      else if(vec[i][0] == vec[i+1][0] && vec[i][1] > vec[i+1][1]){
        swap(vec, i, i+1);
        check = false;
      }
    }
  }
}


int main() {
  int num;
  string name;
  while(cin >> num){
    if (num == 0){
      return 0;
    }
    
    vector<string> vec;
    for(int i=0; i < num; ++i){
      cin >> name;
      vec.push_back(name);
    }

    sorts(vec);
    for(int i=0; i<vec.size(); ++i){
      cout << vec[i] << endl;
    }
    cout << endl;
  }
}
