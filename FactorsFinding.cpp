#include <iostream>
#include <vector>
using namespace std;

void Sol(){
    int numbers=0,N;
    cin>>N;
    std::vector<int> result;
    /* For printing in increasing order
    O(n) time complexity*/
    for(int i=1;i<=N;i++){
        if(N%i==0){
            result.push_back(i);
            numbers++;
        }
    }

    /* Any order
    O(sqrt(N)) time complexity
    for(int i=1;i<=sqrt(N);i++){
        if(N%i==0){
            if(N/i!=i){
                result.push_back(i);
                result.push_back(N/i);
                numbers++;
            }
            else{
                result.push_back(i);
                numbers++;
            }
        }
    }*/
    cout<<numbers<<endl;
    cout<<result.front();
    for(int i=1;i<result.size();i++){
        cout<<" "<<result.at(i);
    }
    return;
}

int main(){
    Sol();
    return 0;
}


static const int _ = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
