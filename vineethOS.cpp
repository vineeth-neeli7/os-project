#include<stdio.h>
#include<stdlib.h>
struct process{
	int a_t;
	int b_t;
	int w_t;
	int s_t;
	int f_t;
	int t_a;
	float pr;
}p[10];
int n;
void arsort(){
	struct process temp;
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(p[i].a_t>p[j].a_t){
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
}
void prsort(){
	struct process temp;
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(p[i].pr<p[j].pr){
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
}

void display(){
	int i;
	printf("Process\tArrival time\tBurst time\n");
	for(i=0;i<n;i++){
		
		printf("   P%d\t%d\t\t%d  \n",i+1,p[i].a_t,p[i].b_t);
	}
}





int main(){
	printf("Enter number of processes : ");
	scanf("%d",&n);
	printf("Enter the arrival and burst time of each process: ");
	for(int i=0;i<n;i++){
		printf("\n P%d Arrival:",i+1);
		scanf("%d",&p[i].a_t);
		printf("\n P%d Burst:",i+1);
		scanf("%d",&p[i].b_t);	
	}
	printf("\n Entered Data: \n");
	display();
	printf("\n\n");
	printf("\n Sorted According to Arrival Time: \n");
	printf("\n\n");
	arsort();
	display();
	printf("\n\n");
	int i=0;
	for(int j=i+1;j<n;j++){
		p[i].pr=100;
		if(p[j].a_t<p[i].b_t){
			p[j].w_t=p[i].b_t-p[j].a_t;
			p[j].pr=1+((float)p[j].w_t/(float)p[j].b_t);
		}
	}
	printf("\n Sorted According to Priority: \n");
	prsort();
	printf("\n\n");
	display();
	printf("\n\n");
	int tot_wt,tot_ta;
	for(i=0; i<n; i++)
 
    {
 
        if(i==0)
        {
            p[i].s_t=p[i].a_t;
            p[i].w_t=p[i].s_t-p[i].a_t;
            p[i].f_t=p[i].s_t+p[i].b_t;
            p[i].t_a=p[i].f_t-p[i].a_t;
        }
        else
        {
            p[i].s_t=p[i-1].f_t;
            p[i].w_t=p[i].s_t-p[i].a_t;
            p[i].f_t=p[i].s_t+p[i].b_t;
            p[i].t_a=p[i].f_t-p[i].a_t;
        }
        tot_wt+=p[i].w_t;
        tot_ta+=p[i].t_a;
    }
    float a_wt=(float)tot_wt/n;
    float a_ta=(float)tot_ta/n;
    printf("\nProcess  arrivaltime  executiontime  priority  waitingtime  TAtime");
    for(i=0; i<n; i++)
        printf("\nP%d          %d          %d           %.3f         %d        %d",i+1,p[i].a_t,p[i].b_t,p[i].pr,p[i].w_t,p[i].t_a);
    printf("\nAverage waiting time is:%f",a_wt);
    printf("\nAverage turnaroundtime is:%f",a_ta);

	return 0;
		
	
}
