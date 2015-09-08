#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
struct pos{
int x;
int y;
};
int main() {
	int t;
	cin >> t;
	while(t!=0){
        int n,x,y,v;
        cin >> n;
        struct pos arr[n*n+1];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                    cin >> v;
                    arr[v].x=i;
                    arr[v].y=j;
            }
        }
        int ans=0;
        for(int i=2;i<=n*n;i++){
            ans+=abs(arr[i].x-arr[i-1].x)+abs(arr[i].y-arr[i-1].y);
        }
        cout << ans << endl;
        t--;
	}
}
