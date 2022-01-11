#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int> v = {2,3,4,5,6};
    // for(int i=0;i<v.size();i++)
    //   cout<<v[i]<<" ";
    //   cout<<endl;
    // vector<int> ::iterator it= v.begin();
    // for(it = v.begin();it!=v.end();++it)
    //    cout<<(*it)<<" ";
    vector<pair<int,int>> v = {{1,2} , {2,3} , {3,4}};
    vector<pair<int,int>> ::iterator it;
    for(it = v.begin();it!=v.end(); ++it)
       cout<<(*it).first<<" "<<(*it).second;
    cout<<endl;   
    // for(it2 = v.begin();it2!=v.end();++it2)
    //    cout<<(it2->first)<<" "<<(it2->second);
    // cout<<endl;

}