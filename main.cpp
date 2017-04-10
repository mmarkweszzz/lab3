#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
using namespace std;
int main(){
int a;
ifstream inFile("file.in", ios::in);
ofstream outFile("file.out", ios::out);
inFile >> a;
int init_array[a];
vector<int> v(a);
for(int i=0;i<=7;i++){
	inFile >> init_array[i];
	v.at(i)=init_array[i];
	//cout<<v.at(i);
	}
int insert,move; 
for(int next=1;next<a;++next){
	insert = v.at(next);
	move = next;
	while((move>0) &&
		(v.at(move-1) > insert))
		{
		v.at(move) = v.at(move-1);
		--move;
		}
	v.at(move) = insert;
	}
int total=0;
for(int j=3;j<=7;++j){
	total+=v.at(j);
	}
for(int k=0;k<=7;++k){
cout<<v.at(k)<<" ";
}
cout<<total;
outFile << total ;
return 0;
}
