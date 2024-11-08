#include <stdio.h>

int main()
{
    int k1,k2;
    printf("身長は何㎝ですか？");
    scanf("%d", &k1);
    
    if (k1>=200)
     {
        printf("too big!!!\n");
     }
    
    else if (k1<199)
    
    {
        printf("セノビック飲めよ\n");
    }
    
    
    printf("体重は何㎏ですか？\n");
    scanf("%d", &k2);
    
    if (k2>=80)
    {
        printf("松屋でご飯お代わりしすぎだよ\n");
    }
    
    else
    {
        printf("ほえ");
    }
    
    return 0;
}
