#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define random(x) (rand()%x)

struct user{char name;int num;int score;};


void main()
{
	int moshi,a;
	int lxms(),jfms(),jfb();



printf("    ������ʯͷ���� ��ս   \n");
printf("����ָ���Լ���:\n");
printf("��ϰģʽ---7\n");
printf("����ģʽ---8\n");
printf("�� �� ��---9\n");
scanf("%d",&moshi);
     switch (moshi) 
	 {
		 case 7:printf("������ : ��ϰģʽ\n"); lxms();/*/////////////////////*/break;
	     case 8:printf("������ : ����ģʽ\n"); jfms();break;
		 case 9:printf("   ��   ��   ��   \n");/*///////////////////////*/ break;
		 default:printf("   �����������������\n"); break;
	 }
}
















lxms ()
{	
	int a,b,c,n=1,x,win=0,lose=0,tie=0;
	printf("��ӭ������ϰģʽ��\n");
	printf("��ϰģʽһ�ζԾ�9�֣�9�ֺ����������Ե�ʤ�������ж���Ӯ��\n");
      for(c=1;c<=9;c++)      
	 {
         printf("             ��%d��             \n",n);
	     printf("================================\n");       //�������ָ��ֵ   
	     printf("1:����   2:ʯͷ   3:��\n");
	     scanf("%d",&a);
      	 printf("================================\n");
	  switch(a)         //������ֵ��������������������ֵ����������
		{
 	      case 1:printf("   ���㣩����VS");break;
	      case 2:printf("   ���㣩ʯͷVS");break;
	      case 3:printf("   ���㣩��VS");break;
	      default:printf("   �����������������\n");break;
	  
		 }
      
         srand((int)time(0));      //����������0��1��2�����Լ�����ʯͷ�������
		if(a<=2&&a>=0)         //�������ֵ��ִ�������� 
		{       
           for(x=0;x<999;x++)    { b=random(3);}
	 	       if(b==0)  printf("���������ԣ�\n");
			   else if(b==1)  printf("ʯͷ�����ԣ�\n");
			   else if(b==2)  printf("�������ԣ�\n");
                 
         n++;
		}
        else printf("   �����������������\n");

		if((a==1&&b==0)||(a==2&&b==1)||(a==3&&b==2)) printf("\n          ƽ��\n\n\n"),tie++;        //�Ƚ����ֵ���ж�ʤ��
		else if((a==1&&b==1)||(a==2&&b==2)||(a==3&&b==0)) printf("\n          ������\n\n"),lose++;
		else if((a==1&&b==2)||(a==2&&b==0)||(a==3&&b==1)) printf("\n          ��Ӯ��\n\n"),win++;
		else printf("   �����������������\n");

	    printf("     ĿǰӮ%d�֣���%d��,ƽ��%d��\n\n\n",win,lose,tie);    //��Ӯ����
	}


     if(win>lose)      {printf("           ======\n          [ ʤ�� ]\n           ======\n");}
     else if(lose>win) {printf("           ======\n          [ ʧ�� ]\n           ======\n");}
     else              {printf("           ======\n          [ ƽ�� ]\n           ======\n");}
}



jfms()
{
	int a,b,c,n=1,x,win=0,lose=0,tie=0;
	printf("��ӭ��������ģʽ��\n");
	printf("����ģʽΪ���޶�ս,����\n");
      for(c=1;c<=9999;c++)      
	 {
         printf("             ��%d��             \n",n);
	     printf("================================\n");       //�������ָ��ֵ   
	     printf("1:����   2:ʯͷ   3:��   123:�������˵� \n");
	     scanf("%d",&a);
      	 printf("================================\n");
	  switch(a)         //������ֵ��������������������ֵ����������
		{
 	      case 1:printf("   ���㣩����VS");break;
	      case 2:printf("   ���㣩ʯͷVS");break;
	      case 3:printf("   ���㣩��VS");break;
	      default:printf("   �����������������\n");break;
	  
		 }
      
         srand((int)time(0));      //����������0��1��2�����Լ�����ʯͷ�������
		if(a<=2&&a>=0)         //�������ֵ��ִ�������� 
		{       
           for(x=0;x<999;x++)    { b=random(3);}
	 	       if(b==0)  printf("���������ԣ�\n");
			   else if(b==1)  printf("ʯͷ�����ԣ�\n");
			   else if(b==2)  printf("�������ԣ�\n");
                 
         n++;
		}
        else printf("   �����������������\n");

		if((a==1&&b==0)||(a==2&&b==1)||(a==3&&b==2)) printf("\n          ƽ��\n\n\n"),tie++;        //�Ƚ����ֵ���ж�ʤ��
		else if((a==1&&b==1)||(a==2&&b==2)||(a==3&&b==0)) printf("\n          ������\n\n"),lose++;
		else if((a==1&&b==2)||(a==2&&b==0)||(a==3&&b==1)) printf("\n          ��Ӯ��\n\n"),win++;
		else printf("   �����������������\n");

	    printf("     ĿǰӮ%d�֣���%d��,ƽ��%d��\n\n\n",win,lose,tie);    //��Ӯ����
	}

}