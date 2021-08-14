#include <iostream>
using namespace std;

string Sol(){
    int N, div5, div11;
    cin>>N;
    div5 = (N%5==0);
    div11 = (N%11==0);
    if(div5 & div11){
        return "BOTH";
    }
    else if (div5 | div11){
        return "ONE";
    }
    else {
        return "NONE";
    }
    return "NONE";
}
int main(){
    string Result;
    Result = Sol();
    cout<<Result;
    return 0;
}
/**
static const int _ = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();**/
