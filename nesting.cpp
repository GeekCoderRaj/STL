#include<bits/stdc++.h>
using namespace std;
void printVec(vector<pair<int,int>> &v){
    cout<<"Size "<<v.size()<<endl;//o(1)
    for(int i=0;i<v.size();i++)
      cout<<v[i].first<<"-"<<v[i].second<<" "; 
    cout<<endl;  
}

int main(){
    vector<pair<int,int>> v = {{1,2} , {2,3} , {3,4}};
    vector<pair<int,int>> v1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
      int x,y;
      cin>>x>>y;
      v1.push_back({x,y});
    }  
    printVec(v);
    printVec(v1);
}