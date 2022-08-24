#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--)
	{
	long long int n;
    cin>>n;
	long long int div = n/2;
	if(n%2==0){
	    cout<<div*div*2<<endl;
	}else{
        cout<<div*(div+1)*2<<endl;
    }
	
	}
	return 0;
}
