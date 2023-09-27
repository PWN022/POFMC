//
//  test.c
//  project
//
//  Created by 李来信 on 2022/8/29.
//

#include <stdio.h>
//新的开始
//int main(){
//    printf("HI！laixin:)\n");
//    return 0;
//}

//题源:蓝桥杯ACM训练系统
//
// 题目 1000: [竞赛入门]简单的a+b
//int main(){
//    int a,b;
//
//    while(scanf("%d %d",&a,&b)){ //不停的接收系统的测试输入，你都可以计算结果并输出
//        printf("%d",a+b);
//    }
//    return 0;
//}

// 题目 1001: [编程入门]第一个HelloWorld程序
//int main(){
//    int i,j;
//
//    for(i=0;i<=26;i++){
//        printf("*");
//    }
//
//    printf("\nHelloWorld\n");
//    for(j=0;j<=26;j++){
//        printf("*");
//    }
//    return 0;
//}

// 题目 1002: [编程入门]三个数最大值
//int main(){
//    int a,b,c,max;
//    scanf("%d %d %d",&a,&b,&c);
//
//    if(a>b){
//        max = a;
//    }else{
//        max = b;
//    }
//    if(max>c){
//        printf("%d",max);
//    }else{
//        printf("%d",c);
//    }
//    return 0;
//}

// 题目 1003: [编程入门]密码破译
//int main(){
//    int i;
//    char ch[5];
//    for(i=0;i<5;i++){
//        scanf("%c",&ch[i]);
//        ch[i] += 4;
//    }
//    printf("%s",ch);
//    return 0;
//}

// 题目 1004: [递归]母牛的故事
//int sum(int i){
//
//    if(i<=4) return i;
//    else return sum(i-1)+sum(i-3);    //例: sum(6) = sum(5) + sum(3) = 6+3
//}
//int main()
//{
//    int i;
//    while(scanf("%d",&i) && i)
//    printf("第%d年母牛数量有%d只\n",i,sum(i));
//
//    return 0;
//}

// 题目 1005: [编程入门]温度转换
//int main(){
//    double f,c;
//    scanf("%lf",&f);
//    c = 5*(f-32)/9;
//
//    printf("c=%.2lf",c);
//}

// 题目 1006: [编程入门]三个数找最大值
//int main(){
//    int a,b,c;
//    scanf("%d %d %d",&a,&b,&c);
//    if(a>b && a>c){
//        printf("%d",a);
//    }else if(b>a && b>c){
//        printf("%d",b);
//    }else{
//        printf("%d",c);
//    }
//
//    return 0;
//}

// 题目 1007: [编程入门]分段函数求值
//int main(){
//    int x,y;
//    scanf("%d",&x);
//    if(x<1){
//        y=x;
//    }else if(x>=1 && x<10){
//        y=2*x-1;
//    }else{
//        y=3*x-11;
//    }
//    printf("%d",y);
//
//    return 0;
//}

// 题目 1008: [编程入门]成绩评定
//int main(){
//    int score;
//    scanf("%d",&score);
//
//    switch(score/10){
//        case 10:
//            printf("满分！");
//        case 9:    //C语言 '/'直接舍去小数 99/10=9 判定为9
//            putchar('A');    //  putchar函数是字符输出函数 输出单个字符
//            break;
//        case 8:
//            putchar('B');
//            break;
//        case 7:
//            putchar('C');
//            break;
//        case 6:
//            putchar('D');
//            break;
//        default:
//            putchar('E');
//    }
//}

// 题目 1009: [编程入门]数字的处理与判断(翁恺C语言P46有不用数组的做法)
#include <string.h>         //C语言字符串头文件，strlen() 函数包含在此内
//int main(){
//    int i;
//    char str[10];                       //定义字符串长度为 10
//    scanf("%s", str);                   //输入数字 (作为字符串输入)
//
//    int len = strlen(str);              //获取字符串长度
//    printf("%d\n", len);                //输出字符串长度，即为数字位数
//
//    for (i = 0; i < len; i++)       //从左往右遍历输出
//    {
//        printf("%c", str[i]);        //%c表示输出一个字符
//        if (i < len - 1)
//            printf(" ");            //i<字符-1的长度时 后面输出一个空格
//    }
//    printf("\n");                       //输出回车
//    for (i = len - 1; i >= 0; i--)  //从右往左遍历输出
//    {
//        printf("%c", str[i]);
//    }
//    return 0;
//}

// 题目 1010: [编程入门]利润计算
//int main(){
//    int i,am;
//    int profit = 100000;
//    scanf("%d",&i);
//
//    if(i<=profit){    //利润低于profit
//        am = i*0.1;
//    }else if(i>profit && i<=(2*profit)){    //高于1profit 低于2profit
//        am = i*0.1 + (i-profit)*0.075;
//    }else if(i>(2*profit) && i<=(4*profit)){    //高于2profit 低于4profit
//        am = i*0.1 + i*0.075 + (i-2*profit)*0.05;
//    }else if(i>(4*profit) && i<=(6*profit)){    //高于4profit 低于6profit
//        am = i*0.1 + i*0.075 + 0.05*2*profit + (i-4*profit)*0.03;
//    }else if(i>(6*profit) && i<=(10*profit)){    //高于6profit 低于10profit
//        am = i*0.1 + i*0.075 + 0.05*2*profit + 0.03*2*profit + (i-6*profit)*0.015;
//        //    0.075*(2-1)profit  0.05*(4-2)profit     0.03*(6-4)profit
//    }else if(i>(10*profit)){    //超过10profit                 0.015*(10-6)profit
//        am = i*0.1 + i*0.075 + 0.05*2*profit + 0.03*2*profit + 0.015*4*profit + (i-10*profit)*0.01;
//    }
//    printf("%d",am);
//
//    return 0;
//}

// 题目 1011: [编程入门]最大公约数与最小公倍数
//int main(){
//    int a,b,c;
//    scanf("%d %d",&a,&b);
//    int res = a*b;
//
//    while(a%b!=0){
//        c = a%b;
//        a = b;
//        b = c;
//    }
//
//    printf("%d %d",c,res/c);
//    return 0;
//}

// 题目 1012: [编程入门]字符串分类统计
//int main(){
//    int letter = 0,num = 0,space = 0,other = 0;
//    int c;
//    while((c = getchar()) != '\n'){    //输入的字符不是换行符的时候，继续往下执行
//        if(c>='A' && c<='Z' || c>='a' && c<='z'){
//            letter++;
//        }else if(c>='0' && c<='9'){
//            num++;
//        }else if(c ==' '){
//            space++;
//        }else{
//            other++;
//        }
//    }
//    printf("%d %d %d %d",letter,num,space,other);
//    return 0;
//}

// 题目 1013: [编程入门]Sn的公式求和
//int main(){
//    int i,n;
//    int Sn = 0;
//    int f = 0;
//    scanf("%d",&n);
//
//    for(i=0;i<n;i++){
//        f = f*10+2;    //2+22+222...
//        Sn = Sn+f;
//    }
//    printf("%d",Sn);
//
//    return 0;
//}

// 题目 1014: [编程入门]阶乘求和
//int main(){
//    int i,n;
//    long long int Sn = 0,t = 1;
//    scanf("%d",&n);
//
//    for(i=1;i<=n;i++){
//        t *= i;
//        Sn += t;
//    }
//    printf("%lld",Sn);
//}

// 题目 1015: [编程入门]求和训练
#include <math.h> //数学函数头文件
//int main(){
//    int a,b,c;
//    int i;
//    double res_a = 0,res_b = 0,res_c = 0;
//    scanf("%d %d %d",&a,&b,&c);
//
//    for(i=1;i<=a;i++){
//        res_a += i;
//    }
//    for(i=1;i<=b;i++){
//        res_b += pow(i,2);    //pow数学函数
//    }
//    for(i=1;i<=c;i++){
//        res_c += 1.00/i;
//    }
//
//    printf("%.2lf",res_a+res_b+res_c);
//    return 0;
//}
 
// 题目 1016: [编程入门]水仙花数判断
//int main(){
//    int a,b,c,i;
//
//    for(i=100;i<1000;i++){
//        a = i/100;    //直接得到百位
//        b = i/10%10;//i/10得到两位数 再对10取余得到十位数
//        c = i%10;    //直接得到个位数
//        if(a*a*a +b*b*b+ c*c*c ==i){
//            printf("%d\n",i);
//        }
//    }
//
//    return 0;
//}

// 题目 1017: [编程入门]完数的判断
//int main(){
//    int x,y,i,iv,c;
//    scanf("%d",&x);
//    for(i=2;i<=x;i++){    //遍历2~x
//        iv = 0;    //初值为0
//        for(y=1;y<i;y++){    //判断是否为完数
//            if(i%y==0){    //判断是否为因子
//                iv+= y;
//            }
//        }
//        if(iv==i){
//            printf("%d its factors are ",i);
//
//            for(c=1;c<i;c++){
//                if(i%c==0){    //求因子
//                    printf("%d ",c);
//                }
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}

// 题目 1018: [编程入门]有规律的数列求和
//int main(){
//    int i,n,t;
//    double sn=0,an=0;
//    double a=2.0,b=1.0;
//    scanf("%d",&n);
//
//    sn+=a/b;    // 2/1不在循环 提前加入
//    for(i=1;i<n;i++){
//        t = a;
//        a = a+b;    //将前一项的分子加分母给后一项的分子
//        b = t;    //将前一项的分母给后一项的分母
//        an = a/b;
//        sn+=an;
//    }
//    printf("%.2lf",sn);
//    return 0;
//}

// 题目1019: [编程入门]自由下落的距离计算
//int main(){
//  double M,N;
//  double uh,dh;
//  scanf("%lf %lf",&M,&N);
//  uh=M*(1-pow(1.0/2.0, N-1));//上升的总路程
//  //每次反弹是上次的1/2，第一次没有反弹上升高度为0
//  dh=2*M*(1-pow(1.0/2.0, N));//落地的总路程
//  
//  //输出为在第N次反弹时的高度以及M的总路程(经过多少米)
//  printf("%.2lf %.2lf\n",M*(pow(1.0/2.0,N)),uh+dh);
//  return 0;
//}

// 题目 1020: [编程入门]猴子吃桃的问题
//int main(){
//  int s=1,k;
//  scanf("%d",&k);
//  while (--k) {
//      s=(s+1)*2;
//  }
//  printf("%d",s);
//  return 0;
//}

// 题目 1021: [编程入门]迭代法求平方根
//double sqrt_iter(double a){
//  //求a的平方根的迭代公式为： X[n+1]=(X[n]+a/X[n])/2
//  double x0 =a,x1 = (x0 + a / x0)/2.0;
//  while (fabs(x1 - x0) > 0.00001) {//要求前后两次求出的差的绝对值少于0.00001
//      x0 = x1;
//      x1 = (x0 + a / x0)/2.0;
//  }
//  return x1;
//}
//
//int main(){
//  double a,sqrt_a;
//  scanf("%lf",&a);
//  sqrt_a = sqrt_iter(a);
//  printf("%.3lf",sqrt_a);
//  
//  return 0;
//}

// 题目 1022: [编程入门]筛选N以内的素数
//int main(){
//  int i,data,fllag=1;
//  scanf("%d",&data);
//  for (int x = 2; x <= data; x++) {   //输入范围内的数
//      for (i = 2; i < x; i++) {       //判断是否为素数
//          if ((x%i)==0) {             //能被整除直接跳出判断
//              fllag = 0;
//              break;
//          }
//      }
//      if (fllag==1) {                  //素数直接打印
//          printf("%d\n",x);
//      }
//      fllag = 1;
//  }
//  return 0;
//}

// 题目 1023: [编程入门]选择排序
//int main(){
//  int i,j,m,x[10];
//  for (i = 0; i < 10; i++)//输入
//  scanf("%d",&x[i]);
//  for (i = 0; i < 10; i++)
//  for (j = i+1; j < 10; j++) {//将后面的和新来的做对比
//      if (x[i] > x[j]) {
//          m = x[i];//暂存i的值
//          x[i] = x[j];//i=j的值
//          x[j] = m;//j=暂存i的值
//      }
//  
//  }
//  for (i = 0; i < 10; i++) {//排序输出
//      printf("%d\n",x[i]);//完结撒花
//  }
//  return 0;
//}

// 题目 1025: [编程入门]数组插入处理
//int main (){
//  int str[10];//定义一个可以存放10个元素的数组
//  int i;
//  for (i = 0; i < 9; i++) 
//      scanf("%d",&str[i]);//输入9个元素
//  int x;
//  scanf("%d",&x);
//  
//  for (i = 0; i < 9; i++) {
//      if (x <= str[i]) {//确定x的位置
//          int z;
//          for (z = 8; z >= i; z--) {
//              str[z + 1] = str[z];//把第i个值以及后面元素向后移动
//          }
//          str[i] = x;//把x放到此时的第i个元素
//          break;//完成插入跳出循环
//          //若不跳出循环则会覆盖之前的值
//      }
//  }
//  for (i = 0; i < 10; i++) {
//      printf("%d\n",str[i]);
//  }
//  return 0;
//
//}

// 题目 1026: [编程入门]数字逆序输出
//int main(){
//  int a[10];
//  int i;
//  
//  for (i = 0; i < 10; i++) {
//      scanf("%d",&a[i]);
//  }
//  for (i = 9; i >= 0; i--) {
//      printf("%d ",a[i]);
//  }
//  return 0;
//}

// 题目 1031: [编程入门]自定义函数之字符串反转
//int exchange(char a[],char b[]){
//  int i,l,j = 0;
//  l = strlen(a);
//  for (i = l-1; i >= 0; i--) {
//      b[j] = a[i];
//      j++;
//  }
//  b[j] = '\0';//结束符
//  
//  return 0;
//}
//
//int main(){
//  char a[1000],b[1000];
//  gets(a);
//  exchange(a,b);
//  puts(b);
//  
//  return 0;
//}

// 题目 1032: [编程入门]自定义函数之字符串连接
//void mystrcat(char str1[],char str2[]);
//
//int main(void){
//  char str1[100],str2[100];
//  scanf("%s%s",str1,str2);
//  mystrcat(str1,str2);
//
//  printf("%s",str1);
//  return 0;
//}
//
//void mystrcat(char str1[],char str2[]){
//  while (*str1)str1++;
//  while (*str1++=*str2++);
//}

// 题目 1042: [编程入门]电报加密
//int main (){
//  char str[28];
//  int i;
//  gets(str); 
//  //sb 苹果编译器
//  //warning: this program uses gets(), which is unsafe.
//  for (i=0; i<28; i++) {
//      if (str[i]=='z') 
//          str[i] = 'a';
//      if (str[i]>='a' && str[i]<='y')
//          str[i] = str[i+1];
//      puts(str);
//  }
//  
//  
//  
//  return 0;
//}
// 题目 1042: [编程入门]电报加密//dotcpp不给过？？？？？？？？？？？？？？？？？？
//int main()
//{
//  char c;
//  while(~scanf("%c",&c))
//      {
//          if(c>='a'&&c<='z'||c>='A'&&c<='Z')
//              printf("%c",c+1);
//          else
//              printf("%c",c);
//      }
//  return 0;
//}

// 题目 1043: [编程入门]三个数字的排序
//int main(){
//  int temp;
//  int a,b,c;
//  scanf("%d %d %d",&a,&b,&c);
//  
//  if(a>b)
//  {
//      temp=a;
//      a=b;
//      b=temp;
//  }
//  if(a>c)
//  {
//      temp=a;
//      a=c;
//      c=temp;
//  }
//  if(b>c)
//  {
//      temp=b;
//      b=c;
//      c=temp;
//  }
//  
//  printf("%d %d %d\n",a,b,c);
//  return 0;
//}

// 题目 1044: [编程入门]三个字符串的排序
//int main(){
//  char a[100],b[100],c[100];
//  gets(a);
//  gets(b);
//  gets(c);
//  //最小字符串
//  puts(strcmp(a, b)<0?(strcmp(a, c)<0?a:c):(strcmp(b, c)<0?b:c));
//  //最大字符串
//  puts(strcmp(a, b)>0?(strcmp(a, c)<0?a:(strcmp(b, c)>0?b:c)):(strcmp(a, c)>0?a:(strcmp(b, c)>0?c:b)));
//  //中间字符串
//  puts(strcmp(a, b)>0?(strcmp(a, c)>0?a:c):(strcmp(b, c)>0?b:c));
//  
//  return 0;
//}

// 题目 1047: [编程入门]报数问题
//#define N 100
//int main(){
//  int a[N] = {0};
//  int i,n,k=0,m=0;
//  scanf("%d",&n);
//  
//  a[0] = n;   //数组第0个存放n的位置，从1开始数
//  for (i = 1; i < n; i++)
//      a[i] = i;   //存放位置，a[1]就是存放1
//  for (i = 1; m < n-1; i++) { //n-1次，m统计退圈人数
//      if (a[i%n] == 0) 
//      continue;
//      k++;    //统计喊到人数
//      if(k==3){
//          a[i%n] = 0;
//          m++;    //退出人数
//          k = 0;
//      }
//  }
//  
//  for (i = 0; i < n; i++) {   //查看留下的是几号
//      if (a[i] != 0)
//          printf("%d",a[i]);
//  }
//  
//  return 0;
//}

// 题目 1053: 二级C语言-平均值计算
//int main(){
//  int a[10];
//  int i,k = 0;
//  int sum = 0;
//  
//  for ( i = 0; i < 10; i++)
//      scanf("%d",&a[i]);
//  for ( i = 0; i < 10; i++) {
//      sum += a[i];
//  }
//
//
//  int avg = sum / 10;
//  for ( i = 0; i < 10; i++) {
//      if (a[i]>avg) {
//          k++;
//      }
//  }    
//  printf("%d",k);
//
//  return 0;
//}

// 题目 1055: 二级C语言-进制转换
//int main(){
//  int i,k;
//  int sum = 0,o,dd;
//  scanf("%d",&dd);
//  
//  for ( i = 0; dd != 0; i++) {
//      k = dd % 8;     //取余
//      dd = dd / 8;    //每次/8得到的数
//      o = k * pow(10, i);
//      
//      sum += o;
//  }
//  printf("%d",sum);
//  
//  return 0;
//}

//---------------------------------寄!猴子吃桃
//int main (){
//  int x = 0;
//  int i = 0;
//  int t = 0;
//  scanf("%d",&x);
//  
//  for (i=1; i++; i=4) {
//      i+=1;
//      t = i * 100 / (100-x);
//  }
//  printf("%d",t);
//  return  0;
//}

//------------------------------------------------------------------------------------------
//-----------------------------------------翁恺----------------------------------------------
//------------------------------------------------------------------------------------------
//翁恺-猜数游戏
//#include <stdlib.h>  //随机数需要用到的头文件
//#include <time.h>
//int main(){
//  srand(time(0)); //更好的模拟随机数
//  
//  int randnum = rand()%100;
//  printf("这是答案%d\n",randnum);
////  ---return  0;
//  int count = 0;
//  int usernum = 0;
//  do{
//      printf("猜一猜?:");
//      scanf("%d",&usernum);
//      count++;
//      if (usernum>randnum) {
//          printf("大\n");
//      }else if (usernum<randnum) {
//          printf("小\n");
//      }
//  
//  }while(usernum!=randnum);
//  printf("用了%d次\n",count);
//}

//翁恺-整数求逆
//int main(){
//  int x;
//  int digit;
//  int ret = 0;
//  //x = 12345;//如果是类似100之类的数字 只需在digit的下一行进行输出即可
//  scanf("%d",&x);
//  
//  while (x > 0) {
//      digit = x%10;       //循环得到个位数
//      ret = ret*10+digit; //负责逆向+
//      x/=10;              //循环去掉个位数
//  }
//  printf("%d",ret);
//  return 0;
//}

//------------------------------------------------------------------------------------------
//----------------------------------C语言网-指针----------------------------------------------
//------------------------------------------------------------------------------------------
//地址查询
//int main(){
//  int i;
//  int a[6]={0,1,2,3,4,5};
//  char b[6]={'a','b','c','d','e','f'};
//  for (i=0;i<6;i++)
//  {
//      printf("Address:0x%x,value:%d \n",&a[i],a[i]);
//      return 0;
//  }
//  for (i=0;i<6;i++) 
//  {
//      printf("Address:0x%x,value:%d \n",&b[i],b[i]);
//      return 0;
//  }
//}

//指针查询
//int main(){
//  int num = 2042; //普通变量1
//  int a = 2023;   //普通变量2
//  int *p = &a;    //把普通变量赋值给指针变量p *p指针变量
//  int* c = NULL;  //空指针 0的常量
//  printf("Address:0x%x num=%d \n",&num,num);
//  printf("Address:0x%x a=%d \n",&a,a);
//  
//  
//  printf("Address:0x%x *p=%d \n",p,*p);
//  printf("Address:0x%x \n",c);
//  printf("%d \n",*&num);
//  printf("%d \n",*&a);
//  return 0;
//}

//二维数组的输出
//int main (){
//  int a[3][4] = {{1,2,3,4},{10,20,30,40}};
//  for(int i = 0;i <= 2;i++){
//      for (int j = 0; j <= 3; j++) {
//          printf("%d",a[i][j]);
//      }
//  }
//}


//用指针方式访问数组中的元素
//int main(){
//  int i;
//  int a[10] = {0,1,2,3,4,5,6,7,8,9};
//  int *p= a;
//  for (i=0; i<10; i++) {
//      printf("p value:%d,a value:%d \n",*(p++),*(a+i));
//      //二维数组*(a+i)即从i行第一个数组的地址 *(p++)先取*p的值然后使p+1
//  }
//  return 0;
//}

//int main(void){//void表示无参数,无返回值
//  int i;
//  char st[20];
//  char *ps = st;
//  printf("input a string:");
//  scanf("%s",ps);
//  ps[0]='a';
//  for (i=0;ps[i]!='\0';i++) 
//      if (ps[i]=='a') {//为什么被篡改后，这里的if获取的还是输入的原址
//          printf("被篡改后的字符串=%s\n",ps);
//          printf("a in the string\n");
//      }
//      if (ps[i]=='\0') {
//          printf("a not in the string");
//      }
//}

//input a b 多组数据
//int main(){
//  int a,b;
//  while (scanf("%d %d",&a,&b)!=EOF)
//  printf("%d\n",a+b);
//  return 0;
//}

//input a b 可指定组数
//int main(){
//  int a,b;
//  int n;
//  scanf("%d",&n);
//  while (n--) {
//      scanf("%d %d",&a,&b);
//      printf("%d",a+b);
//  }
//  return 0;
//}

//n个数的和，输入指定值停止执行
//int main(){
//  int n,sum,temp;
//  while (scanf("%d",&n)&& n!=0) {
//      temp=0;
//      while (n--) {
//          scanf("%d",&sum);
//          temp+=sum;
//      }
//      printf("%d\n",temp);
//  }
//  return 0;
//}

//指针详解
//int main (){
//  int a;
//  int *p = &a;
//  a = 1025;
//  char *p0 = p;
//  printf("%d\n",p);//指针p的值为a的地址
//  printf("%d\n",*p);//指针p指向的值
//  printf("%d %d\n",p0,*p0);//*p0 1  *(p0+1) 4
//  //1025 二进制
//  //00000000 0000000 00000100 00000001
//}

//三级指针
    //-----------//
//int main(){
//  int a = 100;
//  int *p = &a;
//  *p = 20;
//  int **q = &p;
//  int ***r= &q;
//  printf("a value is %d address is %d\n",a,&a);//打印a的值以及a的地址
//  printf("*p = %d\n",*p);//*p等价于a，打印a的值
//  
//  printf("p value is %d address is %d\n",p,&p);//打印p的值以及p的地址
//  printf("q value is %d address is %d\n",q,&q);//打印q的值以及q的地址
//  
//  printf("*q = %d **q = %d\n",*q,*(*q));//q一次解引用，*q等价于打印p的值，即a的地址
//  //q二次解引用，**q等价于打印a的值
//  printf("**r = %d ***r = %d\n",*(*r),*(*(*r)));
//  
//  printf("&a=%d\np=%d\n",&a,p);//指针p的值为a的地址
//  printf("&p=%d\nq=%d\n",&p,q);//指针q的值为p的地址
//  printf("&q=%d\nr=%d\n",&q,r);//指针q的地址
//  printf("a=%d *p=%d **p=%d\n",a,*p,**q);
    //------------------------------//
//  a++;
//  (*p)++;
//  **q=**q+1;
//  printf("a=%d *p=%d **p=%d\n",a,*p,**q);    
//}

