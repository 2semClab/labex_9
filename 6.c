#include<stdio.h>
int main(){
int n,m,f1=0,f2=0;
printf("Enter the first array size: ");
scanf("%d",&n);
int a[n];
printf("Enter %d elements: ",n);
for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
printf("Enter the second array size: ");
scanf("%d",&m);
int b[m];
printf("Enter %d elements: ",m);
for(int i=0;i<m;i++){
	scanf("%d",&b[i]);
	}

printf("First Array : ");
for(int i=0; i<n;i++){
	printf("%d ",a[i]);
	}
printf("\n");

printf("Second Array : ");
for(int i=0; i<m;i++){
	printf("%d ",b[i]);
	}
printf("\n");

int c[m+n];
for(int i =0; i<n+m;i++){
	if(a[f1]>b[f2]){
		c[i]=b[f2];
		f2+=1;
	}
	else{
		c[i]=a[f1];
		f1+=1;
	}
}
printf("Merged Array : ");
for(int i=0; i<n+m;i++){
	printf("%d ",c[i]);
	}
printf("\n");

return 0;
}