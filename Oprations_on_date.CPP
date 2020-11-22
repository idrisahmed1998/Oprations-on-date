#include<stdio.h>
#include<conio.h>
struct dates{
	int d,m,y;
};
///////////////////////////////
void add(struct dates);
	int m31 [7]={1,3,5,7,8,10,12};
	int m30[]={4,6,9,11};
//////////////////////
int main(void){
struct dates dt;
while(1){
dt.d=0;
dt.m=0;
dt.y=0;
printf("\nenter date like (d m y) to exit enter(-1)");
scanf("%d %d %d",&dt.d,&dt.m,&dt.y);
if(dt.d==-1 || dt.m==-1||dt.y==-1){
	break;
}else{
	add(dt);
	main();
}}
return 0;
}
////////////////////////////
void add(struct dates dd){
	if(dd.d<32 && dd.m<13){
	int typeyears=0;
	if(dd.y%4==0){
		typeyears=1;
		}
	int flag=0;
	if(dd.m!=2){
		for(int count=0;count<=6;count++){
		if(dd.m==m31[count]){
			flag=1;
			break;}
		}}
		if(flag==0){
		for(int count=0;count<=3;count++){
			if(dd.m==m30[count]){
				flag=2;
			}}}
		if(flag==1){
		if(dd.d<31&&dd.d>0){
				dd.d = dd.d+1;
				}
		else if(dd.d==31 &&dd.m!=12){
			dd.d=1;
		dd.m=dd.m+1;
		}
		else if(dd.d==31 && dd.m==12){
		  dd.d=1;
		  dd.m=1;
		  dd.y=dd.y+1;
		  }}
		if(flag==2){
		if(dd.d>30 || dd.d<=0){
				printf(" the date is entred is not correct !!!!");
			}else{
			if(dd.d<30){
				dd.d = dd.d+1;
				}
			else if(dd.d==30){
				dd.d=1;
				dd.m = dd.m+1;}
				}
		}

			if(flag==0 && typeyears==0){
			if(dd.d>28 || dd.d<=0){
				printf(" the date is entred is not correct !!!!");
			}else{

			if(dd.d<28&&dd.d>0){
				dd.d = dd.d+1;

			}
			else if(dd.d==28){
				dd.d=1;

				dd.m=dd.m+1;

			}
		}
		}
			if(flag==0 && typeyears==1){
			if(dd.d>29 || dd.d<=0){
				printf(" the date is entred is not correct !!!!");
			}else{

			if(dd.d<29){
				dd.d = dd.d+1;

			}
			else if(dd.d==29){
				dd.d=1;

				dd.m=dd.m+1;

			}
		}
		}




		printf("\t%d/%d/%d",dd.d,dd.m,dd.y);

		}
		else {
			printf("the day is entered is maxmum from normal date\n");
		}

		}
