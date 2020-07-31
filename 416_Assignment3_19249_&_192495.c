#include <stdio.h>
#include<string.h>

int main()
{
    int login, option, x=0, y=0, i=0, size=3, sqn=4, match=-1;
    char currency, user[15], pass[12], new_currency[10], arr[10][10]={"Dollar","Euro","Yen"};
    char money[6],respond;
    float rate, money_to_bought,money_you_need,total=0, arr1[5]={4.5,4.8,3.9};
    
    
    printf("\t\t\t\tWELCOME TO EXCHANGE RATE SYSTEM\n\n\n");
    printf("Login as (1-Staff 2-Customer)? ");
    scanf("%d", &login); 
    
    if(login==1){
        
        printf("\nUsername: ");
        scanf("%s", user);
        fflush(stdin);

        printf("Password: ");
        scanf("%s", pass);
    
        x=strcmp(user, "aaa");
        y=strcmp(pass, "aaa");
        
            if(x==0 && y==0){
            printf("\n\t1. Add new currency\n");
            printf("\t2. Update existing\n");
            printf("\t3. Logout\n");
            
            do{
                printf("\nChoose option? ");
                scanf("%d", &option);
                
    			
                if(option==1){
                printf("New currency? ");
                scanf("%s", new_currency);
                            
                printf("Rate? ");
                scanf("%f", &rate);
                printf("Record added!\n");
                
                 char const *n = strcpy(arr[sqn-1], new_currency);
                 arr1[sqn-1] = rate;
                    
                    size++; 
                        }
        
             else if(option==2){
             	
                 printf("Edit currency? ");
                 scanf(" %s", &currency);
                 fflush(stdin);
                   
                for(x=0; x<3; x++)
		        {
		            char const j = strcmp(arr[x], &currency);
	
		           	if(j==0)
		           	  {
        				printf("Current rate is %.2f\n", arr1[x]);
        				printf("Input New rate? ");
                        scanf("%f", &rate);
                        
                        arr1[x] = rate;
        				
        				printf("Record updated!\n");
        			}
		        }
            }
           
             
             }while(option!=3);
        
            }
           
             printf("You successfully logged out!\n");
             
             
        }
                
         else if(login==2)
            {
            	for(i=0;i<4;i++)
                printf("%d. %s\n",i+1,arr[i]);
        		
        		for(respond='Y'; respond=='Y';)
        		{
        		
        	do{
        		i=0;
        		match=-1;
        		
        		printf("Input currency name? ");
        		scanf("%s",money);
        
        		while(i<4&&match==-1)
        		{	
        			if (strcmp(money,arr[i])==0)
        			match=i;
        			i++;
        		}
        	
        		if (match!=-1)
        		{
        			printf("Input the amount of money to bought :");
        			scanf("%f",&money_to_bought);
        			money_you_need=money_to_bought*arr1[i-1];
        			printf("You need RM %.2f\n",money_you_need);
        		}
        		else 
        		printf("Not found\n");
        
        	}while(match==-1); 
        		
        		printf("Buy another: ");
        		scanf("  %c",&respond);
        		total +=money_you_need;
        		
        		}
        		printf("Total : RM %.2f\n",total);
            }
                
           printf("Thank you for using this system"); 
            
        system("pause");
    return 0;
}