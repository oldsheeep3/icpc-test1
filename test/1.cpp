#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(){
    int n,x,y;
    cin >> n;
    x = 1;
    y = 3;
    string ans = 0;

    int a[7] = {1,3,5,7,8,10,12};
    int b[4] = {4,6,9,11};

    if(std::find(a,a+7,x) != a+7&&std::find(a,a+7,y) != a+7){
        printf("Yes");
    }else if(std::find(b,b+7,x) != b+7&&std::find(b,b+7,y) != b+7){
        printf("Yes");
    }else{
        printf("No");
    }

    cout << ans << endl;
    return 0;
}