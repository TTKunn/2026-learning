#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

const int N = 16; 
int st[N] = {0}; 
int n; 

void dfs(int u){
	if(u>n){
		//说明已经回溯完了
		for(int i = 1;i <= n;i++){
			if(st[i] == 1){
				printf("%d ",i);
			}
		} 
		printf("\n");
		return; 
	}
	st[u] = 1;
	dfs(u+1);
	
	st[u] = 2;
	dfs(u+1);
	st[u] = 0; 
}

int main (){
	cin>>n;
	dfs(1); 
	return 0;
} 

