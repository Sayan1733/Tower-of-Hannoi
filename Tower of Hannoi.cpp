#include<iostream>
using namespace std;
void towerofh(int n,char src,char dest,char help){
	if(n==0){
		return;
	}
	
	towerofh(n-1,src,help,dest);				//Recursion
	cout<<"Ring Move from "<<src<<" to "<<dest<<endl;
	towerofh(n-1,help,dest,src);
}
int main(){
	int n;
	char src,c,dest;
	cout<<"Enter The No of rings:";
	cin>>n;
	cout<<"Enter the Source,middle,destination:";
	cin>>src>>c>>dest;
	cout<<"___Tower of Hannoi___"<<endl;
	towerofh(n,src,dest,c);
	return 0;
}
