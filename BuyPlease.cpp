#include <iostream>
using namespace std;

int Sol(){
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int price;
    price = a*x+b*y;
    return price;
}

int main(){
    int result;
    result = Sol();
    cout<<result<<endl;
}


static const int _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
