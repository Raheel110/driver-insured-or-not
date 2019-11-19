#include<stdio.h>

 int main()
{
int age;
char status,gender;

printf("Enter Martial Status 1 For Married And 0 For Unmarried \n\a");
scanf("%c",&status);

if(status=='1')
    printf("Driver is Insured!");
else if(status=='0'){
        printf("Enter Gender M For Male And F For Female\n\a");
        fflush(stdin);
        scanf("%c",&gender);

        printf("Enter Age= \a");
        fflush(stdin);
        scanf("%d",&age);

if(gender=='M' && age>30)
    printf("Driver is Insured\n",age);


else if(gender=='F' && age>25)

    printf("Driver is Insured\n",age);

else printf("Driver is NotInsured");
}
return 0;


}
