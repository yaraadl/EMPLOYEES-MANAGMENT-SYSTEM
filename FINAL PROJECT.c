#include <stdio.h>
#include <stdlib.h>

//1-reading the ids
void enter_id(int ids[60],float salaries[60],int employess_num){
	int i;
	for (i=0;i< employess_num ;i++){
		printf("\nenter the employe's  id : \n");
		scanf("%d",&ids[i]);
		printf("\nenter the employe's salary : \n");
		scanf("%f",&salaries[i]);
		}	
}

//2-exceeded salaries
void exceeded_salaries(int ids[60],float salaries[60],int required_ids[60],int employess_num,float exceeded_salary){
int i,j=0,flag=0;
for(i=0;i<60&&salaries[i]!=0;i++){
  		if(salaries[i]>exceeded_salary){
  			flag++;
  			required_ids[j]=ids[i];
  			j++;
			
	  }
	  }
	  if(flag){
	  	
	  	printf("_____________________________\n");
	  printf("list of ids that exceeded %0.2f in salary : \n",exceeded_salary);
	  for(i=0; i< j; i++) {
		
			printf("%d\n",required_ids[i]);
			if(j==59){
           printf("\n");}
		   }
		   }
		   else printf("No employess above this salary were found\n");
}

//increasing the value of salary
void salary_update(int ids[60],float salaries[60],int employess_num){

  char x;
  do{
    int i,required_id;
    float salary_inc;
    printf("enter the id to whom you want to update his salary");
    scanf("%d",&required_id);
    printf("Enter the increase in salary: ");
    scanf("%2f",&salary_inc);
    for( i = 0 ; i < employess_num ; i++){
      if(required_id == ids[i]){
        printf("Employee's old salary: %.2f\n",salaries[i]);
        salaries[i] *= (1.0 +((salary_inc * 1.0) /100));
        printf("Employee's new salary: %.2f\n",salaries[i]);
        printf("\nDo you want increase any other salary? (y/n)");
        scanf(" %c",&x);
      }


  
    }}

while (x == 'y' || x == 'Y');

  
}
 

//4-printing all data
void print_data(int ids[60],float salaries[60]){
	printf("\n++++++++++++++++++++++++++++\n");
	int i;
	for(i=0; i<60; i++) {
		if(ids[i] !=0||salaries[i]!=0){
			printf("%.d    ", ids[i]);
			printf("%0.2f\n",salaries[i]);
			if(i==59){
           printf("\n");
		}
		
	}
	}
	
	

printf("\n++++++++++++++++++++++++++++\n");
}



int main() {
	int  ids[60]={0},required_ids[60]={0};//new array through which we will return the ids of exceeded salaries
	float salaries[60]={0};
	float exceeded_salary;
	int employess_num,i;
	printf("enter the number of you employees:\n");
	scanf("%d",&employess_num);
	enter_id(ids,salaries,employess_num);
	printf("\n++++++++++++++++++++++++++++\n");
	printf(" ___id_______salary________");
	print_data(ids,salaries);
	
	printf("enter your exceeded limit salary\n");
    scanf("%f",&exceeded_salary);
	exceeded_salaries(ids,salaries,required_ids,employess_num,exceeded_salary);
  salary_update( ids, salaries, employess_num);
  printf("\n++++++++++++++++++++++++++++\n");
  printf("\nyour updated data: \n");
  
  print_data(ids,salaries);

	

	
	return 0;
}

