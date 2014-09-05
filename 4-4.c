#include <stdio.h>
int main()
{
   int think,guess,T,cnt = 0;
   scanf("%d%d",&think,&T);
   scanf("%d",&guess);
   cnt ++;
   while(guess > 0 && cnt <= T)
   {
      if(guess < think)
      {
          printf("Too big\n");

      }else if(guess > think)
      {
          printf("Too small\n");

      }else
      {
          if(cnt == 1)
          {
              printf("Bingo!\n");
          }else if(cnt <= 3)
          {
              printf("Lucky You!\n");
          }else
          {
              printf("Good Guess!\n");
          }
      }
      scanf("%d",&guess);
      cnt ++;
   }
   if(guess < 0 || cnt > T)
   {
       printf("Game Over\n");
   }
    return 0;
}
