#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int month, day;
//    int yhq;
//    double x;
//    double y;
//    printf("请输入衣服价格：");
//    scanf("%lf", &x);
//    printf("请输入月份和日期：");
//    scanf("%d %d", &month, &day);
//    printf("是否有优惠券：");
//    scanf("%d", &yhq);
//    if (month == 11 && day == 11)
//    {
//        y = 0.7 * x;
//        if (yhq == 1)
//        {
//            y -= 50;
//            if (y < 0)
//            {
//                y = 0;
//            }
//        }
//    }
//    else if (month == 12 && day == 12)
//    {
//        y = 0.8 * x;
//        if (yhq == 1)
//        {
//            yhq -= 50;
//            if (y < 0)
//            {
//                y = 0;
//            }
//        }
//    }
//    else
//    {
//        y = x;
//        printf("该日无折扣");
//    }
//    printf("最终价格：%.2lf元\n", y);
//
//    return 0;
//}
////#include<stdio.h>
////int main()
////{
////	int a = 10;
////	printf("%p", &a);
////}
//#include <stdio.h>
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		if (i % 7 == 0)
//		{
//			printf("%d,", i);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 7; float x = 2.5, y = 4.7;
//	double m;
//	m=x + a % 3 * (int)(x + y) % 2 / 4;
//	printf("%f",m);
//}
//
//#include<stdio.h>
//int main()
//{
//	int m;
//	m = 2;
//	switch (m-1)
//	{
//	case 0:
//	case 1:printf("yes");
//	case 2:printf("ok"); break;
//	default:printf("no");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	printf("请输入三角形的三边长:");
//	scanf("%d %d %d", &a,&b,&c);
//	if (a + b > c && a + c > b && b + c > a)
//	{
//		if (a==b&&b==c)
//		{
//			printf("3\n");
//		}
//		else if (a==b||b==c||a==c)
//		{
//			printf("2\n");
//		}
//		else
//			printf("1\n");
//	}
//	else
//		printf("0\n");
//}
//#include<stdio.h>
//int main()
//{
//	int y, x=0;
//	printf("请输入x的值:\n");
//	scanf("%d", &x);
//	if (2 < x && x<= 10)
//	{
//		y = x * (x + 2);
//		printf("%d",y);
//	}
//	if (-1 < x &&x<= 2)
//	{
//		y = 2 * x;
//		printf("%d",y);
//	}
//	else
//	{
//		y = x - 1;
//		printf("%d", y);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a=0, b=0, c=0;
//	printf("请输入三个整数:\n");
//	scanf("%d %d %d",&a,&b,&c);
//	if (a == b || b == c || c == a)
//	{
//		if (a = b) { printf("%d %d",a,b); }
//		else if (b = c) { printf("%d %d",b,c); }
//		else if (c = a) { printf("%d %d",c,a); }
//	}
//	else
//	{
//		printf("");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	char f,s;
//	printf("请输入首字母:");
//	scanf("%c", &f);
//	if (f >= 'A' && f <= 'Z') { f += 32; }
//	switch (f)
//	{
//	case'm':printf("monday"); break;
//	case'f':printf("friday"); break;
//	case'w':printf("wednesday"); break;
//	case't':
//		printf("请输入第二个字母:");
//		scanf(" %c", &s);
//		if (s >= 'A' && s <= 'Z') { s += 32; }
//		if (s == 'u') { printf("tuesday"); }
//		else if (s == 'h') { printf("thursday"); }
//		else { printf("nmd"); }
//		break;
//	case 's':
//		printf("请输入第二个字母: ");
//		scanf(" %c", &s);
//		if (s >= 'A' && s <= 'Z') {s =+ 32;}
//		if (s== 'a') {printf("saturday");}
//		else if (s=='u') {printf("sunday");}
//		else {printf("nmd");}
//		break;
//	default:printf("nmd"); break;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d, e;
//	printf("请输入五位数:\n");
//	scanf("%d %d %d %d %d", &a, &b, &c, & d, &e);
//	if (a == e && b == d) { printf("是回文数"); }
//	else { printf("不是回文数"); }
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char ch;
//	printf("请输入字母:");
//	scanf("%c",&ch);
//	if (ch >= 'A' && ch <= 'Z') 
//	{ 
//		printf("%c",ch+=32);
//	}
//	else if(ch >= 'a' && ch <= 'z')
//	{ 
//		printf("%c", ch -= 32);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c, t;
//	printf("请输入三个数:");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b) { t = a, a=b, b = t; }
//	else if (a > c) { t = a, a = c, c = t; }
//	else if (b > c) { t = b, b = c, c = t; }
//	printf("%d", b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a=0;
//	printf("输入一个数:");
//  scanf("%d",&a);
//	if (a % 2 == 0) { printf("该数为偶数"); }
//	else { printf("该数为奇数"); }
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	for(a=1;a<=100;a++)
//		if (a % 2 == 1)
//		{
//			printf("%d ", a);
//		}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	float y;
//	printf("输入公里数:");
//	scanf("%d",&x);
//	if (x < 250) 
//	{
//		printf("没有折扣");
//		y = x;
//		printf("%.2f", y);
//	}
//	else if (250 <= x && x < 500)
//	{
//		y = 0.98 * x;
//		printf("%.2f", y);
//	}
//	else if (500 <= x && x < 1000)
//	{
//		y = 0.95 * x;
//		printf("%.2f",y);
//	}
//	else if (1000 <= x && x < 2000)
//	{
//		y = 0.92 * x;
//		printf("%.2f",y);
//	}
//	else if (2000 <= x && x < 3000)
//	{
//		y = 0.9 * x;
//		printf("%.2f",y);
//	}
//	else
//	{
//		y = 0.85 *x;
//		printf("%.2f", y);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int day, month, year;
//	int monthdays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int totaldays=0;
//	int i;
//	printf("请输入年月日:");
//	scanf("%d %d %d", &year, &month, &day);
//	if (day > 31 && day < 1 && month>12 && month < 1)
//	{
//		printf("该输入日期不对");
//	}
//	//int iyear = 0;//何意味
//	if (year % 4 == 0)
//	{
//		//iyear = 1;//何意味
//		monthdays[1] = 29;
//	}
//	if (day > monthdays[month - 1]) 
//	{
//		printf("输入日期不对");
//		//return 1;
//	}
//	for (i = 0; i < month - 1; i++)
//	{
//		totaldays += monthdays[i];
//	}
//	totaldays += day;
//	printf("这是该年第%d天",totaldays);
//}
//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x > 0)
//	{
//		if (x % 5 == 0 && x % 7 == 0)
//		{
//			printf("yes");
//		}
//		else
//			printf("no");
//	}
//	else
//		printf("请输入正整数");
// return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, x, y;
//	scanf("%d %d", &a, &b);
//	y = a * a + b * b;
//	if (y >= 100)
//	{
//		x = y /100;
//		printf("%d",x);
//	}
//	else
//	{
//		printf("%d", a + b);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a=0, b=0;
//	char ch;
//	scanf("%d %d %c", a, b, ch);
//	switch (ch)
//	{
//	case'+':printf("%d", a + b); break;
//	case'-':printf("%d", a - b); break;
//	case'/':printf("%d", a / b); break;
//	case'*':printf("%d", a * b); break;
//	case'%':printf("%d", a % b); break;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//#define M 5
//#define N 4
//int main()
//{
//	int a[M][N];
//	int i, j;
//	int sum[M] = { 0,0,0,0,0 };
//	int max = 0, t;
//	for(i=0;i<N;i++)
//		for (j = 0; j < N; j++)
//		{
//			a[i][j] = rand() % 100;
//		}
//	printf("产生的随机矩阵为:\n");
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j < N; j++)
//			printf("%d", a[i][j]);
//		print("\n");
//	}
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j < N; j++)
//			sum[i] += a[i][j];
//	}
//	for (i = 0; j < N; j++)
//	{
//		int tmp;
//		tmp = a[t - 1][j];
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 101; i <= 200; i++)
//	{
//		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0&&i%7!=0&&i%11!=0&&i%13!=0)
//		{
//			printf("%d ",i);
//		}
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int num, sum;
//	int bw, sw, gw;
//	for(num=100;num<=1000;num++)
//	{
//		bw = num / 100;
//		sw = (num / 10) % 10;
//		gw = num % 10;
//		sum = bw * bw * bw + sw * sw * sw + gw * gw * gw;
//		if (sum == num)
//		{
//			printf("%d ", num);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int lim = 0, i;
//	printf("请输入一个整数lim:\n");
//	scanf("%d", &lim);
//	for (i = 1; i <= lim; i++)
//	{
//
//	}
//	return 0;
//}
//#include <stdio.h>
//int main() 
//{
//    int i, j, sum;
//    for (i = 2; i <= 1000; i++)
//    {
//        sum = 0;
//        for (j = 1; j < i; j++) 
//        {
//            if (i % j == 0)
//            {
//                sum += j;
//            }
//        }
//        if (sum == i) 
//        {
//            printf("%d ", i);
//        }
//    }
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("    *\n");
//	printf("   ***\n");
//	printf("  *****\n");
//	printf(" *******\n");
//	printf("  *****\n");
//	printf("   ***\n");
//	printf("    *\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1, y = 1, n;
//	scanf("%d", &n);
//	do
//	{
//		y *= i;
//		i++;
//	} 
//	while (i <= n);
//	printf("%d", y);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[4] = { 5,16,7,14 };
//	int i;
//	for (i = 1; i < 4; i++)
//	{
//		arr[i] += i;//5,17,9,17
//	}
//	for (i = 3; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c, t;
//	scanf("%d %d %d",&a,&b,&c);
//	if (a > b)
//	{
//		t = a, a = b, b = t;
//	}
//	else if (b > c)
//	{
//		t = b, b = c, c = t;
//	}
//	else if (a > c)
//	{
//		t = a, a = c, c = t;
//	}
//	printf("%d", c);
//}
//#include<stdio.h>
//int main()
//{
//	int i, x, y, z;
//	for(i=100;i<=1000;i++)
//	{
//		x = i / 100;
//		y = (i % 100) / 10;
//		z = i%10;
//		if (i == x * x * x + y * y * y + z * z * z)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main() 
//{//公鸡值钱五，母鸡值钱三，小鸡三值一，百钱买百鸡
//    int male, female, baby;  
//    int count = 0;
//    for (male = 0; male <= 20; male++)
//    {
//        for (female = 0; female <= 33; female++)
//        {
//            baby = 100 - male - female;
//            if (baby >= 0 && baby % 3 == 0) 
//            {
//                if (male * 5 + female * 3 + baby / 3 == 100) 
//                {
//                    count++;
//                    printf("方案%d: 公鸡=%d, 母鸡=%d, 小鸡=%d\n",
//                        count, male, female, baby);
//                }
//            }
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	if ('a' <= ch && 'z' >= ch)
//	{
//		ch -= 32;
//	}
//	else if ('A' <= ch && 'Z' >= ch)
//	{
//		ch += 32;
//	}
//	printf("%c", ch);
//}
//#include<stdio.h>
//#define N 10
//int fun(int n)
//{
//	int s = 0, i;
//	for (i = 2; i <= n / 2; i++)
//	{
//		if (n % i == 0)
//		{
//			s += i;
//		}
//		return s;
//	}
//}
//
//int main()
//{
//	int a[N];
//	int s[N];
//	printf("输入%d个正整数:\n", N);
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < N; i++)
//	{
//		s[i] = fun(a[i]);
//	}
//	for (i = 0; i < N; i++)
//	{
//		printf("正整数%d的所有因子之和为%d\n", a[i], s[i]);
//	}
//}
//#include <stdio.h>
//int main() 
//{
//    int ages[10];
//    int i;
//    printf("请输入10个学生的年龄:\n");
//    for (i = 0; i < 10; i++)
//    {
//        printf("学生 %d 的年龄: ", i + 1);
//        scanf("%d", &ages[i]);
//    }
//    printf("\n正序:\n");
//    for (i = 0; i < 10; i++) 
//    {
//        printf("学生 %d: %d岁\n", i + 1, ages[i]);
//    }
//    printf("\n逆序:\n");
//    for (i = 9; i >= 0; i--) 
//    {
//        printf("学生 %d: %d岁\n", i + 1, ages[i]);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[5];
//	int  i;
//	printf("请输入五个数:\n");
//	for(i=0;i<5;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = 0, min = 0;
//	for (i = 0; i < 5; i++)
//	{
//		if (arr[max] < arr[i])
//		{
//			max = i;
//		}
//		if (arr[min] > arr[i])
//		{
//			min = i;
//		}
//	}
//	printf("最大值为%d,最小值为%d\n", arr[max], arr[min]);
//	int t;
//	if (max != min)
//	{
//		t = arr[max];
//		arr[max] = arr[min];
//		arr[min] = t;
//	}
//	else
//	{
//		printf("\n无需互换\n");
//	}
//	printf("互换后:\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int year;
//	int month;
//	int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	printf("请输入年月:");
//	scanf("%d %d",&year,&month);
//	if (year % 4 == 0)
//	{
//		arr[1] = 29;
//	}
//	printf("该月天数为：%d", arr[month - 1]);
//}
////#include<stdio.h>
//#include<string.h>
//void f(char str1[], char str2[]) 
//{
//	char t[100];
//	if (strcmp(str1, str2) < 0)
//	{
//		strcpy(t, str1);
//		strcpy(str1, str2);
//		strcpy(str2, t);
//	}
//}
//int main()
//{
//	char str1[100], str2[100];
//	printf("请输入第一个字符串:");
//	fgets(str1, sizeof(str1), stdin);
//	str1[strcspn(str1, "\n")] = '\0';
//	printf("请输入第二个字符串:");
//	fgets(str2, sizeof(str2), stdin);
//	str2[strcspn(str2, "\n")] = '\0';
//	f(str1, str2);
//	printf("第一个字符串:%s", str1);
//	printf("第二个字符串:%s", str2);
//}
//#include<stdio.h>
//int main()
//{
//	int i;
//	printf("请输入一个整数:");
//	scanf("%d", &i);
//	if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
//	{
//		if (i % 3 == 0 && i % 5 == 0 && i % 7 == 0)
//		{
//			printf("能同时被3、5、7整除");
//		}
//		else if (i % 3 == 0 && i % 5 == 0)
//		{
//			printf("能同时被3、5整除");
//		}
//		else if(i % 3 == 0 && i % 7 == 0)
//		{
//			printf("能同时被3、7整除");
//		}
//		else if(i % 5 == 0 && i % 7 == 0)
//		{
//			printf("能同时被5、7整除");
//		}
//		else if (i % 5 == 0)
//		{
//			printf("能同时被5整除");
//		}
//		else if (i % 3 == 0)
//		{
//			printf("能同时被3整除");
//		}
//		else if (i % 7 == 0)
//		{
//			printf("能同时被7整除");
//		}
//	}
//	else
//	{
//		printf("不能被3、5、7中任一个整除");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0, right = sz - 1;
//	scanf("%d", &k);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标为%d", mid);
//			break;
//		}
//	}
//}
//#include <stdio.h>
//int gcd(int a, int b);
//int lcm(int a, int b);
//int gcd(int a, int b)
//{
//    int t;
//    if (a < b) 
//    {
//        t = a;
//        a = b;
//        b = t;
//    }
//    while (b != 0) 
//    {
//        t = a % b;
//        a = b;
//        b = t;
//    }
//    return a;
//}
//int lcm(int a, int b)
//{
//    return (a / gcd(a, b)) * b;
//}
//int main()
//{
//    int num1, num2;
//    printf("请输入两个正整数: ");
//    scanf("%d %d", &num1, &num2);
//    int result_gcd = gcd(num1, num2);
//    int result_lcm = lcm(num1, num2);
//    printf("\n计算结果:\n");
//    printf("最大公约数(GCD): %d\n", result_gcd);
//    printf("最小公倍数(LCM): %d\n", result_lcm);
//    return 0;
//}
//#include<stdio.h>
//int first_try(int x)
//{
//	static int i = 0;
//	int y = 0;
//	while (x > 0)
//	{
//		y = x % 10;
//		i += y;
//		x /= 10;
//	}
//	return i;
//}
//int main()
//{
//	int a;
//	int total;
//	printf("请输入一个数:");
//	scanf("%d", &a);
//	total = first_try(a);
//	printf("该数各位相加的和为%d", total);
//
//}
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	int number[10];
//	int score[10];
//	printf("请输入10个学生的学号:\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("学生%d的学号是:", i + 1);
//		scanf("%d", &number[i]);
//	}
//	printf("请输入10个学生的分数:\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("学生%d的分数是:", i + 1);
//		scanf("%d", &score[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (score[i] == 90)
//		{
//			printf("成绩等于90分的学号为%d\n", number[i]);
//		}
//	} 
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 6;
//	int b;
//	b = a += a -= a * a;
//	printf("%d", b);
//}
//#include <stdio.h>
//#define N 100
//int main()
//{
//    int n, p;
//    int a[N], b[N];
//    int i, j;
//    printf("please input n, p:\n");
//    scanf("%d%d", &n, &p);
//    printf("please input %d intergers:\n", n);
//    for (i = 0; i < n; i++)
//        scanf("%d", &a[i]);
//    for (i = 0; i < p; i++)
//    {
//        b[i] = a[i];
//    }
//    j = 0;
//    for (i = p; i <= n - 1; i++)
//    {
//        a[j] = a[i];
//        j++;
//    }
//    i = 0;
//    for (; j <= n - 1; j++)
//    {
//        a[j] = b[i];
//        i++;
//    }
//    for (i = 0; i < n; i++)
//        printf("%d ", a[i]);
//}
//#include <stdio.h>
//int main()
//{
//	printf("Lebron James");
//}
//#include<stdio.h>
//int main() 
//{
//	unsigned int num = 0;
//	printf("请输入一个数：");
//	scanf("%u",&num);
//	while (num) 
//	{
//		printf("%u ", num % 10);
//		num /= 10;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 23;
//	printf("%d",a);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int a = 1;
	a += 1;
	printf("%d", a);
	return 0;
}