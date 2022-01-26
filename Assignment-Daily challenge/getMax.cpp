#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
 
    stack<int> max;
    stack<int> s;
    max.push(0);
    int n;
    cout<<"1 x -Push the element x into the stack."<<endl;
    cout<<"2 -Delete the element present at the top of the stack."<<endl;
    cout<<"3 -Print the maximum element in the stack."<<endl;
    cout<<"Enter the number of operations :"<<endl;
    cin>>n;
    while (n--){
        int a;
        cin>>a;
        if(a==1){
            cin>>a;
            if(a>=max.top()) max.push(a);
            s.push(a);
        }
        else if(a==2){
            if(s.top()==max.top()) max.pop();
            s.pop();
        } 
        else if(a==3) cout<<max.top()<<endl;
    }
    return 0;
}
