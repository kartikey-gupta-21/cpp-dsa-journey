#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    int rno;
    string name;

    void display_details(){
        cout<<rno<<" "<<name;
    }
};
int main(){
    student s1;
    s1.name="Kartikey";
    s1.rno=66;
    s1.display_details();
}