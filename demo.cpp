// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
vector<int> arr(vector<int> v){
    vector<int> s = v;
    for(int i=0;i<s.size();i++)
        cout<<s[i];
    cout<<endl;    
    return s;

}
int main()
{
//     int a=19, b=1999;
//     cout<<"\nENTER THE NUBER";
//     cin>>a>>b;
//   cout<<"AKHIL"<<a<<" "<<b<<" "<<endl<<"ADARSH";
     cout<<endl;
     vector<int> v;
     v.push_back(4);
     v.push_back(5);
      cout<<endl;
     vector<int> m;
     m=arr(v);
     for(int i=0;i<m.size();i++)
       cout<<m[i]<<" ";
 
  return 0;
}