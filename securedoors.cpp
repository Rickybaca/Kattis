#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int num;
    cin >> num;
    unordered_set<string> set;
    for (int i = 0; i < num; ++i) {
        string pass;
    string name;
        cin >> pass;
    cin >> name;
        if (pass == "entry") {
            if (set.count(name)) {
                cout << name << " entered (ANOMALY)" << endl;
            }
       else {
                cout << name << " entered" << endl;
                set.insert(name);
            }
        } 
    else {
            if (set.count(name)) {
                cout << name << " exited" << endl;
                set.erase(name);
            } 
      else {
                cout << name << " exited (ANOMALY)" << endl;
            }
        }
    }
}
