#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int findI(vector<int> &vec , int key){
     for (int i = 0; i < vec.size(); i++){
        if(vec[i]==key){
            return i;
        }
    }
    return 0;
}
int findMI(vector<int> &vec , int key){
    int ans=-1;
     for (int i = 0; i < vec.size(); i++){
        if(vec[i]==key){
            ans = i;
        }
    }
    return ans;
}
void sol(){
    int n; cin>>n;
    vector<int> vec(n);
    for(auto & i:vec) cin>>i; 
    int Min = *min_element(vec.begin(),vec.end());
    int Max = *max_element(vec.begin(),vec.end());
    int mini=findI(vec ,Min );
    int maxi =findMI(vec ,Max );
    
    
    
    if(mini==0 || maxi==(n-1)){
        cout<<Max-Min<<endl;
        return;
    }else if(maxi==0 || mini==(n-1)){
        cout<<max(Max-vec[maxi+1] , Min-vec[mini-1])<<endl;
        return;
    }
    else{
        cout<<max(Max-min(vec[maxi-1],vec[maxi+1],vec[0]),Min-max(vec[mini-1],vec[mini+1],vec[n-1]))<<endl;
    }
    

    
    
    
}
int main(){

    int t; cin>>t;
    while (t--)
    {
        sol();
    }
    
}