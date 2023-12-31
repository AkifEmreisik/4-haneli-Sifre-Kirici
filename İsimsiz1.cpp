#include<iostream>

int main(){
	
	int sifre[4]={1,8,8,1};
	int bir[10]={0,1,2,3,4,5,6,7,8,9};
	int iki[10]={0,1,2,3,4,5,6,7,8,9};
	int uc[10]={0,1,2,3,4,5,6,7,8,9};
	int dort[10]={0,1,2,3,4,5,6,7,8,9};
	int cvb[4];
	for(int i=0;i<=9;i++){
		if (sifre[0]==bir[i]){
			cvb[0]=bir[i];
		}
	}
		for(int i=0;i<=9;i++){
			if (sifre[1]==iki[i]){
				cvb[1]=iki[i];
			}
	}
		for(int i=0;i<=9;i++){
			if (sifre[2]==iki[i]){
				cvb[2]=uc[i];
			}
		}
		for(int i=0;i<=9;i++){
			if (sifre[3]==iki[i]){
				cvb[3]=dort[i];
			}
		}
	for(int i=0;i<=3;i++){
		std::cout<<cvb[i];
	}
	
	
	
	
	
	
return 0;
}
