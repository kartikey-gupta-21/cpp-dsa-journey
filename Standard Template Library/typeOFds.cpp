#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
using namespace std;
int main() {
    /*
    vector<int> v;
    v.push_back(1);
    v.push_back(2);v.push_back(3);v.push_back(4);                     //vector
    
    cout<<v[0]; 
    cout<<v.size();
    */
/*
    deque<int> d;
    d.push_back(1);
d.push_back(1);d.push_back(1);d.push_back(1);
    d.push_front(2);                                                  //deque
    cout<<d[0];
    d.pop_front();
    cout<<d[0];
*/

/*
list<int> l;
l.push_back(4); 
l.push_back(1);l.push_back(2);l.push_back(3);                    //list
l.erase(l.begin());

for(int i:l){
    cout<<i;
}
//cannot print specific element directly using [] and at function
*/

//stack
/*
stack<string> s;
s.push("hello");
s.push("world");
s.push("!!");
cout<<s.top();
s.pop();
cout<<s.top();
cout<<s.size();
// cout<<s.front(); error stack does not have front function
s.empty();
*/

//queue FIFO
/*
queue<string> q;
q.push("hello");
q.push("world");
q.push("!!");
cout<<q.size();
cout<<q.front();
cout<<q.back();
q.pop();
cout<<q.front();
q.empty();
*/

//priority_queue
/*
priority_queue<int> maxi;     //by default max heap is created
priority_queue<int,vector<int>,greater<int>> mini;   //for min heap
maxi.push(2);maxi.push(5);maxi.push(7);maxi.push(84);
cout<<"size="<<maxi.size()<<endl;
int n=maxi.size();
for(int i =0;i<n;i++){
    cout<<maxi.top()<<endl;
    maxi.pop();
}
mini.push(2111);mini.push(52);mini.push(7);mini.push(1);
cout<<"size="<<mini.size()<<endl;
n=mini.size();
for(int i =0;i<n;i++){
    cout<<mini.top()<<endl;
    mini.pop();
}
*/

//SET
/*
set<int> s;
s.insert(1);s.insert(2);s.insert(3);s.insert(4);s.insert(5);
cout<<s.size()<<endl;
s.erase(s.begin());
cout<<s.count(5)<<endl;
*/

//MAP
map<int, string> m;
m[1] = "abc";
m.insert({2,"def"});
for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;     //.first is for key and .second is for value    
}
cout<<m.size()<<endl;
cout<<m[1]<<endl;
m.erase(m.begin()); //  or m.erase(1);  //both are same
cout<<m.size()<<endl;


}