#include<stdio.h>
int main()
{
  char username[]="Admin";
  char password[]="1234";
  char user[10];
  char pass[10];
  printf("Enter UserName :");
  scanf("%s",user);
  printf("Enter password :");
  scanf("%s",pass);
  
  if(strcmp(user,username)==0 && strcmp(pass,password)==0)
  {
  	printf("Login Successfully");
  }	
  else{
  	printf("login uncessfull");
  }
  
}
