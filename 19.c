#include<stdio.h> 

#include<stdlib.h> 

#include<math.h>   

int main()

{
	printf("-------------------------------------------------\n");

	printf("                ��Ϥ����I�G�x��                 \n");

	printf("-------------------------------------------------\n");

	printf("�п�J�@�s��(�̦h10��)�x�Ϊ����W�Υk�U�y�СG�]��J������п�J{*}�^\n");  

    char ch[5];

    int num=0;

    double map[11][4];

    int ch2[11];

      while(1)

      {

          scanf("%s",ch);

          if(ch[0]=='*') break; 

          if(ch[0]=='r') 

          {

            scanf("%lf %lf %lf %lf",&map[num][0],&map[num][1],&map[num][2],&map[num][3]); 

             ch2[num]=1;

          } 

          else

          {

            scanf("%lf %lf %lf",&map[num][0],&map[num][1],&map[num][2]);

            ch2[num]=0;

          }  

          num++; 

     }

    int a,b,c,m=0;

    double x,y; 

      while(1)

      {

      	printf("�п�J�y��(x,y)�G");  

        scanf("%lf %lf",&x,&y);

        if(x==9999.9&&y==9999.9) break; 

        int flag=0;

        m++;

          for(a=0;a<num;a++) 

          {

            if(ch2[a]==1&&x>map[a][0]&&x<map[a][2]&&y<map[a][1]&&y>map[a][3]) 

              {printf("�P�_���G�GPoint %d is contained in figure %d\n",m,a+1);flag=1;}   

            if(ch2[a]==0&&sqrt((x-map[a][0])*(x-map[a][0])+(y-map[a][1])*(y-map[a][1]))<map[a][2]) 

              {printf("�P�_���G�GPoint %d is contained in figure %d\n",m,a+1);flag=1;}  

         }

            if(flag==0)

               printf("�P�_���G�GPoint %d is not contained in any figure\n",m);  

      } 

       return 0;

}
