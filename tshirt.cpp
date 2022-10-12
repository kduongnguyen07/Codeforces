#include <bits/stdc++.h>
using namespace std;
int main () {
long long n;cin>>n;
string a,b;
string v;
for (int i=1;i<=n;i++){
    cin>>a>>b;
    int sizea=a.length()-1;
    int sizeb=b.length()-1;
    char sa=a[sizea];
    char sb=b[sizeb];
    int ssa=a.size();
    int ssb=b.size();
        if (sa>sb){
            v.push_back('<');
        }
        if (sa<sb){
            v.push_back('>');
        }
        if (sa==sb){
            if (a[sizea]=='M') {
                v.push_back('=');
            }
            if (a[sizea]=='S'){
                if (ssa>ssb) {
                    v.push_back('<');
                }
                if (ssa<ssb) {
                   v.push_back('>');
                }
                if (ssa==ssb) {
                    v.push_back('=');
                }
            }
            if (a[sizea]=='L'){
                if (ssa>ssb) {
                    v.push_back('>');
                }
                if (ssa<ssb) {
                    v.push_back('<');
                }
                if (ssa==ssb) {
                    v.push_back('=');
                }
        }

    }

}
    for (int i=0;i<n;i++) {
        cout<<v[i]<<endl;
    }
}
