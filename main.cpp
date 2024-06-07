#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
	if(cnt<N){	       
		vec.push_back(cnt+1);
		func(cnt+1);
		if(vec.size()==M){
			for(int i=0; i<M; i++){
				cout<<vec[i]<<" ";
			}
			cout<<endl;
		}
		vec.erase(vec.end()-1);
		func(cnt+1);	
	}

}

int main() {
   cin >> N >> M;
   func(0);
}
