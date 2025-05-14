#include<stdio.h>
#include<math.h>

int res(int a,int b,int c){
	int nt=0;
	nt+=a+b/3;
	int rem_extro=b%3;
	if(rem_extro!=0){
		if((rem_extro+c)>=3){
			nt+=1;
			nt+=ceil((c-(3-rem_extro))/3.0);
		}
		else{
			return -1;
		}
	}
	else{
		nt+=ceil(c/3.0);
	}
	return nt;
}


int main(){
	int t;
	scanf("%d",&t);
	int out[t];
	for(int i=0;i<t;i++){
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		out[i]=res(a,b,c);
	}
	for(int j=0;j<t;j++){
		printf("\n%d",out[j]);
	}
	return 0;
}