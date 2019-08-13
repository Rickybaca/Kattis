#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void swap(vector <string> &vec, int i, int j){
  string temp = vec[i];
  vec[i] = vec[j];
  vec[j]=temp;
}

void bSort(vector <string> &vec){
  bool done = false;
  for(int i = 0; i < vec.size() - 1; ++i){
    done = true;
    for(int j = 0; j < vec.size()-i-1; ++j){
      if(vec[j] > vec[j+1]){
        swap(vec, j, j+1);
        done = false;
      }
    }
    if(done){
      return;
    }
  }
}


int main() {
  unordered_map<string, vector<string>> orders;
  vector<string> vec;
  int n;
  string s = "";
  string name = "";
  string serve = "";
  while(true){
    cin >> n;
    if(n == 0){
      return 0;
    }
    cin.ignore();
    for(int i = 0; i < n; ++i){
      getline(cin, s);
      int count = 0;
      name = "";
      for(int j = 0; j < s.size(); ++j){
        if(count == 0){
          if(s[j] == ' '){
            ++count;
            continue;
          }
          else{
            name += s[j];
          }
        }
        else{
          if(s[j] == ' ' || j == s.size()-1){
            if(j == s.size() - 1){
              serve += s[j];
            }
            if(orders.count(serve)){
              orders[serve].push_back(name);
              serve = "";
              continue;
            }
            else{
              auto v = vector<string> (1) = {name};
              vec.push_back(serve);
              orders.insert({serve, v});
              serve = "";
              continue;
            }
          }
          else{
            serve += s[j];
          }
        }
      }
    }
    bSort(vec);
    for(int x = 0; x <vec.size(); ++x){
      for(auto order : orders){
        if(order.first == vec[x]){
          bSort(order.second);
          cout << order.first << " ";
          for(int y = 0; y < order.second.size(); ++y){
            cout << " " << order.second[y];
          }
          cout << endl;
        }
      }
    }
    vec.clear();
    cout << endl;
    orders.clear();
  }
}
