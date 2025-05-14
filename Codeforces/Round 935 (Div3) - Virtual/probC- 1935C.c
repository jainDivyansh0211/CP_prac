#include <stdio.h>
#include <math.h>
#include<string.h>


int cnt(char s[],char ch){
	int ct=0;
	for(int a=0;a<strlen(s);a++){
		if(s[a]==ch) ct+=1;
	}
	return ct;
}

int main(){
	int t;
	scanf("%d",&t);
	int out[t];
	int k=0;
	for(int i=0;i<t;i++){
		int n;
		scanf("%d",&n);
		int possiblity[n];
		char s[n];
		scanf("%s",s);
		int tcnt_0=cnt(s,'0');
		int tcnt_1=cnt(s,'1');
		printf("String is : %s \n0 is %d\n1 is %d",s,tcnt_0,tcnt_1);
		int b=0;
		while(b<n){
			char sub_str[b+1];
			for(int c=0;c<b+1;c++){
				sub_str[c]=s[c];
				}
			int l_total=b;
			int r_total=n-b;
			int l_count=cnt(sub_str,'0');
			int r_count=cnt(sub_str,'1');
			if((l_count >= ceil(l_total/2.0)) && (r_count>=ceil(r_total/2.0))) possiblity[b]=b+1;
			b++;
		}
		float q=n/2.0;
		float min=q;
		int idx=0;
		for(int d=0;d<b;d++){
			if(fabs(q-possilbity[d])<min) {
				min=fabs(q-possilbity[d]);
				idx=q[d];
		}}
		out[i]=idx;
	}
	printf("\n")
	for(int g=0;g<t;g++){
		printf("%d",out[g]);
	}

	return 0;
}