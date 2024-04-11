#include<stdio.h>

void main(){
	int n,i,id;
	char name[20];
	char role[20];
	
	FILE *fp;
	
	fp=fopen("data.txt","w");
	
	
	printf("Enter the number of employee as per your choice : ");
	scanf("%d",&n);
	
	int emp[n];
	
	if(fp=='\0'){
		printf("File is not available!!");
	}
	else{
		
		for(i=0;i<n;i++){
		printf("\n");
		printf("Enter employee id : ");
		scanf("%d",&id);
		fflush(stdin);
		printf("Enter employee name : ");
		scanf("%s",&name);
		printf("Employee designation(Role) : ");
		scanf("%s",&role);
		
			fprintf(fp,"ID ==> %d\n",id);
			fprintf(fp,"NAME ==> %s\n",name);
			fprintf(fp,"ROLE ==>%s\n",role);
}
	fclose(fp);
	
	printf("File open successfully!");

}
	
}