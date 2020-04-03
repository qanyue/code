#include <stdio.h>

int search(int key,int a[],int len)
{
	int left=0,right=len-1;
	int mid;
	int ret=-1;

	while(left<=right){
	mid=(left+right)/2;
	printf("%d ",mid );
	if(a[mid]==key){ 
		ret=mid;     
		break;
	}else if(a[mid]<key){

		left=mid+1;
	}else{

		right=mid-1;

	}

	}
	return ret+1;
}

int main()
{
	int a[8]={0,12,34,50,66,68,80,86};
	int key=86;
	printf("\n%d",search(86,a,8));

	return 0;
}