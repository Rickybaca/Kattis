#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void check(vector<string> &names){
  vector <string> temp1 = names;
  vector <string> temp2 = names;
  sort(temp1.begin(), temp1.end());
  sort(temp2.begin(), temp2.end(),greater<string>());
  int count1 = 0;
  int count2 = 0;
  for(int i = 0; i < names.size(); ++i){
    if(names[i] == temp1[i]){
      ++count1;
    }
    if(names[i] == temp2[i]){
      ++count2;
    }
}
  if(count1 == names.size()){
      cout << "INCREASING" << endl;
      return;
    }
  else if(count2 == names.size()){
    cout <<"DECREASING" << endl;
    return;
  } 
  else{
    cout <<"NEITHER" << endl;
  }
}



int main(){
  int num; 
  cin >> num;
  vector <string> names;
  string data;
  for(int i = 0; i < num; ++i){
    cin >> data;
    names.push_back(data);  
  } 
  check(names);
    return 0;
}
