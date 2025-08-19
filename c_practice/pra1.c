
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <time.h>
/*
//型別轉換
// 設計程式輸入三天的支出後，會自動計算其支出總額及平均


int main()
{
    int day1 , day2 , day3;
    printf("請輸入第一天的支出:");
    scanf("%d" , &day1);
    printf("\n請輸入第二天的支出:");
    scanf("%d" , &day2);
    printf("\n請輸入第三天的支出");
    scanf("%d" , &day3);
    int sum = day1 + day2 + day3;
    float av = (float) sum/3; 
    printf("您的總支出為 %d 元，平均每天支出 %f 元",sum , av);

    return 0;
}


//計算成績
//設計程式輸入三科成績後，會自動計算其總分級平均



int main()
{
    int ch , eng , math;
    printf("請輸入國文成績:");
    scanf("%d" , &ch);
    printf("\n請輸入英文成績:");
    scanf("%d", &eng);
    printf("\n請輸入數學成績:");
    scanf("%d" , &math);
    int sum = ch + eng + math;
    float av = (float) sum / 3;
    printf("您的總分為: %d 分 \n平均為: %d 分", sum , av);

    return 0;
}



//常數

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    const double PI = 3.1416;
    float r;
    printf("輸入圓形半徑:");
    scanf("%f", &r);
    float area = r * r * PI;
    printf("\n圓形的面積為:%f", area);
    
    return 0;
}

//  a = 8，觀察(a--)+5 and (--a)+5 diiffernt

int main(){
    int a = 8;
    printf("a = %d\n" , a);
    printf("(a--) + 5 = %d\n", (a--) + 5 );
    a = 8;
    printf("(--a) + 5 =%d\n", (--a) + 5);

    return 0;

}
    


//輸入兩數比較大小

int main(){
    int a , b;
    printf("請輸入一整數a:");
    scanf("%d" , &a);
    printf("請輸入一整數b:");
    scanf("%d" , &b);

    printf("a > b 的結果為:%d\n" , (a > b));
    printf("a = b 的結果為:%d\n" , (a == b));
    printf("a < b 的結果為:%d\n" , (a < b));

    return 0;


}
    


//以複合指定運算子設計程式，讓使用者輸入任意數，程式會顯示該數的平方。

int main(){
    float a;
    printf("請輸入任意數:");
    scanf("%f" , &a);
    float square = a;
    square *= square;
    printf("%f的平方為:%f" , a , square);

    return 0;
}
    
    

//讓使用者輸入3個數，程式會輸出其中最大的數。

int main(){
    int a , b , c;
    char s[50];
    printf("請輸入第一個整數:");
    scanf("%d" , &a);

    printf("請輸入第二個整數:");
    scanf("%d" , &b);

    printf("請輸入第三個整數:");
    scanf("%d" , &c);

    strcpy(s, 
            (a >= b && a >= c) ? "第一個數最大":
            (b >= a && b >= c) ? "第二個數最大":
                                 "第三個數最大"
        );
    printf("輸入三個數中最大的數為: %s\n" , s);

    return 0;

}
    

//有180個雞蛋，每打賣50元，撰寫程式計算共可賣多少元?

int main(){
    int a;
    a = (180/12) *50;
    printf("總共: %d元",a);

    return 0;
}
    

//目前歐元兌換新台幣為1:43.5，讓使用者輸入歐元數，程式會顯示換算新台幣的數目。
int main(){
    float a;
    printf("請輸入你的歐元數量:");
    scanf("%f" , &a);
    printf("換算成新台幣為: %f 元" , a*43.5);

    return 0;
}



//讓使用者輸入一個任意數，程式會顯示此數的立方值。
int main(){
    float x;
    printf("請輸入任意數:");
    scanf("%f" , &x);
    printf("%f的立方值為:%f",x,x*x*x);

    return 0;
}


//讓使用者輸入三科成績，計算其總分級平均後顯示。

int main(){
    int gra1 , gra2 , gra3 , sum = 0;
    printf("請輸入第一科成績:");
    scanf("%d", &gra1);
    sum += gra1;
    
    printf("請輸入第二科成績:");
    scanf("%d", &gra2);
    
    sum += gra2;
    printf("請輸入第三科成績:");
    scanf("%d", &gra3);
    sum += gra3;
    
    float av = (float)sum / 3;

    printf("你的總分為: %d分\n  平均分為: %f分", sum , av);

    return 0;
}
    

//讓使用者輸入國文成績，利用三元運算子撰寫程式顯示該成績是否及格。

int main(){
    int chinese;
    char s[30];
    
    printf("請輸入國文成績:");
    scanf("%d",&chinese);

    strcpy(s, chinese >= 60 ? "成績及格，恭喜" : "成績不及格，再加油");
    printf("%s" , s);

    return 0;
}



//讓使用者輸入梯形的上底、下底及高，程式會計算梯形的面積。

int main(){
    float up , down , high , area = 0;
    
    printf("請輸入上底:");
    scanf("%f" , &up);

    printf("請輸入下底:");
    scanf("%f" , &down);

    printf("請輸入高:");
    scanf("%f" , &high);

    area = (up + down)*high/2;

    printf("梯形的面積為: %f" , area);

    return 0;

}




//變數a、b、c的初始值為，「a=8,b=3,c=9」，撰寫程式執行「a=a+++(a-b)*(c-b)後，顯示變數a、b、c的值。

int main(){
    int a=8 , b=3 , c=9;
    a = a+++(a-b)*(c-b);
    printf("a= %d , b= %d , c= %d" , a , b , c );

    return 0;
}



//讓使用者輸入任意整數，程式會顯示其是否為3的倍數。

int main(){
    int a;
    char s[30];

    printf("請輸入任意整數:");
    scanf("%d" , &a);

    strcpy(s,a%3 == 0 ? "此數為3的倍數" : "此數非3的倍數");
    printf("%s",s);

    return 0;
}



//讓使用者輸入密碼，如果輸入的密碼正確(1234)，會顯示「歡迎光臨!」;如果輸入的密碼錯誤，則不會顯示歡迎訊息。

int main(){
    int password;
    printf("請輸入密碼:");
    scanf("%d" , &password);

    if (password == 1234)
    {
        printf("歡迎光臨!");

    }
    
    return 0;
}


//讓使用者輸入密碼，如果入的密碼正確(1234)，會顯示「歡迎光臨!」;如果輸入的密碼錯誤，則會顯示密碼錯誤訊息。

int main(){
    int password;
    printf("請輸入密碼:");
    scanf("%d" , &password);

    if (password == 1234)
    {
        printf("歡迎光臨!");

    }
    
    else
    {
        printf("密碼錯誤!");
    }

    return 0;
}
    
//讓顧客輸入購買金額，若金額在100000元以上就打八折，金額在50000元以上就打八五折，金額在30000元以上就打九折，金額在10000元以上就打九五折。

int main(){
    int cost;
    printf("請輸入購買金額:");
    scanf("%d", &cost);

    if (cost >= 100000)
    {
        printf("實付金額:%.2f" ,(float) cost*0.8);
    }

    else if(50000 <=  cost && cost < 100000 )
    {
        printf("實付金額:%.2f" ,(float) cost*0.85);
    }
    
    else if(30000 <= cost  && cost < 50000)
    {
        printf("實付金額:%.2f" ,(float) cost*0.9);
    }

    else if (10000 <= cost && cost < 30000)
    {
        printf("實付金額:%.2f" ,(float) cost*0.95);
    }
    
    else
    {
        printf("實付金額:%d",cost);
    }

    return 0;
}


//讓使用者輸入加減乘除運算以，就會顯示運算結果。

int main(){
    int a = 6 , b = 4;
    char op;
    printf("請輸入要執行的運算(+-* /)");
    scanf(" %c",&op);

    switch (op)
    {
    case '+':
        printf("a+b=%d",a + b);
        break;

    case '-':
        printf("a-b=%d",a - b);
        break;

    case '*':
        printf("a*b=%d",a * b);
        break;
        
    case '/':
        printf("a/b=%d",a / b);
        break;    
    default:
        printf("無法執行運算");
        break;
    }

    return 0;
}



//讓使用者輸入月份，就會顯示該份的天數。

int main(){
    int month;
    printf("請輸入月份:");
    scanf("%d", &month);

    switch (month)
    {
    case 1:  //31天的月份
    case 3:
    case 5:
    case 7:
    case 10:
    case 12:
        printf("%d月份有31天", month);
        break;
    
    case 4:  //30天的月份
    case 6:
    case 9:
    case 11:
        printf("%d月份有30天" , month);
        break;

    case 2:  //28天的月份
        printf("%d月份有28天", month);
        break;
    default:
        break;
    }

    return 0;
}

//讓使用者輸入成績，若成績在90分以上就顯示「優等」，80-89分顯示「甲等」，70-79分顯示「乙等」，60-69分顯示「丙等」，60分以下顯示「丁等」。

int main(){

    int grades;
    printf("請輸入成績:");
    scanf("%d",&grades);

    grades = grades / 10;
    switch (grades)
    {
    case 10:
        printf("優等");
        break;
    case 9:
        printf("優等");
        break;
    case 8:
        printf("甲等");
        break;
    case 7:
        printf("乙等");
        break;
    case 6:
        printf("丙等");
        break;
    default:
        printf("丁等");
        break;
    }

    return 0;
}
    

//利用兩層迴圈列印九九層法表

int main(){
    int sum = 0;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            sum = i*j;
            printf("%d*%d= %d  ",i,j,sum);
        }
        printf("\n");
    }
    
    return 0;
}


//迴圈在第一次檢查就發現條件不成立，將直接離開迴圈，且顯示迴圈記數器得值。

int main(){
    int i = 1;
    for ( i = 6; i <= 3 ; i++)
    {
        printf("此訊息表示迴圈有被執行");
    }
    printf("結束迴圈後i的值為%d", i);

    return 0;
}
    

//for迴圈執行完畢後顯示記數變數的值。

int main(){
    int i;
    for (i = 1; i <=16; i += 3)
    {
        printf(" %d ",i);
    }
    printf("\n結束迴圈後的i值為: %d", i);

    return 0;
}
    

//顯示1-100之間所有15的倍數。

int main(){
    int n = 15;
    while (n <= 100)
    {
        printf(" %d",n);
        n += 15;
    }

    return 0;

    int n = 1;
    while (n <= 100)
    {
        if (n % 15 ==0)
        {
            printf(" %d",n);
        }
        n++;
    }
    return 0;
}
    

//讓使用者輸入一個整數，會顯示此數否為5的倍數，接著會詢問使用者是否繼續輸入數字，直到使用者輸入0才結束程式。

int main(){
    int a, cont;
    
    do
    {
        printf("請輸入一整數:");
        scanf("%d",&a);

        if (a % 5 == 0)
        {
            printf("此數是5的倍數");
        }
        else
        {
            printf("次數不是5的倍數");
        }
        
        printf("是否繼續?(是請按1，否請按0)");
        scanf("%d" , &cont);
    } while (cont == 1);
    printf("已結束");
    return 0;
}


//以break指令讓使用者輸入整數，以此整數模仿九九乘法表顯示乘法表。

int main(){
    int sum = 0, n;
    printf("請輸入一整數:");
    scanf(" %d",&n);
    for (int i = 1; i <= 9; i++)
    {
        if (i > n)
        {
            break;
        }
        
        for (int j = 1; j <= 9; j++)
        {
            sum = i*j;
            printf(" %d* %d= %d",i,j,sum);
        }
        printf("\n");
    }
    
    return 0;
}   
    

//請列出1-30中是2or3的倍數，但不是2和3的公倍數整數。

int main(){
    int n = 1;
    while (n <= 30)
    {
        if (n % 2 == 0 && n % 3 ==0)
        {
            n ++;
            continue;
        }
        
        if (n % 2 ==0 || n % 3 ==0)
        {
            printf(" %d",n);
        }
        n ++;
        
    }
    
    return 0;
}
    

// 宣告一個含9個元素的double陣列，顯示整個double陣列及陣列中個別元素所佔的記憶體大小，與陣列中的元素個數。

int main(){
    double n[9];
    printf("double陣列元素佔 %d 個位元組",sizeof(n[0]));
    printf("\n整個double陣列佔 %d 個位元組",sizeof(n));
    printf("\n陣列元素個數: %d",sizeof(n) / sizeof(n[0]));

    return 0;
}

//幸運數字:建立一個包含三個元素的整數陣列並設定初值，代表個人最喜愛的三個幸運數字，再依序顯示出來。

int main(){
    int lucky_num [3];
    printf("我的第一個幸運數字:");
    scanf(" %d",&lucky_num[0]);

    printf("我的第二個幸運數字:");
    scanf(" %d",&lucky_num[1]);
    
    printf("我的第三個幸運數字:");
    scanf(" %d",&lucky_num[2]);

    int lucky_num[3] = {24,56,30};
    printf("我的幸運數字: %d",lucky_num[0]);
    printf("\n我的幸運數字: %d",lucky_num[1]);
    printf("\n我的幸運數字: %d",lucky_num[2]);

    return 0;
} 

//尋找最小值:建立一個包含四個元素的整數陣列，讓使用者輸入四個數值，然後顯示其中的最小數。

int main(){
    const int c = 4;
    int n[c] , min;

    for (int i = 0; i < c; i++)
    {
        printf("請輸入第 %d 個數值: ",i+1);
        scanf(" %d", &n[i]);
    }
    
    min = n[0];
    for (int i = 1; i < c; i++)
    {
        if (n[i] < min)
        {
            min = n[i];
        }
    }

    printf("輸入的四個數值: ");
    for (int i = 0; i < c; i++)
    {
        printf("%d ",n[i]);
    }
    
    printf("\n最小數: %d\n",min);

    return 0;
}

//成績計算:輸入學生成績，最多可輸入四位學生，如果輸入負數表示結束，最後計算全班幾分。

int main()
{
    const int c = 4;
    int student[c],sum = 0,i = 0, n;

    do
    {
        if (i == c)
        {
            printf("已達輸入上限\n");
            i++;
            break;
        }
        
        
        printf("輸入第 %d 位學生成績: ", i+1);
        scanf("%d",&student[i]);
        i++;

    } while (student[i-1] >= 0);

    n = i-1;//共幾位學生
    for ( i = 0; i < n; i++)
    {
        sum += student[i];
    }
    
    printf("班級總分: %d 分",sum);

    return 0;
}

//讓使用者輸入任意個整數的數值序列，程式會將此數值序列由小到大排序後顯示。

int main()
{
    int input;
    printf("請輸入要排序的數值個數:");
    scanf("%d",&input);
    
    int array[input];
    for (int i = 0; i < input; i++)
    {   
        printf("請輸入第 %d 個數值:", i+1);
        scanf(" %d",&array[i]);
    }
    
    printf("你輸入的數值分別為:");
    for (int i = 0; i < input; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    for (int i = 0; i < input - 1; i++)
    {
        for (int j = 0; j < input - i - 1; j++)
        {
            if (array[j] > array [j+1])
            {
                int temp = array[j];
                array[j] = array [j+1];
                array[j+1] = temp;
            }
        }
    }
    
    printf("由小到大排列後:\n");
    for (int i = 0; i < input; i++)
    {
        printf(" %d",array[i]);
    }
    
    return 0;
}

//建立一整數陣列num[]={5,67,45,98,7,34,72,52,92,10}，讓使用者輸入一整數，以二分搜尋方法檢查該整數是否存在於陣列中，並顯示查詢結果。

int main()
{
    int num[]={5,67,45,98,7,34,72,52,92,10};
    int n = sizeof(num) / sizeof(num[0]);
    int s;
   
    for ( int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (num[j] > num[j+1])
            {
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    printf("排序:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ,",num[i]);
    }
    printf("\n請輸入要搜尋的數:");
    scanf("%d",&s);
    int max,min,mid;
    min = 0;
    max = n-1;
    int times = 1;
    int Isfound = 0;
    while (min <= max)
    {
        mid = (min+max) / 2;
        if (num[mid] == s)
        {
            Isfound = 1;
            break;
        }
       
       

        if (num[mid] > s)
        {
            max = mid - 1;
        }
        
        else
            min = mid + 1;
        times++;
    }
    

    if (Isfound == 1)
    {
        printf("%d 在陣列中",s);
    }

    else
        printf("%d 不在陣列中",s);
    
    printf("共比對 %d 次",times);

    return 0;
}

//建立一個2x3的二維陣列並初始化，用來儲存輸入的兩個學生各三科成績，再以兩層巢狀迴圈將所有成績顯示出來。

int main(){
    int grades [2][3] = { {85 , 82 , 90},
                          {76 , 95 , 89} };
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("第 %d 位學生第 %d 科成績: %d 分\n",i+1 , j+1 , grades[i][j]);
        }
    }

    return 0;
}

//建立一個二維陣列並初始化，其中儲存三個學生姓名，逐一顯示陣列中的學生姓名。

int main()
{
    char name[3][10] ={"王琮翔","良狗子","大口袋"};
    for (int i = 0; i < 3; i++)
    {
        printf("第 %d 個學生的姓名: %s\n",i+1,name[i]);
    }
    
    return 0;
}

//建立攝氏溫度轉華氏溫度的函式，輸入攝氏溫度就會顯示華氏溫度。

float temperature(float value)
{
    return  value*9/5+32;
}

int main()
{
    float value, temp;
    printf("請輸入攝氏溫度: ");
    scanf("%f",&value);
    temp = temperature(value);
    printf("華氏溫度: %.2f",temp);

    return 0;
}

//使用for無窮迴圈及return指令，讓使用者輸入一個偶數，計算2到輸入偶數間所有偶數的總和。

int compu(int even)
{
    int sum = 0;
    for (int i = 2;; i+=2)
    {
        if (i > even)
        {
            break;
        }
        sum += i;
    }
    return sum;
}
int main()
{
    int even;
    printf("請輸入大於2的偶數: ");
    scanf("%d",&even);
    
    if (even <= 2 || even % 2 != 0)
    {
        printf("輸入錯誤，請輸入大於2的偶數");
        
        return 1; //end 
    }

    int total = compu(even);
    printf("2+4+...+ %d = %d",even,total);

    return 0;

}

//以陣列儲存學生成績，在函式內修改成績在於主程式中顯示，以觀察陣列元素值的變化

void newscore(int score[] ,int seat);//更改成績的函式
int main()
{
    int scores[] = {65,20,100,92,88,75};//學生成績
    int n = sizeof(scores) / sizeof(scores[0]);//共幾位
    int seat;//要修正的座號
    printf("輸入要修改成績的座號(1-6): ");
    scanf("%d", &seat);

    printf("%d 號學生原始成績: %d",seat,scores[seat - 1]);

    newscore(scores,seat);
    printf("%d 號學生新成績: %d",seat,scores[seat-1]);
    return 0;
}

void newscore(int score[],int seat)
{
    printf("\n輸入 %d 號學生的新成績: ",seat);
    scanf("%d",&score[seat-1]);
}

//以陣列「int score[] = {98,82,76,89,68,91};」儲存學生成績，撰寫顯示成績及成績排序的函式，將成績由小到大排序後顯示。

void scores(int a,int score[]);
int main()
{
    int score[] = {98,82,76,89,68,91};
    int n = sizeof(score) / sizeof(score[0]);

    scores(n,score);

    return 0;
}

void scores(int a,int score[])
{
    printf("未排列過成績: ");

    for (int i = 0; i < a; i++)
    {
        printf("%d ",score[i]);
    }
    
    for (int i = 0; i < a-1; i++)
    {
        for (int j = 0; j < a-i-1; j++)
        {
            if (score[j] > score[j+1])
            {
                int temp = score[j];
                score[j] = score[j+1];
                score[j+1] = temp;
            }
        }
    }

    printf("\n由小到大排序後陣列: ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",score[i]);
    }
    
    printf("\n");
}

// 請撰寫一個函式 void sortDescending(int arr[], int n);，該函式功能是將整數陣列 arr 中的元素由大到小排序。
接著在主程式中：
1.宣告一個整數陣列，隨意放入 6 個不重複的整數。
2.呼叫排序函式將陣列由大到小排序。
3.印出排序後的陣列。

void turn(int n,int array[]);
int main()
{
    int nums[] = {34, 12, 45, 2, 67, 29}; //宣告陣列數
    int n = sizeof(nums) / sizeof(nums[0]);//陣列元素

    printf("排序前的陣列為: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",nums[i]);
    }
    printf("\n");

    turn(n,nums);

    return 0;
}

void turn(int n,int array[])
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (array[j] < array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    
    printf("排序後的陣列為: ");
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}

//以二維陣列int score[][6] = { {98,82,76,89,68,91},儲存三位學生成績，在以整個陣列當作參數，使用函式尋找全部學生成績中最高分數並顯示。
                              //{88,54,79,90,85,67},
                              //{94,61,65,73,91,82} };

void high(int score[][6], int n);
int main()
{
    int score[][6] = { {98,82,76,89,68,91},
                       {88,54,79,90,85,67},
                       {94,61,65,73,91,82} };
    int n = sizeof(score) / sizeof(score[0]);
    high(score,n);

    printf("\n");

    return 0;
}

void high(int score[][6], int n)    
{
    int max = score[0][0]; 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 6;j++)
        {
            if (score[i][j] > max)
            {
                max = score[i][j];
            }
        }
    }
    printf("全部成績中最高分數: %d分",max);    
}*/

//讓使用者輸入一個數值，程式會顯示自然對數及以10為底對數值。

/*double log_(int x)
{
    return(log(x) / log(10));
}
    int main()
    {
        int input;
        printf("請輸入一個數值: ");
        scanf("%d",&input);
        printf("%d 的以10為底對數值為: %.4f\n",input,log10(input));
        printf("%d 的自然對數值為: %.4f",input,log(input));
        return 0;
    }


//先用產生一個1~10的亂數作為解答，讓使用者輸入猜測數值，程式會顯示太大或太小的提示，直到猜對為止。

int main()
{
    srand((unsigned int)time(NULL));
    int num;
    int ans = 1 + rand() % (10-1+1);

    while (1)
    {
        printf("請猜一個數字(1-10): ");
        scanf("%d",&num);    
        
        if (ans == num)
        {
            printf("恭喜答對!\n");
            break;
        }
        
        else if (ans > num)
        {
            printf("太小了!\n");


        }
        else
        {
            printf("太大了!\n");
        }

    }

    return 0;
}

    //讓使用者輸入一個數字n，利用遞迴函式來計算1+2+...+n的值。
    int dihui(int);

    int main()
    {
        int n;
        printf("請輸入一整數: ");
        scanf("%d",&n);
        printf("1+2+...+ %d = %d",n,dihui(n));
        return 0;
    }

     int dihui(int n)
    {
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            
            sum += i;   
        }
        printf("1+2+...+ %d = %d",n,sum);
    }

    int dihui(int n)
    {
        if (n == 1)
        {
            return 1;
        }
        else
        {
            return n + dihui(n-1);
        }
        
        return 0;
    }

//請寫一個程式，讓使用者輸入一個整數 n，用遞迴函式列印出：n n-1 n-2 ... 2 1。

int printReverse(int);
int main()
{
    int n;
    printf("請輸入一整數: ");
    scanf("%d",&n);
    
    printReverse(n);

    return 0;
}

int printReverse(int n)
{
    if (n == 0)
    {
        return 0;
    }

    else
    {
        printf("%d ",n);
        printReverse(n-1);
    }
    
}


//定義一個計算平方的巨集，讓使用者輸入一個整數後顯示其平方值。

#define SQUARE(x) ((x) * (x))

int main()
{
    int x;
    printf("請輸入一整數: ");
    scanf("%d",&x);

    printf("%d 數的平方值為: %d",x,SQUARE(x));

    return 0;
}

//宣告兩個字串變數，顯示這兩個變數值和位置。

int main()
{
    char s1[]="hello";
    char s2[]="world";

    printf("字串s1值: %s，位址 = %x\n",s1,&s1);
    printf("字串s2值: %s，位址 = %x",s2,&s2);
    
    return 0;

}

//宣告兩個指標變數分別指向整數及浮點數變數，分別顯示兩個指標內容及記憶體大小。

int main()
{
    int n = 8;
    float d = 11;
    int *p1 = &n;
    printf("指標 p1 指向整數變數 n 的位址:\n");
    printf("變數 n 的位址: %p\n",(void*)&n);
    printf("指標 p1 的值: %p\n",(void*)p1);
    printf("指標 p1 佔有的記憶體: %d\n",sizeof(p1));

    float *p2 = &d;
    printf("指標 p2 指向浮點變數 d 的位址:\n");
    printf("變數 d 的位址: %p\n",(void*)&d);
    printf("指標 p2 的值: %p\n",(void*)p2);
    printf("指標 p2 佔有的記憶體: %d\n",sizeof(p2));

    return 0;
}

//宣告整數變數n=5，指標p指向n的位址，改變指標p指向的記憶體內容為8，顯示整數變數n的值。

int main()
{
    int n = 5;
    int *p = &n;
    printf("變數 n 的值: %d\n",n);
    printf("指標 p 指向的記憶體內容: %d\n",*p);

    *p = 8;
    printf("改變指標 p 指向的記憶體內容為: %d\n",*p);
    printf("改變後變數 n 的值: %d\n",n);

    return 0;
}

//讓使用者輸入兩個變數值，建立傳址呼叫的函式來交換兩個變數值。

void change(int *, int *);
int main()
{
    int a,b;
    printf("請輸入變數 a 值: ");
    scanf("%d",&a);
    printf("請輸入變數 b 值: ");
    scanf("%d",&b);
    change(&a,&b);
    printf("交換後 a = %d b = %d\n",a,b);

    return 0;
}

void change(int *a , int *b)
{
    printf("交換前 a = %d b = %d\n",*a,*b);
    int x;
    x = *a;
    *a = *b;
    *b = x;
}*/

// 定義指數一維陣列 n[3]={1,2,3}，以陣列方式及指標方式顯示陣列位址和陣列元素內容。 8/19

int main()
{
    int n[3] = {1,2,3};
    
    printf("陣列元素        位址         值\n");
    for (int i = 0; i < 3; i++)
    {
        printf("n[%d]        %p  %d\n",i,(void*)&n[i],n[i]);
    }
    
    int *p=n;

    printf("陣列指標        位址        值\n");
    for (int i = 0; i < 3; i++)
    {
        printf("n+%d        %p  %d\n",i,(void*)(p+i),*(p+i));//(*p + i) → 只是 n[0] 加上 i，不是真正的第 i 個元素，因此用*(p+i)
    }
    
    return 0;
}
