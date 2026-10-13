#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; 
    cin>>t;
    while (t--){
        int x,y;
        cin>>x>>y;
        int chef_floor,chefina_floor;
        chef_floor=((x-1)/10)+1;
        chefina_floor=((y-1)/10)+1;
        cout<<abs(chefina_floor - chef_floor)<<"\n";
    }

}
