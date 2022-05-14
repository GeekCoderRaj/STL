#include<bits/stdc++.h>
using namespace std;

vector<int> solve (int N, vector<string> command) {
   // Your code goes here
   vector<int>ans;
   vector<pair<char,int>>v;
   string s;
   for(int i=0;i<N;i++){
      s=command[i];
      if(s[0]=='a'){
         string avi="";
         for(int i=9;s[i]!='\0';i++){
            avi+=s[i];
         }
         int av=stoi(avi);
         v.push_back(make_pair(s[7],av));
      }
      else if(s[0]=='{'){
         int x=-1;
         v.push_back(make_pair(s[0],x));
      }
      else if(s[0]=='}'){
         int temp=v.size()-1;
          while(v[temp].first!='{' && temp>=0){
             v.pop_back();
             temp--;
          }
        v.pop_back();
      }
      else{
         char aman=s[6];
         int flag=0;
         for(int i=v.size()-1;i>=0;i--){
            if(aman==v[i].first){
               ans.push_back(v[i].second);
               flag=1;
               break;
            }
         }
         if(flag==0){
            int c=-100;
          ans.push_back(c);
          }
      }
   }
   return ans;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    vector<string> command(N);
    for(int i_command = 0; i_command < N; i_command++)
    {
       getline(cin,command[i_command]);
    }

    vector<int> out_;
    out_ = solve(N, command);
    //cout << out_[0];
    for(int i_out_ = 0; i_out_ < out_.size(); i_out_++)
    {
       if(out_[i_out_]==-100){
            cout <<"undefined"<<"\n";
       }
       else
    	cout <<out_[i_out_]<<"\n";
    }
}