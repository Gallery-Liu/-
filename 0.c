#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
    int num;
    char name[20];
    float score;
};
void main()
{
	struct student stu;
	FILE *fp;
	int i;
	float max;
	char z;
	if((fp=fopen("1.txt","wb"))==NULL)
	{printf("打开文件出错！\n");exit(0);}

	max=0;
	for(i=1;i<=1;i++){
	printf("输入第%d个学生的学号:",i);
	scanf("%d",&stu.num);
	printf("输入第%d个学生的姓名:",i);
	scanf("%s",&stu.name);
	printf("输入第%d个学生的成绩:",i);
	scanf("%f",&stu.score);
	fwrite(&stu,sizeof(stu),1,fp);
	if(stu.score>max)max=stu.score;
	}
	if(fclose(fp))
	{printf("文件关闭出错！\n");exit(0);}


	if((fp=fopen("2.txt","wb"))==NULL)
	{printf("打开文件出错！\n");exit(0);}
	fwrite(&max,sizeof(float),1,fp);

	if(fclose(fp))
	{printf("文件关闭错误！\n");exit(0);}

}