#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v[0]=100;
       cout<<v[1]<<endl;
       cout<<v[0];
}
