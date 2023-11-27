#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int target_num;
    int input_num;
    int i;

    srand((unsigned int)time(NULL));
    target_num = rand()%100;
    
    for ( i = 0; i < 10; i++)
    {
        printf("0~99の数字を入力してください");
        scanf("%d", &input_num);
        if (target_num == input_num)
        {
            printf("当たり\n");
            break;
            }
        else if (target_num < input_num)
        {
            printf("大きいよ\n");
            }
        else {
            printf("小さいよ\n");
            }

    
    };
    if(i == 10){
        printf("はずれ！正解は%dです。\n", target_num);
    }
    /*
    if(target_num != input_num){
        printf("はずれ！正解は%dです。", target_num);
    }*/
    return 0;  
}
