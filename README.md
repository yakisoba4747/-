int main(void)
{
    int Taro,Hanako,Jiro;
    
    Taro=15; //Taroの年齢
    Hanako=30; //Hanakoの年齢
    Jiro=19; //Jiroの年齢
    
    //変数と定数の比較
    if(Taro==15)
    printf("Taroは15歳です");
    if(Hanako !=30)
    printf("Hanakoは20歳ではありません\n");
    if(Hanako>=20)
    printf("Hanakoは20歳以上です\n");
    if(Jiro<20)
    printf("Jiroはお酒が飲めません\n");
    
    //変数と変数の比較
    
    if(Jiro>Taro)
    printf("TaroはJiroより年下です\n");
    if(Hanako>Taro)
    printf("HanakoはTaroより年上です\n");

    return 0;
}
