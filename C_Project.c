#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct player
{
	int jersey_no,total_matches,total_runs,total_wik;
	int t20_matches,oneday_matches,test_matches;
	int t20_runs,oneday_runs,test_runs;
	int t20_wickets,oneday_wickets,test_wickets;
	char name[20];
}player;
 
void strval(player*,int);
void display(player*,int);
void maximatches(player*,int);
void maxirun(player*,int);
void maxiwik(player*,int);
void search(player*,int);
void jersey(player*,int);
void name(player*,int);
void j_no(player*,int);
void t20_mat(player*,int);
void t20_run(player*,int);
void t20_wik(player*,int);
void oned_mat(player*,int);
void oned_run(player*,int);
void oned_wik(player*,int);
void test_mat(player*,int);
void test_run(player*,int);
void test_wik(player*,int);

void main()
{
	int op,n;
	char ch;
	 
	 	printf("How many players records you want store: ");
	    scanf("%d",&n);
		player * p;
		
		p=(player*)malloc(n*sizeof(player));
		

	 do{
	 
   	printf("\n1.For insert data");
	printf("\n2.For Display");
	printf("\n3.For Maximum matches");
	printf("\n4.For Maximum Runs");
	printf("\n5.For Maximum Wickets");
	printf("\n6.For search player details by their name");
	printf("\n7.For Update the details of player");
	printf("\n");
	printf("\nEnter your choice:");
	scanf("%d",&op);
	
	if(op==1)
	  strval(p,n);
    else if(op==2)
	  display(p,n);
	else if(op==3)
	  maximatches(p,n);
	else if(op==4)
	  maxirun(p,n);
	else if(op==5)
	  maxiwik(p,n);
	else if(op==6)
	  search(p,n);
	else if(op==7)
	
	{
		int t;
		char c;
		do{
		
		printf("\n1.For player name");
		printf("\n2.For jersey number");
		printf("\n3.For T20 mactches");
		printf("\n4.For T20 Runs");
		printf("\n5.For T20 Wickets");
		printf("\n6.For Oneday mactches");
		printf("\n7.For Oneday Runs");
		printf("\n8.For Oneday Wickets");
		printf("\n9.For Test mactches");
		printf("\n10.For Test Runs");
		printf("\n11.For Test Wickets");
		
		printf("\nEnter you choice:");
		scanf("%d",&t);   
	 
		if(t==1)
		  name(p,n);
		else if(t==2)
		  j_no(p,n);
		else if(t==3)
		  t20_mat(p,n);
		else if(t==4)
		 t20_run(p,n);
		else if(t==5)
		 t20_wik(p,n);
		else if(t==6)
		  oned_mat(p,n);
	    else if(t==7)
		  oned_run(p,n);
	    else if(t==8)
		 oned_wik(p,n);
	    else if(t==9)
		  test_mat(p,n);
	    else if(t==10)
		  test_run(p,n);
	    else if(t==11)
		  test_wik(p,n); 
		  
		
	fflush(stdin);
	printf("\nDo you want to continue for update details:y/n?");
    scanf("%c",&c);
	}while(c =='y');
	
	}
    fflush(stdin);
	printf("\nDo you want to continue for other use cases:y/n?");
    scanf("%c",&ch);
}while(ch=='y' || ch=='Y');
}

void strval(player* p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nEnter player %d details",i+1);
		fflush(stdin);
		printf("\nEnter the player name:");
		gets(p[i].name);
		printf("Enter the player Jersey number:");
		scanf("%d",&p[i].jersey_no); 
		   
		printf("Enter the played T20 matches:");
		scanf("%d",&p[i].t20_matches);
		printf("Enter the T20 Runs:");
		scanf("%d",&p[i].t20_runs);
		printf("Enter the T20 wickets:");
		scanf("%d",&p[i].t20_wickets);
		
		printf("Enter the played Oneday matches:");
		scanf("%d",&p[i].oneday_matches);
		printf("Enter the Oneday Runs:");
		scanf("%d",&p[i].oneday_runs);
		printf("Enter the Oneday wickets:");
		scanf("%d",&p[i].oneday_wickets);
		
		printf("Enter the played Test matches:");
		scanf("%d",&p[i].test_matches);
		printf("Enter the Test Runs:");
		scanf("%d",&p[i].test_runs);
		printf("Enter the Test wickets:");
		scanf("%d",&p[i].test_wickets);
	
		p[i].total_matches=p[i].t20_matches+p[i].oneday_matches+p[i].test_matches;
		p[i].total_runs=p[i].t20_runs+p[i].oneday_runs+p[i].test_runs;
		p[i].total_wik=p[i].t20_wickets+p[i].oneday_wickets+p[i].test_wickets;
	    printf("\n-------------------------------------------------------------------");
	} 
}

void display(player* p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nPlayer Name\tjersy no");
		printf("\n%s\t\t%d",p[i].name,p[i].jersey_no);
		printf("\n---------------------------------------------------------------------");
		printf("\n\tT20 matches\tOneday matches\tTest matches\tTotal matches");
		printf("\n\t%d\t\t%d\t\t%d\t\t%d",p[i].t20_matches,p[i].oneday_matches,p[i].test_matches,p[i].total_matches);
		printf("\n---------------------------------------------------------------------");
		printf("\n\tT20 Runs\tOneday Runs\tTest Runs\tTotal Runs");
		printf("\n\t%d\t\t%d\t\t%d\t\t%d",p[i].t20_runs,p[i].oneday_runs,p[i].test_runs,p[i].total_runs);
		printf("\n---------------------------------------------------------------------");
        printf("\n\tT20 Wickets\tOneday Wickets\tTest Wickets\tTotal Wickets");
		printf("\n\t%d\t\t%d\t\t%d\t\t%d",p[i].t20_wickets,p[i].oneday_wickets,p[i].test_wickets,p[i].total_wik);
		printf("\n---------------------------------------------------------------------");

		}
}

void test_wik(player* p,int n)
{
	int i,y,old_wik;
	printf("Enter the present Test Wickets:");
	scanf("%d",&old_wik);
	
	for(i=0;i<n;i++)
	{
		if(p[i].test_wickets==old_wik)
		{
		   y=i;	
		   printf("Enter the new Test Wickets:");
	       scanf("%d",&p[y].test_wickets);
		}
		else
		printf("Wrong choice");
		
	}
	
}

void test_run(player* p,int n)
{
	int i,y,old_run;
	printf("Enter the present Test Runs:");
	scanf("%d",&old_run);
	
	for(i=0;i<n;i++)
	{
		if(p[i].test_runs==old_run)
		{
			    y=i;
				printf("Enter the new Test Runs:");
            	scanf("%d",&p[y].test_runs);
		}
		else
		printf("Wrong choice");
	}

}

void test_mat(player* p,int n)
{
	int i,y,old_mat;
	printf("Enter the present Test played matches:");
	scanf("%d",&old_mat);
	
	for(i=0;i<n;i++)
	{
		if(p[i].test_matches==old_mat)
		{
			y=i;
			printf("Enter the new Test played matches:");
	        scanf("%d",&p[y].test_matches);
		}
		else
		printf("Wrong choice");
		
	}
	
}

void oned_wik(player* p,int n)
{
	int i,y,old_wik;
	printf("Enter the present Oneday Wickets:");
	scanf("%d",&old_wik);
	
	for(i=0;i<n;i++)
	{
		if(p[i].oneday_wickets==old_wik)
		{
			y=i;
				printf("Enter the new Oneday Wickets:");
	           scanf("%d",&p[y].oneday_wickets);
		}
		else
		printf("Wrong chice");
	}

}

void oned_run(player* p,int n)
{
	int i,y,old_run;
	printf("Enter the present Oneday Runs:");
	scanf("%d",&old_run);
	
	for(i=0;i<n;i++)
	{
		if(p[i].oneday_runs==old_run)
		{
			y=i;
			printf("Enter the new Oneday Runs:");
	       scanf("%d",&p[y].oneday_runs);
		}
		else
	     printf("Wrong choice");
	}
	
}

void oned_mat(player* p,int n)
{
	int i,y,old_mat;
	printf("Enter the present One_day played matches:");
	scanf("%d",&old_mat);
	
	for(i=0;i<n;i++)
	{
		if(p[i].oneday_matches==old_mat)
		{
			y=i;
			printf("Enter the new Oneday played matches:");
	        scanf("%d",&p[y].oneday_matches);
		}
		else
		printf("Wrong choice");
	}
	
}

void t20_wik(player* p,int n)
{
	int i,y,old_wik;
	printf("Enter the present t20 Wickets:");
	scanf("%d",&old_wik);
	
	for(i=0;i<n;i++)
	{
		if(p[i].t20_wickets==old_wik)
		{
			y=i;
			printf("Enter the new t20 Wickets:");
	        scanf("%d",&p[y].t20_wickets);
		}
		 else
	     printf("Wrong choice");
	}
	
}

void t20_run(player* p,int n)
{
	int i,y,old_run;
	printf("Enter the present t20 Runs:");
	scanf("%d",&old_run);
	
	for(i=0;i<n;i++)
	{
		if(p[i].t20_runs==old_run)
		{
			y=i;
			printf("Enter the new t20 Runs:");
	        scanf("%d",&p[y].t20_runs);
		}
	   else
	     printf("Wrong choice");
	}
	
}

void t20_mat(player* p,int n)
{
	int i,y,old_mat;
	printf("Enter the present t20 played matches:");
	scanf("%d",&old_mat);
	
	for(i=0;i<n;i++)
	{
		if(p[i].t20_matches==old_mat)
		{
			y=i;
			printf("Enter the new t20 played matches:");
	       scanf("%d",&p[y].t20_matches);
		}
		 else
	     printf("Wrong choice");
	}
	
}

void j_no(player* p,int n)
{
	int i,y,old_no;
	printf("Enter the present jersey no:");
	scanf("%d",&old_no);
	
	for(i=0;i<n;i++)
	{
		if(p[i].jersey_no==old_no)
		{
			y=i;
			printf("Enter the new jersey number:");
	        scanf("%d",&p[y].jersey_no);
		}
		 else
	     printf("Wrong choice");
		
	}
	
}

void name(player* p,int n)
{
	int i,x,y;
	char old_name[20];
	fflush(stdin);
	printf("Enter the present name:");
	gets(old_name);
	
	for(i=0;i<n;i++)
	{
		if(strcmp(p[i].name,old_name)==0)
		{
			y=i;
		    fflush(stdin);
	        printf("Enter new name:");
	        gets(p[y].name);
		}
		else
     	printf("Wrong choice");
	}
}

void search(player* p,int n)
{
	fflush(stdin);
	char str[20];
	printf("Enter the player name for their details:");
     gets(str);
    
	int i;
	for(i=0;i<n;i++)
	{
	 if(strcmp(p[i].name,str)==0)
	 {
	 	printf("\nPlayer Name\tjersy no");
		printf("\n%s\t\t%d",p[i].name,p[i].jersey_no);
		printf("\n---------------------------------------------------------------------");
		printf("\n\tT20 matches\tOneday matches\tTest matches\tTotal matches");
		printf("\n\t%d\t\t%d\t\t%d\t\t%d",p[i].t20_matches,p[i].oneday_matches,p[i].test_matches,p[i].total_matches);
		printf("\n---------------------------------------------------------------------");
		printf("\n\tT20 Runs\tOneday Runs\tTest Runs\tTotal Runs");
		printf("\n\t%d\t\t%d\t\t%d\t\t%d",p[i].t20_runs,p[i].oneday_runs,p[i].test_runs,p[i].total_runs);
		printf("\n---------------------------------------------------------------------");
        printf("\n\tT20 Wickets\tOneday Wickets\tTest Wickets\tTotal Wickets");
		printf("\n\t%d\t\t%d\t\t%d\t\t%d",p[i].t20_wickets,p[i].oneday_wickets,p[i].test_wickets,p[i].total_wik);
		printf("\n---------------------------------------------------------------------");

	 }
	 else
	 printf("Wrong choice");
	 
	}
}

void maxiwik(player* p,int n)
{
	int i,pos;
	int maxwi=p[0].total_wik;
	for(i=0;i<n;i++)
	{
		if(p[i].total_wik>maxwi)
		{
		  maxwi=p[i].total_wik;
		  pos=i;
		}
	}
	    printf("\n-------------------------");
        printf("\nMaximum wickets including all format taken by:%s",p[pos].name);
		printf("\nMaximum wickets including all format is:%d",maxwi);
}

void maxirun(player* p,int n)
{
	int i,pos;
	int maxrun=p[0].total_runs;
	for(i=0;i<n;i++)
	{
		if(p[i].total_runs>maxrun)
		{
		  maxrun=p[i].total_runs;
		  	pos=i;
		}
	}
        printf("\n-------------------------");
        printf("\nMaximum Runs including all format scored by:%s",p[pos].name);
		printf("\nMaximum Runs including all format is:%d",maxrun);
}

void maximatches(player* p,int n)
{
	int i,pos;
	int maxt=p[0].total_matches;
	for(i=0;i<n;i++)
	{
	 if(p[i].total_matches>maxt)
		{
		  maxt=p[i].total_matches;
		   pos=i;
		}
	}
	   printf("\n-------------------------");
       printf("\nMaximum matches including all format played by:%s",p[pos].name);
       printf("\nMaximum matches including all format is:%d",maxt);
	   
}

