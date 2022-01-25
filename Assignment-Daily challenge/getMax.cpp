#include <iostream>

#include <stack>
#include <sstream>
#include <string>
using namespace std;

int main() {
    
    int n, query_type, query_value, maximum;
    
    string query_line;
    stack<int> s, getMax;
    cout<<"1 x -Push the element x into the stack."<<endl;
    cout<<"2 -Delete the element present at the top of the stack."<<endl;
    cout<<"3 -Print the maximum element in the stack."<<endl;
    cout<<"Enter the number of operations :"<<endl;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        getline(cin, query_line);
        istringstream ss(query_line);
        ss >> query_type >> query_value;
        switch (query_type) {
        case 1:
            s.push(query_value);
            if (getMax.empty() || getMax.top() <= query_value)
                getMax.push(query_value);
            break;
        case 2:
            if (s.top() == getMax.top())
                getMax.pop();
            s.pop();
            break;
        default:
            cout << getMax.top() << endl;
        }
    }
    return 0;
}
