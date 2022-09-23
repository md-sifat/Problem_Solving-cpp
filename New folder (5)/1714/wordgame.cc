#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void sol(){
    int n; cin>>n;
    vector<string> vec1,vec2,vec3;
    for (int i = 0; i < n; i++){
        string name; cin>>name;
        vec1.push_back(name);
    }
    for (int i = 0; i < n; i++){
        string name; cin>>name;
        vec2.push_back(name);
    }
    for (int i = 0; i < n; i++){
        string name; cin>>name;
        vec3.push_back(name);
    }
    int ans1=0,ans2=0,ans3=0;
    int cntr=0;
    for (int i = 0; i < n; i++)
    {
        if(count(vec2.begin(), vec2.end(), vec1[i])){
            cntr++;
        }
        if(count(vec3.begin(), vec3.end(), vec1[i])){
            cntr++;
        }
        if(cntr==0){ ans1+=3;}else if(cntr==1) {ans1+=1; }else ans1+=0;
        
        cntr=0;
    }
        cntr=0;
    for (int i = 0; i < n; i++)
    {
        if(count(vec1.begin(), vec1.end(), vec2[i])){
            cntr++;
        }
        if(count(vec3.begin(), vec3.end(), vec2[i])){
            cntr++;
        }
        if(cntr==0) {ans2+=3;}else if(cntr==1) {ans2+=1; }else ans2+=0;
        
    cntr=0;
    }
    cntr=0;
    for (int i = 0; i < n; i++)
    {
        if(count(vec2.begin(), vec2.end(), vec3[i])){
            cntr++;
        }
        if(count(vec1.begin(), vec1.end(), vec3[i])){
            cntr++;
        }
        if(cntr==0) {ans3+=3;}else if(cntr==1) {ans3+=1;} else ans3+=0;
        
    cntr=0;
    }
    cntr=0;
    cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
    
    
}

int main(){
    int t; cin>>t;
    while (t--){
        sol();    
    }
    
}