#include <bits/stdc++.h>
using namespace std;
char maxoccuring(string s){
    vector<int> ar(26,0); // to store the count of each character in the string
    int num;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch>='a' && ch<='z'){
            ar[ch-'a']++;
        }
        else if(ch>='A' && ch<='Z'){
            ar[ch-'A']++;
        }
    }
    auto it = max_element(ar.begin(), ar.end());
    num = distance(ar.begin(), it);
    return (char)(num+'a');

}
int main(){
    string s;
    cin>>s;
    cout<<maxoccuring(s);
    
    
}