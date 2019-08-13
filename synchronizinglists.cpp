#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

void matching(vector<int> &list1, vector<int> &list2, vector<int> &list3){
  sort(list2.begin(), list2.end());
  sort(list3.begin(), list3.end());
  map<int,int> matches;

  auto temp = list3.begin();
        for(auto i=list2.begin(); i != list2.end(); ++i){
            matches[*i] = *temp;
            ++temp;
        }
        for(auto i = list1.begin(); i != list1.end(); ++i){
            cout << matches[*i] << endl;
        }
        cout << endl;

}




int main() {
  int count; 
  cin >> count;
  while(true){
    if(count == 0){
      break;
    }
  vector <int> list1; //for the map at the end
  vector <int> list2; //copy of list1
  vector <int> list3; 
  for(int i=0; i < count; ++i){
    int data;
    cin.ignore();
    cin >> data;
    list1.push_back(data);
    list2.push_back(data);
  }
  for(int i=0; i < count; ++i){
    int data;
    cin.ignore();
    cin>> data;
    list3.push_back(data);
  }
  matching(list1, list2, list3);
  cin >> count;
  }    
  
  
  return 0;
}
