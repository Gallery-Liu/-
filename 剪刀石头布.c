#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define random(x) (rand()%x)

struct user{char name;int num;int score;};


void main()
{
	int moshi,a;
	int lxms(),jfms(),jfb();



printf("    剪刀·石头·布 大战   \n");
printf("输入指令以继续:\n");
printf("练习模式---7\n");
printf("积分模式---8\n");
printf("积 分 榜---9\n");
scanf("%d",&moshi);
     switch (moshi) 
	 {
		 case 7:printf("现在是 : 练习模式\n"); lxms();/*/////////////////////*/break;
	     case 8:printf("现在是 : 积分模式\n"); jfms();break;
		 case 9:printf("   积   分   榜   \n");/*///////////////////////*/ break;
		 default:printf("   输入错误，请重新输入\n"); break;
	 }
}
















lxms ()
{	
	int a,b,c,n=1,x,win=0,lose=0,tie=0;
	printf("欢迎来到练习模式。\n");
	printf("练习模式一次对决9局，9局后会以您与电脑的胜利局数判断输赢。\n");
      for(c=1;c<=9;c++)      
	 {
         printf("             第%d局             \n",n);
	     printf("================================\n");       //玩家输入指定值   
	     printf("1:剪刀   2:石头   3:布\n");
	     scanf("%d",&a);
      	 printf("================================\n");
	  switch(a)         //将输入值以中文输出，若输入错误值则重新输入
		{
 	      case 1:printf("   （你）剪刀VS");break;
	      case 2:printf("   （你）石头VS");break;
	      case 3:printf("   （你）布VS");break;
	      default:printf("   输入错误，请重新输入\n");break;
	  
		 }
      
         srand((int)time(0));      //随机输出数据0、1、2，并以剪刀、石头、布输出
		if(a<=2&&a>=0)         //输入错误值则不执行随机输出 
		{       
           for(x=0;x<999;x++)    { b=random(3);}
	 	       if(b==0)  printf("剪刀（电脑）\n");
			   else if(b==1)  printf("石头（电脑）\n");
			   else if(b==2)  printf("布（电脑）\n");
                 
         n++;
		}
        else printf("   输入错误，请重新输入\n");

		if((a==1&&b==0)||(a==2&&b==1)||(a==3&&b==2)) printf("\n          平局\n\n\n"),tie++;        //比较输出值，判断胜负
		else if((a==1&&b==1)||(a==2&&b==2)||(a==3&&b==0)) printf("\n          你输了\n\n"),lose++;
		else if((a==1&&b==2)||(a==2&&b==0)||(a==3&&b==1)) printf("\n          你赢了\n\n"),win++;
		else printf("   输入错误，请重新输入\n");

	    printf("     目前赢%d局，输%d局,平局%d局\n\n\n",win,lose,tie);    //输赢次数
	}


     if(win>lose)      {printf("           ======\n          [ 胜利 ]\n           ======\n");}
     else if(lose>win) {printf("           ======\n          [ 失败 ]\n           ======\n");}
     else              {printf("           ======\n          [ 平局 ]\n           ======\n");}
}



jfms()
{
	int a,b,c,n=1,x,win=0,lose=0,tie=0;
	printf("欢迎来到积分模式。\n");
	printf("积分模式为无限对战,输入\n");
      for(c=1;c<=9999;c++)      
	 {
         printf("             第%d局             \n",n);
	     printf("================================\n");       //玩家输入指定值   
	     printf("1:剪刀   2:石头   3:布   123:返回主菜单 \n");
	     scanf("%d",&a);
      	 printf("================================\n");
	  switch(a)         //将输入值以中文输出，若输入错误值则重新输入
		{
 	      case 1:printf("   （你）剪刀VS");break;
	      case 2:printf("   （你）石头VS");break;
	      case 3:printf("   （你）布VS");break;
	      default:printf("   输入错误，请重新输入\n");break;
	  
		 }
      
         srand((int)time(0));      //随机输出数据0、1、2，并以剪刀、石头、布输出
		if(a<=2&&a>=0)         //输入错误值则不执行随机输出 
		{       
           for(x=0;x<999;x++)    { b=random(3);}
	 	       if(b==0)  printf("剪刀（电脑）\n");
			   else if(b==1)  printf("石头（电脑）\n");
			   else if(b==2)  printf("布（电脑）\n");
                 
         n++;
		}
        else printf("   输入错误，请重新输入\n");

		if((a==1&&b==0)||(a==2&&b==1)||(a==3&&b==2)) printf("\n          平局\n\n\n"),tie++;        //比较输出值，判断胜负
		else if((a==1&&b==1)||(a==2&&b==2)||(a==3&&b==0)) printf("\n          你输了\n\n"),lose++;
		else if((a==1&&b==2)||(a==2&&b==0)||(a==3&&b==1)) printf("\n          你赢了\n\n"),win++;
		else printf("   输入错误，请重新输入\n");

	    printf("     目前赢%d局，输%d局,平局%d局\n\n\n",win,lose,tie);    //输赢次数
	}

}