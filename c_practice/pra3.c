#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <conio.h>

/*int main()
{
    int math , eng , chem , sum;
    math = eng = chem = 78;
    math = math + 5;
    sum = math + eng + chem;
    printf("數學加權後成績為:%d" , math);
    printf("\n總分為:%d", sum);

    return 0;
}



int main()
{
    int a , b , c;
    printf("請輸入除數(整數):");
    scanf("%d" , &a);
    printf("請輸入被除數(整數):");
    scanf("%d" , &b); 
    c = b / a;
    float d = b % a;
    printf("商:%d，餘:%f" , c , d);

    return 0;
}
    


int main()
{
    float x,y;
    printf("請輸入兩數:");
    scanf("%f",&x);
    scanf("%f",&y);
    printf("兩數相乘積為:%f",x * y);

    return 0;
}
    

int main(){


    printf("short size : %d Byte\n" , sizeof(short));
    printf("long size: %d Byte\n", sizeof (long));

    return 0;
}
//陣列
int main(){

    int i_array2D [] [3] = {

                                {1,2,3},
                                {3,4,5},
                                {5,6,7}
                            };

    printf ("%d %d %d \n %d %d %d \n %d %d %d \n" ,  i_array2D [0] [0] ,  i_array2D [0] [1] ,  i_array2D [0] [2] ,
                                                     i_array2D [1] [0] ,  i_array2D [1] [1] ,  i_array2D [1] [2] ,
                                                     i_array2D [2] [0] ,  i_array2D [2] [1] ,  i_array2D [2] [2]
                                                    );
    printf("%d\n" , sizeof ( i_array2D));


    return 0;
    
}
    

//string 字串
int main(){
    //char str_1D[] = "hello world";
    //printf("%s\n ", str_1D);
    //printf("%d\n" , sizeof(str_1D));   字串後size都會加一個\0 所以都要+1
    //printf("%c %c %c\n", str_1D[0] , str_1D[1] , str_1D[2]);
    //str_1D[1]  = 'b';
    //printf("%s\n ", str_1D);
    char str_2D[][6] = {
                        "abc\n",
                        "def\n",
                        "ghi\n",

                        };
                        
    printf("%s %s %s\n" , str_2D[0], str_2D[1] , str_2D[2]);
    printf("%d\n" , sizeof(str_2D));

    return 0;

}
    


int main(){

    int a = 12855;
    float PI = 3.14159;
    printf("%x\n" , a);
    
    char b = 'c';
    printf("%c\n" , b);

    char str [] = "abc";
    printf("%s", str);
    return 0;
}



int main(){
    char s [5];
    int a;
    float PI;
    printf("請輸入3數值");
    //scanf("%s , %d , %f" , s , &a , &PI);
    //printf("out = %s , %d , %f" , s , a, PI);

    char input [20] = "dff  55  3.14";
    sscanf(input,"%s , %d , %f" , s , &a, &PI);
    printf("out = %s , %d , %f" , s , a, PI);
    return 0;
    


}
    
//gets可以空格
//scanf不可接受空格
int main(){
    char str[80];
    gets(str);
    printf("out = %s" , str);

    return 0;

}
    

//puts 輸出後自動換行
int main(){
    char str1[] = "hello world";
    char str2[] = "hello！";
    puts(str1);
    puts(str2);

    return 0;
}



int main(){
    char str[50];
    fgets(str , 50 , stdin);
    printf("out = %s" , str);

    return 0;

}

int main(){
    int a = 5;
    printf("a = %d\n" , a);
    int b = a++;   
    printf("(a++) * 4 = %d \n", b * 4);
    a = 5;
    int c = ++a;
    printf("(++a) * 4 = %d ", c * 4);
    return 0;
}


int main(){

    int a , b;
    printf("請輸入a值:");
    scanf("%d" , &a );
    printf("請輸入b值:");
    scanf("%d" , &b );

    printf("a > b 的結果為: %d\n" , (a > b));
    printf("a == b的結果為: %d\n" , (a == b));
    printf("a < b 的結果為: %d\n" , (a < b));
    

    return 0;


}
    


int main(){
    int a = 8 , b = 2 , c = 9 , d = 2;
    printf("a = %d , b = %d , c = %d , d = %d\n" , a , b ,c , d);
    printf("a > b & c > d 的結果為:%d\n" , (a > b & c > d));
    printf("a < b | c < d 的結果為:%d\n" , (a < b | c < d));
    printf("a > b ^ c > d 的結果為:%d\n" , (a > b ^ c >d));
    printf("! ( a < b) 的結果為:%d\n" , !(a < b));

    return 0;
}
    


int main(){
    int grades1 , grades2 , grades3 , sum = 0; 
    printf("請輸入第一科成績:");
    scanf("%d" , &grades1);
    sum += grades1;
    printf("請輸入第二科成績:");
    scanf("%d" , &grades2);
    sum += grades2;
    printf("請輸入第三科成績:");
    scanf("%d" , &grades3);
    sum += grades3;

    printf("總成績為:%d" , sum);

    return 0;

}
    

//size表示為 型別 變數 = sizeof(型別)
// if a = short , b = int
//a + b = 4(記憶體大小)*自動型別轉換為值郁較大者，也就是int，所以記憶體大小為4

int main(){
    short a;
    int b;
    printf("變數a記憶體大小為: %d\n" , sizeof(a));
    printf("變數b記憶體大小為: %d\n" , sizeof(b));
    printf("a + b的記憶體大小為: %d\n", sizeof(a+b));

    return 0;
}


//條件運算子
//判斷奇偶數
//strcpy 是 C 語言中用來複製字串的標準函式，定義於標頭檔 <string.h>
//strcpy用法 char *strcpy(char *destination, const char *source);
//destination：目標字元陣列，字串將被複製到這裡。
//source：來源字串，會被複製到目標陣列。
//在 C 語言中，不能用等號 = 直接把一個字串指派給陣列。

int main(){
    int a;
    char s[20];
    printf("請輸入一整數:");
    scanf("%d",&a);
    strcpy(s, (a%2)==0 ? "偶數" : "奇數");//根據輸入的數判斷
    printf("你輸入的數為: %s\n",s);//顯示結果

    return 0;

}




int main(){
    int money = 0 , late;
    printf("請輸入遲到幾分鐘");
    scanf("%d",&late);
    if (late >= 20)  //如果遲到大於20min
    {
        money += 30;
    }
    
    printf("你的罰款為:%d 元",money);

    return 0;
}



int main(){
    float high ,weight;
    printf("請輸入身高(公分):");
    scanf("%f",&high);
    printf("請輸入體重(公斤):");
    scanf("%f",&weight);

    if ((high-110) < weight)
    {
        printf("體重過重!該減肥");
    }

    else
    {
        printf("恭喜，體重未過重!");
    }
    
    return 0;
}



int main(){
    float weight , high , bmi;
    printf("請輸入體重(公斤)");
    scanf("%f",&weight);
    printf("請輸入身高(公尺)");
    scanf("%f", &high);

    bmi = weight/(high*high);
    if ( bmi < 18.5 )
    {
        printf("體重過輕!");
    }

    else if ( bmi <= 24)
    {
        printf("體重適中!");
    }

    else
    {
        printf("體重過重!");
    }
    
    return 0;
}



//switch...case....只能判斷整數或字串條件式，使用限制較多。

int main(){
    char grades;

    printf("請輸入英文等第(A-E):");
    scanf("%s",&grades);

    switch (grades)
    {
    case 'A':
        printf("你的等第為「甲」");
        break;
    
    case 'B':
        printf("你的等第為「乙」");
        break;
    
    case 'C':
        printf("你的等第為「丙」");
        break;
    
    case 'D':
        printf("你的等第為「丁」");
        break;

    case 'E':
        printf("你的等第為「戊」");
        break;
    default:
        printf("無此等第!");
        break;
    }

    return 0;
}
    

int main(){
    int grades;
    char s[20];
    printf("請輸入成績:");
    scanf("%d", &grades);

    strcpy(s, grades >= 60 ? "及格" : "不及格");
    printf("你的成績:%s",&s);

    return 0;

}
    
//for固定次數 while、do...while不固定次數迴圈
//for (變數初始值;條件判斷;增量值)  //初始值迴圈外宣告可省略，但分號不可

int main(){
    int i = 0;
    for (; i < 10; i++)
    {
        printf(" %d\n" , i);
    }

    return 0;
}
    

int main(){
    int sum = 1;
    for (int i = 1; i <= 5; i++)
    {
        sum *= i;
        printf("i = %d!,%d!=%d\n",i,i,sum);
    }
    
    return 0;
}
    

int main(){
    int sum = 0 , cost = 0;
    
    for (int i = 1; i <= 7; i++)
    {
        printf("週%d花費:", i);
        scanf("%d" , &cost);
        sum += cost;
    }
    printf("一週總花費為:%d元", sum);

    return 0;
}
    

int main(){
    for (int i = 1; i <= 5; i++)//外部迴圈執行5次
    {
        printf("外部第 %d 次迴圈, 內部執行 %d 次迴圈",i,i);
        for (int j = 1; j <= i; j++)//內部迴圈
        {
            printf("#");
        }
        printf("\n");
    }
    
    return 0;
}
    

//比較迴圈外及區塊變數內宣告的變數，並顯示該值。

int main(){
    int i = 100 , a = 10;
    for (int i = 1; i < 5; i += 2)
    {
        printf("區塊變數 i = %d , ", i);
        a++;
        printf("變數 a = %d\n", a);
    }
    printf("結束迴圈後的 i = %d, a = %d", i , a);

    return 0;
}
    

//while (條件判斷)
int main(){

int n = 1, sum = 0;
while (n <= 100)
{
    sum += n;
    n +=2;
}
printf("1+3+5+...+99= %d" , sum);
return 0;
}

//  do...while 先執行迴圈內的程式區塊後才執行條件判斷，稱「後測試迴圈」
//  do{
//  程式敘述;
//  ....
//  }while(條件判斷);    **密碼常用

//預設的密碼為「1234」，使用者若輸入的密碼錯誤，將不斷出現輸入密碼訊息，直到輸入的密碼正確才顯示正確訊息。

int main(){
    char password[30];
    do
    {
        printf("請輸入密碼:");
        scanf(" %s",&password);
    } while (strcmp(password,"1234"));
    printf("登入!");

    return 0;
}
    

//break指令用在迴圈

int main(){
    int  n;
    printf("輸入井字三角形的高(2-6)");
    scanf(" %d",&n);
    for (int i = 1; i <= 6; i++)
    {
        if (i > n)
        break;
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        
        printf("\n");
        }
        
        return 0;
}


//輸入大樓的樓層後，如果是三層以下，會正常顯示樓層命名;如果是四層(含)以上，顯示樓層命名時會跳過四樓不顯示。

int main(){
    int floor = 0,n;
    printf("請輸入本大樓的樓層:");
    scanf(" %d",&n);
    printf("本大樓具有的樓層為:");
    while (floor <= n)
    {
        floor ++;
        if (floor == 4)
        {
            continue;
        }

        printf("%d ",floor);
    }
    
    return 0;
}
    

//一維陣列宣告
//資料型別 陣列名稱 [陣列長度]; ex: int num[3];

int main(){
    int n [5];
    printf("int 陣列元素佔 %d 個位元組",sizeof(n[0]));
    printf("\n整個 int 陣列佔 %d 個位元組",sizeof(n));
    printf("\n陣列元素個數 %d",sizeof(n)/sizeof(n[0]));

    return 0;
}
    

//使用陣列儲存使用者輸入的各科成績，並計算總分顯示出來。

int main(){
    int grades [3] , sum = 0;
    printf("請輸入國文成績: ");
    scanf("%d",&grades[0]);
    sum += grades[0];
    
    printf("請輸入數學成績: ");
    scanf("%d",&grades[1]);
    sum += grades[1];

    printf("請輸入英文成績: ");
    scanf("%d",&grades[2]);
    sum += grades[2];

    printf("總分為: %d 分", sum);

    return 0;
}

//建立一個包含四個元素的整數陣列，讓使用者輸入四個數值，然後顯示所有輸入值及其中的最大數。

int main(){
    const int c = 4;
    int n[c] , 1;
    for (int i = 0; i < c; i++)
    {
        printf("請輸入第 %d 個數:", i+1 );
        scanf(" %d",&n[i]);
    }
    
    max = n[0];
    for (int i = 1; i < c; i++)
    {
        if(n[i] > max)
        {
            max = n[i];
        }
    }
    printf("輸入的數: ");
    for (int i = 0; i < c; i++)
    {
        printf("%d ",n[i]);
    }
    printf("\n最大數: %d\n",max);

    return 0;
    
}

//輸入客人購買貨品的價格，最多可輸入五件，如果輸入負數表示輸入結束，最後計算全部貨品總價。

int main()
{
    const int c = 5;
    int price[c] , sum = 0, i = 0 , n;

    do
    {
        if (i == c)
        {
            printf("輸入品項已達上限\n");
            
            break;
        }
    
        printf("請輸入第 %d 件商品:",i+1);
        scanf("%d",&price[i]);
        i++;
    
    } while (price[i-1] >= 0); //輸入負數表示結束
    n = i-1; //n為實際輸入件數
    for ( i = 0; i < n; i++) //計算總價
    {
        sum += price[i];
    }
    
    printf("總價: %d 元\n",sum);

    return 0;
}

//泡沫排序-建立一個整數陣列並設定初使值為班級成績，先顯示原始成績，再將成績由大到小排序後顯示出來。

int main()
{
    int score[] = {87, 78, 98, 65, 85, 72};
    int student = sizeof(score) / sizeof(score[0]);
    printf("排序前成績:\n");
    for (int i = 0; i < student; i++)
    {
        printf("%d ",score[i]);
    }
    
    for (int i = 0; i < student - 1; i++) //陣列排序  共跑幾輪
    {
        for (int j = 0; j < student - i - 1; j++)
        {
            if (score[j] < score[j + 1])
            {
                int x = score[j]; //交換
                int y = score[j + 1];
                score[j] = y;
                score[j + 1] = x;
            }
            
        }
        
    }
    
    printf("\n由大到小排序後\n");
    for (int i = 0; i < student; i++)
    {
        printf("%d ",score[i]);
    }
    
    return 0;
    
}

//循序搜尋 建立一個包含1000個數字的陣列，程式會檢查使用者輸入的數字是否在陣列中並顯示比對的次數。

int main()
{
    int array[1000] , num , i;
    int Isfound = 0;
    for ( i = 0; i < 1000; i++)
    {
        array[i] = 3*i+1;
        array[500+i] = 3*i+2;
    }
    
    printf("請輸入查詢數字:");
    scanf("%d",&num);
    for ( i = 0; i < 1000; i++)
    {
        if (array[i] == num)
        {
            Isfound = 1;
            i++;
            break;
        }
    }
    
    if (Isfound == 1)
    {
        printf("%d 在數字陣列中\n", num);
    }

    else
        printf("%d 不在數字陣列中\n", num);
    
    printf("共比對 %d 次",i);

    return 0;
}

//二分搜尋 與前例相同

int main()
{
    int array[1000],input,i;
    int Isfound = 0;

    for ( i = 0; i < 500; i++)
    {
        array[i] = 3*i+1;
        array[500+i] = 3*i+2;
    }
    
    printf("請輸入查詢數字:");
    scanf("%d",&input);
    
    for ( i = 0; i < 999; i++)
    {
        for ( int j = 0; j < 999-i;j++)
        {
            if (array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    int min,max,mid,search;
    min = 0;
    max = 999;
    search = 1;

    while (min <= max)
    {
        mid = (min + max) / 2;
        
        if (array[mid] == input)
        {
            Isfound = 1;
            search++;
            break;
        }
        
        search++;
        
        if (array[mid] > input)
        {
            max = mid - 1;
        }
        else
            min = mid + 1;
    }
    
    if (Isfound == 1)
    {
        printf("%d 在數字陣列中",input);
    }
    else
        printf("%d 不在數在陣列中",input);
    
    printf("\n(共比對 %d 次)", search-1);
    
    return 0;   
}

//建立一個二維陣列儲存所有業績，並計算每個業務員的總業績及統計每個月的業績總額。

int main()
{
    int sale[3][4] ={  {32000 , 87000 , 76000 , 100000},
                       {56000 , 12000 , 58300 , 67000},
                       {12000 , 43000 , 96000 , 80000} };
    int month[4],person [3];
    for (int i = 0; i < 4; i++)//計算各月的業績總額
    {
        month[i]=0;
        for (int j = 0; j < 3; j++)
        {
            month[i] += sale[j][i];           
        }
        printf("%d 月的業績總額為 %d 元\n" , i+1 , month[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        person [i] = 0;
        for (int j = 0; j < 4; j++)
        {
            person[i] += sale[i][j];           
        }
        printf("第 %d 位的業務員總額為 %d 元\n", i+1, person[i]);
    }
    
    return 0;
}

int main()
{
    char s[] = "learn C/C++",s2 = 'a' , s3[] = "a";
    printf("\"learn C/C++\"佔 %d 個位元組\n",sizeof(s));
    printf("\'a\' 佔 %d 個位元組\n",sizeof(s2));
    printf("\"a\" 佔 %d 個位元組\n",sizeof(s3));

    return 0;
}

//使用者輸入可包含空白字元的字串，顯示加密後的字串，加密的原則是將每個字元的ACS||碼加1。

int main()
{
    char pw[20];
    printf("請輸入密碼(可包含空白鍵): ");
    gets(pw);
    puts(pw);

    for (int i = 0; i < strlen(pw); i++)
    {
        pw[i]++;
        printf("%c",pw[i]);
    }
    
    return 0;
}

int main()
{
    char pw[20];
    printf("請輸入加密後的密碼: ");
    gets(pw);
    puts(pw);
    
    printf("解密後的密碼為: ");
    for (int i = 0; i < strlen(pw); i++)
    {
        pw[i]--;
        printf("%c",pw[i]);
    }
    
    return 0;
}

//讓使用者輸入三個學生名字，將名字存於字串陣列中，再逐一顯示陣列中學生姓名。

int main()
{
    char name[3][9];
    for (int i = 0; i < 3; i++)
    {
        printf("請輸入第 %d 個學生姓名: ",i+1);
        scanf("%8s",&name[i]);
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("第 %d 個學生姓名: %s",i+1 , name[i]);
    }
    
    return 0;
}

    void input(int n,int chinese,int math)
{
    printf("第 %d 位學生國文成績: ",n);
    scanf("%d",&chinese);
    printf("第 %d 位學生數學成績: ",n);
    scanf("%d",&math);
}

int main()
{
    int chi[3],mat[3];
    input(1, chi[0], mat[0]);
    input(2, chi[1], mat[1]);
    input(3, chi[2], mat[2]);

    return 0;
}

//建立華氏溫度轉攝氏溫度的函示，輸入華氏溫度就會顯示攝氏溫度。

float temperature(float value)
{
    return (value -32)*5/9;
}

int main()
{
    float value, result;
    printf("請輸入華氏溫度: ");
    scanf("%f",&value);
    result = temperature(value); //呼叫函式並傳回值給變數result
    printf("攝氏溫度: %.2f",result);
}

//自鍵盤輸入一個數字n，顯示1到n數字。
//void 函式名稱(參數列表) 
{
}

void num(int n)
{
    int i =1;
    while (1)
    {
        if (i > n)
        {
            return;
        }
        
        printf("%d ", i);
        i++;
}
}
int main()
{
    int n;
    printf("請輸入數字 n: ");
    scanf("%d",&n);
    num(n);
    printf("\n");

    return 0;
}

void add20(int);
int main()
{
    int a;
    printf("請輸入變數 a 的值:");
    scanf("%d",&a);
    printf("執行函式前主程式 a 的值: %d",a);

    add20(a);
    printf("\n執行函式後主程式變數 a 的值: %d",a);
    
    return 0;
}

void add20(int a) //參數值加20  
{
    printf("\n傳送給函式形式參數 a 的值: %d\n",a);
    a += 20;
    printf("\n函式中最後形式參數 a 的值: %d\n",a);
}

//以陣列儲存學生成績，再以陣列元素及整個陣列當作參數，使用函式來顯示個人或全部學生成績觀察陣列傳遞變化。

int main()    //未使用函式版(自己想的)
{
    int scores[] = {98,60,74,86,50,92};
    int a = sizeof(scores) / sizeof(scores[0]);
    int num;
    printf("輸入學生座號(1-6,0表示全部): " );
    scanf("%d" , &num);
    if (num == 0)
    {
        printf("全部學生的成績:");
        for (int i = 0; i < a; i++)
        {
            printf("%d ",scores[i]);
        }
    }
    else
        printf("%d 號學生成績: %d" ,num,scores[num-1]);
        
    return 0;
}

void showall(int a[], int);//顯示全部成績
void showone(int ,int);//顯示單一成績
int main()
{
    int scores[] = {98,60,74,86,50,92};
    int a = sizeof(scores) / sizeof(scores[0]);
    int num;
    printf("輸入學生座號(1-6,0表示全部): " );
    scanf("%d" , &num);
    if (num == 0)
    {
        showall(scores,a); //傳送陣列及元素個數
    }
    
    else    
        showone(num,scores[num-1]);

    return 0;
}

void showall(int a[], int n) //顯示全部學生成績
{
    printf("全部學生成績:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void showone(int num, int score) //顯示個別成績
{
    printf("%d 號學生成績: %d",num,score);
}

//以二維陣列儲存三位學生成績，再以整個陣列當作參數，使用函式來顯示全部學生的成績。

#define subject 6
void showall(int a[][subject],int n);
int main()
{int score[][subject]={ {98,82,76,89,68,91},
                       {88,54,79,90,85,67},
                       {94,69,65,73,91,82} };
int n = sizeof(score) / sizeof(score[0]);
showall(score,n);

return 0;
}

void showall(int a[][subject],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d 號學生成績: ",i+1);
        for (int j = 0; j < subject; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    const float pi = 3.14159; 
    float ang;
    printf("請輸入角度:");
    scanf("%f",&ang);
    printf("%.2f 度的正弦值為: %.2f\n",ang,sin(ang/180*pi));
    printf("%.2f 度的餘弦值為: %.2f\n",ang,cos(ang/180*pi));
    printf("%.2f 度的正切值為: %.2f\n",ang,tan(ang/180*pi));

    return 0;
}

//讓使用者輸入一個數值，程式會根據第一位小數做四捨五入取整數值。

int approximation(float);
int main()
{
    float x;
    printf("輸入一個浮點數(含小數): ");
    scanf("%f",&x);
    printf("%.2f 四捨五入的整數值為: %d\n",x,approximation(x));

    return 0;
}
int approximation(float x)
{
    return(x+0.5);
}


int main()
{
    srand((unsigned int)time(NULL));//以系統時間當亂數種子
    for (int i = 0; i <= 8; i++)
    {
        printf("%d ",rand());
    }
    
    printf("\n");
    return 0;
}

//以亂數來模擬骰子遊戲，使用者按下任意鍵就會以亂數產生1~6的點數，若單獨按下enter鍵則會結束。

int main()
{
    srand((unsigned int)time(NULL));
    int n;

    while (1)
    {
        printf("請按任意鍵骰骰子");
        char ch = getch();

        if (ch == '\r')
        {
            printf("遊戲結束\n");
            break;
        }
        
        else
        {
            n = 1 + rand() % (6-1+1);
            printf("點數為: %d 點\n",n);
        }
    }
    
    return 0;
}

//使用全域變數執行加分功能。

void add10();
void add20();
int score;//宣告全域變數

int main()
{
    
    printf("請輸入原始分數: ");
    scanf("%d",&score);
    add10();
    printf("加10分後分數為: %d 分\n",score);
    add20();
    printf("再加20分後分數為: %d 分\n",score);

    return 0;
}

void add10()
{
    score +=10;
}

void add20()
{
    score += 20;
}

//設定相同名稱的全域變數與區域變數，觀察其變數值的變化。
void local();
int score;
int main()
{
    score = 90;
    printf("全域變數 score 值為: %d\n",score);
    
    local();

    printf("全域變數 score 值為: %d\n",score);

    return 0;
}
void local()
{
    int score = 80;
    printf("區域變數 score 值為: %d\n",score);
}

//在不同函式中建立相同名稱的自動變數，觀察其變數值的變化。
void autol();
int main()
{
    int score = 100;
    printf("main()中自動變數 score 值: %d\n",score);
    autol();
    printf("autol()中自動變數 score 值: %d\n",score);
    printf("main()中自動變數 score 值: %d\n",score);
}

void autol()
{
    int score = 75;
    printf("autal()中自動變數 score 值: %d\n",score);
}

//計算偶數和，觀察靜態變數及自動變數的差異。

int sumauto(int n);
int sumstatic(int n);

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        printf("第 %d 次呼叫:\n",i);
        printf("自動變數: %d，",sumauto(i*2));
        printf("靜態變數: %d\n",sumstatic(i*2));
    }
    return 0;
}

int sumauto(int n) //自動變數函數
{
    int sum=0;
    sum += n;
    return sum;
}

int sumstatic(int n)//宣告靜態變數
{
    static int sum;
    sum += n;
    return sum;
}

//使用extern修飾詞，讓使用者以公分為單位輸入身高，將其換算為英呎。

void change(float);

int main()
{
    float meter;
    extern float ratio;
    printf("1 英呎相當於 %.2f公分\n",ratio);
    printf("請輸入身高的公分數: ");
    scanf("%f",&meter);

    change(meter);
    return 0;
}
float ratio = 30.48;
void change(float meter)
{
    printf("%.0f 公分換算為 %.2f 英呎\n",meter,meter / ratio);
}

//使用靜態外部變數執行加減法功能。

void plus();
void minus();
static int n1, n2 , result; //宣告靜態外部變數
int main()
{
    
    printf("請輸入第一個整數: ");
    scanf("%d",&n1);
    printf("請輸入第二個整數: ");
    scanf("%d",&n2);

    plus();
    printf("兩數和: %d\n",result);
    minus();
    printf("兩數差: %d\n",result);

    return 0;
}
void plus()
{
    result = n1 + n2;
}

void minus()
{
    result = n1 - n2;
}

//計算數量龐大巢狀迴圈的執行時間，說明暫存器變數較高的執行效率。

int main()
{
    register int i,j; //宣告暫存器變數
    float sum;
    time_t start , end; //宣告時間資料型態
    start =  time(NULL);//紀錄開始時間

    for ( i = 1; i <= 40000; i++)
    {
        for ( j = 1; j<= 4000; j++)
        {
            sum = sum + j;
            
        }
        end = time(NULL);//紀錄結束時間
    }

    printf("迴圈執行時間: %.3f 秒\n",difftime(end,start));//difftime為時間差函數

    return 0;
    
}

//自鍵盤輸入一個數字n，利用遞迴函式來計算n階層。

int factorial(int);
int main()
{
    int n;
    printf("請輸入一整數: ");
    scanf("%d",&n);
    printf("%d! = %d",n,factorial(n));

}

int factorial(int n)//計算階層
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);//遞迴呼叫
    }
}

//定義一個尋找較大數的巨集，讓使用者輸入兩個整數後顯示較大的數。

#define MAX(x,y) ((x) >(y)  ?   (x):(y)) //定義巨集
int main()
{
    int x,y;
    printf("請輸入整數: ");
    scanf("%d",&x);
    printf("請輸入整數: ");
    scanf("%d",&y);

    printf("大數為: %d",MAX(x,y));

    return 0;
}

 int main()
 {
    int x = 10;
    int y = 20;

    printf("變數 x 值 = %d ， 位址 = %x",x,&x);

    return 0;

 }

 //以指標顯示變數n位址和內容，再顯示指標的位址和內容。

  int main()
 {
    int n = 5;
    int *p = &n;
    printf("變數 n 的值: %d\n",n);
    printf("變數 n 的位址: %p\n",&n);

    printf("指標 p 的值: %p\n",p);
    printf("指標 p 的位址: %p\n",&p);

    return 0;
 }

 //以指標指向變數後，再改變指標內容指向另一個數。

 int main()
 {
    int n = 5, m = 8;
    int *p = &n;
    printf("指標指向變數 n 的位址:\n");
    printf("變數 n 的位址: %p\n",(void*)&n);
    printf("指標 p 值: %p\n",(void*)p);

    p = &m;
    printf("指標指向變數 m 的位址:\n");
    printf("變數 m 的位址: %p\n",(void*)&m);
    printf("指標 p 的值: %p",(void*)p);
    
    return 0;
 }

 //宣告整數變數 n=5，指標p指向n的位址，讓使用者輸入指標p指向的記憶體內容，再顯示整數變數n的值以觀察其變化。

 int main()
 {
    int n = 5;
    int *p =&n;

    printf("變數 n 的值: %d\n",n);
    printf("指標 p 指向的記憶體內容: %d\n",*p);

    printf("輸入指標 p 指向的記憶體內容: ");
    scanf("%d",&*p);
    
    printf("改變後變數 n 的值: %d",n);

    return 0;
 }

 //執行傳址呼叫函式，觀察參數傳遞前後變數值的變化。

 void add(int *);//加入函式原型宣告
 int main()
 {
    int a;
    printf("請輸入變數 a 的值: ");
    scanf("%d",&a);

    printf("執行函式前主程式變數 a 的值: %d\n",a);
    add(&a);
    printf("執行函式後主程式變數 a 的值: %d\n",a);

    return 0;
 }

 void add(int *a)
 {
    printf("傳送給函式形式參數 a 的值: %d\n",*a);
    *a += 20;
    printf("函式中最後形式參數 a 的值: %d\n",*a);
 }

 //執行傳值呼叫及傳址呼叫的函式，觀察參數傳遞前後變數值的變化。

 void add20(int , int *);
 int main()
 {
    int a = 50 , b = 50;
    printf("執行函式前主程式變數 a= %d , b= %d\n",a,b);
    add20(a , &b);
    printf("執行函式後主程式變數: a = %d, b = %d",a,b);

    return 0;
 }

 void add20(int a, int *b)
 {
    printf("傳送給函式形式參數 a = %d, b = %d\n",a,*b);
    a += 20;
    *b +=20;
    printf("函式中最後形式參數: a = %d, b = %d\n",a,*b);
 }

 //使用回傳指標函式將傳入的參數值加20後傳回。

 int *add20(int *);
 int main()
 {
    int a,*p;
    printf("請輸入變數 a 的值: ");
    scanf("%d",&a);
    p=add20(&a);
    
    printf("執行函式後變數 a 的值: %d",*p);
   
    return 0;
 }

 int *add20(int *a)
 {
    *a += 20;
    return a;
 }  

 //將int及double指標變數作加減運算，觀察指標變數的記憶體變化。 8/19

 int main()
 {
    int n = 5;
    double d = 5.4;
    int *p1=&n;
    printf("int 型別指標 p1 位址: %p\n",(void*)p1);
    printf("++p1 位址: %p\n",(void*)(++p1)); //指標變數加1，右移4Bytes
    printf("--p1 位址: %p\n",(void*)(--p1));
    printf("p1+=3 位址: %p\n",(void*)(p1 += 3));//右移12Bytes

    double *p2=&d;
    printf("double 型別指標 p2 位址: %p\n",(void*)p2);
    printf("++p2 位址: %p\n",(void*)++p2); 
    printf("--p2 位址: %p\n",(void*)--p2); //指標變數-1，左移8Bytes
    printf("p2+=3 位址: %p\n",(void*)(p2 += 3));//右移24Bytes

    return 0;
 }

//宣告一整數陣列，顯示陣列元素的位址。

int main()
{
    int n[3] = {99,88,77};
    
    printf("陣列 n 的位址: %p\n",(void*)n);
    printf("陣列元素 n[0] 的位址: %p\n",(void*)&n[0]); //必須使用&顯示元素地址，使用n[0]是強制轉型(void*)，編輯器會警告「把一個整數當指標轉型」
    printf("陣列元素 n[1] 的位址: %p\n",(void*)&n[1]);
    printf("陣列元素 n[2] 的位址: %p\n",(void*)&n[2]);

    return 0;
}

//定義三個元素的整數一維陣列，讓使用者輸入三位學生的成績存於陣列中，以指標取得陣列元素值並計算總分。

int main()
{
    int scores[3];
    printf("請輸入第一位同學成績: ");
    scanf("%d",&scores[0]);
    printf("請輸入第二位同學成績: ");
    scanf("%d",&scores[1]);
    printf("請輸入第三位同學成績: ");
    scanf("%d",&scores[2]);

    int sum = 0;
    
    for (int i = 0; i < 3; i++)
    {
        sum += *(scores+i);
    }
    
    printf("班級總成績: %d" ,sum);

    return 0;
}

//定義三個元素的整數一維陣列，讓使用者輸入三位學生的成績存於陣列中，以指標變數取得陣列元素值以計算總分。
#define N 3

int main()
{
    int socres[N];
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        printf("請輸入第%d位學生成績: ",i+1);
        scanf("%d",&socres[i]);
        sum += *(socres+i);
    }
    printf("班級總成績: %d分\n",sum);

    return 0;
}

//教師輸入完成績後，才發現誤將80輸入為82，以陣列當作參數，將成績陣列中所有82都替換為80。
void showall(int *,int );
void replace(int *,int ,int ,int );
int main(void)
{
    int scorenum , modnum;
    int scores[] = {98,82,76,89,82,91,82,75};
    int size = sizeof(scores) / sizeof(scores[0]);
    printf("被更換的成績: ");
    scanf("%d",&scorenum);
    printf("被更換後的成績: ");
    scanf("%d",&modnum);
    
    printf("至換錢全體成績: ");
    showall(scores,size);

    replace(scores,scorenum,modnum,size);
    printf("置換後全體成績: ");
    showall(scores,size);

    return 0;
}
void showall(int *a,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(a+i));
    }
    
    printf("\n");
}
void replace(int *a,int s,int m,int n) 
{
    for (int i = 0; i < n; i++)
    {
        if (*(a+i) == s)
        {
            *(a+i) = m;
        }
        
    }
    
}

//定義一為字元陣列，分別以陣列與指標方式取得陣列元素內容。

int main()
{
    char s[]="JOE";
    printf("以陣列方式顯示 s 字串\n");
    for (int i = 0; i < 3; i++)
    {
        printf("s[%d] = %c\n",i,s[i]);
    }
    
    printf("以指標方式顯示 s 字串\n");
    for (int i = 0; i < 3; i++)
    {
        printf("*(s+%d) = %c\n",i,*(s+i));
    }

    return 0;
}

//當字元陣列內容增加後會覆蓋另一字元的內容，分別顯示兩字元陣列覆蓋前即覆蓋後的位址與內容。

int main()
{
    char s1[]="note";
    char s2[20]="book";

    printf("字串原始內容:\n");
    printf("s1:儲存位址= %p ，內容= %s\n",(void*)s1,s1);
    printf("s2:儲存位址= %p ，內容= %s\n",(void*)s2,s2);
    
    printf("s2 字串內容改變後:\n");
    strcpy(s2,"dfgjfkjgre");
    printf("s1:儲存位址= %p ，內容= %s\n",(void*)s1,s1);
    printf("s2:儲存位址= %p ，內容= %s\n",(void*)s2,s2);

    return 0;
}

//分別使用二維字元陣列及指標陣列建立字串陣列並初始化，顯示兩者的字串內容及位址，以便觀察使用的記憶體狀況。

int main()
{
    char fruit1[3][11]={"apple","watermelon","banana"};
    char *fruit2[3]={"apple","watermelon","banana"};

    printf("二維字元陣列:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("第 %d 個元素: %s，",i+1,fruit1[i]);
        printf("所佔位址: %p\n",(void*)fruit1[i]);
    }
    
    printf("指標陣列:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("第 %d 個元素: %s，",i+1,*(fruit2+i));
        printf("所佔位址: %p\n",(void*)fruit2[i]);
    }
    
    return 0;
}

//建立整數雙重指標，顯示整數變數、指標變數及雙重指標的位址及內容。

int main()
{
    int n =5;
    int *p=&n;
    int **pp=&p;

    printf("整數變數 n: 位址 = %p ，內容 = %d\n",(void*)&n,n);
    
    printf("指標變數 p: 位址 = %p ，內容 = %p\n",(void*)&p,(void*)p);
    printf("      指向變數值 =%d\n",*p);

    printf("雙重指標 pp: 位址 = %p ，內容 =%p\n",(void*)&pp,(void*)pp);
    printf("   指向指標變數值 =%p，指向變數值 =%d\n",*pp,**pp);
}

//建立二維整數陣列，顯示陣列名稱(雙重指標)、指標變數及陣列元素的位址及內容。

int main()
{
    int n[2][3]={{11,12,13},{21,22,23}};

    printf("n: 位址=%p，內容=%p\n",(void*)&n,n);
    printf("n[0]: 位址=%p，內容=%p\n",(void*)&n[0],n[0]);
    printf("n[1]: 位址=%p，內容=%p\n",(void*)&n[1],n[1]);
    printf("n[0][0]: 位址=%p，內容=%d\n",(void*)&n[0][0],n[0][0]);
    printf("n[0][1]: 位址=%p，內容=%d\n",(void*)&n[0][1],n[0][1]);
    printf("n[0][2]: 位址=%p，內容=%d\n",(void*)&n[0][2],n[0][2]);
    printf("n[1][0]: 位址=%p，內容=%d\n",(void*)&n[1][0],n[1][0]);
    printf("n[1][1]: 位址=%p，內容=%d\n",(void*)&n[1][1],n[1][1]);
    printf("n[1][2]: 位址=%p，內容=%d\n",(void*)&n[1][2],n[1][2]);

    return 0;
} 

//以指標方式存取二為整數陣列，尋找陣列元素中的最大值及最小值。 8/20

int main()
{
    int n[2][3]={ {11,12,13} , {21,22,23}};
    int max,min;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 0 && j == 0)
            {
                max =n[0][0];
                min =n[0][0];
            }
            
            else
            {
                if (*(*(n+i)+j) > max ) 
                {
                    max = *(*(n+i)+j);
                }
                
                if (*(*(n+i)+j) < min)
                {
                    min = *(*(n+i)+j);
                }
            }
        }
    }
    printf("陣列中最大值: %d\n",max);
    printf("陣列中最小值: %d\n",min);

    return 0;
}

//以動態配置記憶體方式輸入兩個整數，計算其成績後顯示結果，並釋放指標變數配置的記憶體空間。

int main()
{
    int *p1 =(int *) malloc(sizeof(int)); //動態配置 *p1指標
    int *p2 =(int *) malloc(sizeof(int));

    printf("輸入第一個數: ");
    scanf("%d",p1);
    printf("輸入第二個數: ");
    scanf("%d",p2);

    printf("%d * %d = %d",*p1,*p2,(*p1) * (*p2));
    free(p1);
    free(p2);
    
    return 0;
}

//讓使用者輸入一個英文單字，使用動態陣列將大寫字母轉為小寫字母，小寫字母轉為大寫字母，其餘字元不便。

int main()
{
    char *p =malloc(31*sizeof(char));//最多30個字母

    printf("輸入英文字母: ");
    scanf("%30s",p); //%30s 多加30防溢位

    int n =strlen(p);

    for (int i = 0; i < n; i++)
    {
       //  if (*(p+i) >= 'A' && *(p+i) <= 'Z')
        //{
        //    *(p+i) += 32;
        //}
        //else if (*(p+i) >= 'a' && *(p+i) <= 'z')
        //{
        //    *(p+i) -= 32;
        //} 
       if (isupper(p[i]))
       {
            p[i] = tolower(p[i]);
       }
       else if (islower(p[i]))
       {
            p[i] = toupper(p[i]);
       }
       
    }
    
    printf("%s\n",p);
    free(p);

    return 0;
}

//定義student結構，以student結構建立結構變數David，並顯示結構中的成員。 8/22

struct  student //定義結構
{
    int id;
    char name[8];
    int chinese,math,english;
};
    
int main()
{
    //宣告結構變數並初始化
    struct student Edward = {97056,"Edward",80,98,100};
    {
        printf("學號: %d\n",Edward.id);
        printf("姓名: %s\n",Edward.name);
        printf("國文: %d\n",Edward.chinese);
        printf("數學: %d\n",Edward.math);
        printf("英文: %d\n",Edward.english);

        return 0;
    };
    
}

//定義巢狀結構data，結構中以另一個data結構紀錄生日。

struct date //定義結構date
{
    int month,day;
};

int main()
{
    struct data //定義巢狀結構data
    {
        char name[8];
        struct date birthday;        
    }stu={"Edward",{05,06}}; //建立結構變數 stu
    
    printf("姓名: %s\n",stu.name);
    printf("生日: %d 月 %d 日 \n",stu.birthday.month,stu.birthday.day);

    return 0;
}

//以student成員當作參數傳遞，並以傳值和傳址呼叫觀察參數變化。

struct student //定義結構
{
    char name[10];
    int chinese;
};

void showall(char[], int);
void setscore(int *);

int main()
{
    struct student Edward = {"王琮翔",60}; //宣告結構變數並初始化
    showall(Edward.name,Edward.chinese);
    setscore(&Edward.chinese);
    printf("\n國文補考後\n");
    showall(Edward.name,Edward.chinese);
    
    return 0;
}

void showall(char name[],int score)
{
    printf("姓名: %s\n",name);
    printf("國文: %d\n",score);
}

void setscore(int *score)
{
    *score=90; //補考後成績
}*/

//以student結構當作參數傳遞，觀察參數變化。

struct student
{
    char name[10];
    int chinese;
};

void show(char[],int);
void setscore(struct student);

int main()
{
    struct student Edward = {"王琮翔",60}; //宣告結構變數並初始化
    show(Edward.name,Edward.chinese);
    setscore(Edward);
    printf("\n國文補考後\n");
    show(Edward.name,Edward.chinese);

    return 0;
}

void show(char name[],int chinese)
{
    printf("姓名: %s\n",name);
    printf("國文: %d\n",chinese);
}

void setscore(struct student stu)
{
    stu.chinese = 60;
}
