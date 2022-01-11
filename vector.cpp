#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
    cout<<"Size "<<v.size()<<endl;//o(1)
    for(int i=0;i<v.size();i++)
      cout<<v[i]<<" "; 
    cout<<endl;  
}
int main(){
    vector<int> v;
    int n;
    cout<<"ENTER:: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);//o(1)
    }
    printVec(v);
    v.pop_back();//O(1);
    printVec(v);
    vector<int> v2 = v; //O(n)
    printVec(v2);
     vector<int> v1(10,3);
    printVec(v1);
    return 0;
}