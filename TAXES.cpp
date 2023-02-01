#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a;
	    cin>>a;
	    if(a>100){
	        cout<<a-10<<endl;
	    }
	    else{
	        cout<<a<<endl;
	    }
	}
	return 0;
}
