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
	{printf("���ļ�����\n");exit(0);}

	max=0;
	for(i=1;i<=1;i++){
	printf("�����%d��ѧ����ѧ��:",i);
	scanf("%d",&stu.num);
	printf("�����%d��ѧ��������:",i);
	scanf("%s",&stu.name);
	printf("�����%d��ѧ���ĳɼ�:",i);
	scanf("%f",&stu.score);
	fwrite(&stu,sizeof(stu),1,fp);
	if(stu.score>max)max=stu.score;
	}
	if(fclose(fp))
	{printf("�ļ��رճ���\n");exit(0);}


	if((fp=fopen("2.txt","wb"))==NULL)
	{printf("���ļ�����\n");exit(0);}
	fwrite(&max,sizeof(float),1,fp);

	if(fclose(fp))
	{printf("�ļ��رմ���\n");exit(0);}

}