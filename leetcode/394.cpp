#include <bits/stdc++.h>
using namespace std;

// LeetCode 394: Decode String
// Problem link: https://leetcode.com/problems/decode-string/

string operator*(const string &a, int b) {
    string result;
    for (int i = 0; i < b; ++i) {
        result += a;
    }
    return result;
}
class Solution {
public:
    string decodeString(string s) {
        stack<int> n;
        deque<char> c;
        set<char> l={']','[','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        
        for(int i=0;i<s.size();i++){
            if(l.find(s[i])==l.end()){
                int k=s[i]-'0';
                if(s[i+1]!='['){
                    while(s[i+1]!='['){
                        k=(k*10)+(s[i+1]-'0');i++;
                    }
                }
               
                n.push(k);
            }
            if(s[i]=='[' || l.find(s[i])!=l.end() && s[i]!=']'){            
                    c.push_back(s[i]);
            }
            if(s[i]==']'){
                string f="";                
                while(c.back()!='['){
                    f+=c.back();
                    c.pop_back();
                }c.pop_back();
                f=f*n.top();n.pop();
                cout<<f<<endl;              
                for(int i=f.size()-1;i>=0;i--){
                    c.push_back(f[i]);
                }
            }
        }
        string ans="";
        while(!c.empty()){
            ans+=c.front();c.pop_front();
        }
        return ans;
    }
};