#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int ar[4];
        ar[0] = a+c;
        ar[1] = a+d;
        ar[2] = b+c;
        ar[3] = b+d;
        int max = ar[0];
        for(int i=0; i<4; i++){
            if(ar[i]>max){
                max = ar[i];
            }
        }
        cout<<max<<endl;
    }
    return 0;
}
