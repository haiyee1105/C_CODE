#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//C Primer Plus练习题
// 
//6-1，写入和输出26个小写字母。
//int main()
//{
//	char alphabet[26];
//	int i;
//	char c = 'a';
//	for (i = 0; i < 26; i++, c++)  //套路：写入26个字母
//		alphabet[i] = c;
//	for (i = 0; i < 26; i++)
//		printf("%c",alphabet[i]);  //套路：输出26个字母
//
//	return 0;
//}

//第2题，打印多行数据，关键在于“外层循环打印行数，内层循环打印内容”
//对于本题，关键在意识到“第1行打印1个字符，第2行打印2个字符，即内层循环次数等于行数”
//int main()
//{
//	int i, j;
//
//	for (i = 1; i <= 5; i++)  //外层循环控制打印行数
//	{
//		for (j = 0; j < i; j++)   //内层循环控制打印内容，内层循环次数等于行数。
//			printf("%c",'$');
//		printf("\n");	
//	}
//
//	return 0;                              //套路：打印多行数据，关键在于“外层循环打印行数，内层循环打印内容”
//}

//第3题：
//我的做法：是第1题和第2题的汇总
//int main()
//{
//	char h = 'F';
//	char alphabet[5];
//	int k,i,j;
//
//	for (k = 0; k < 6; k++, h--)
//		alphabet[k] = h;
//	//for (k = 0; k < 5; k++)
//	//	printf("%c",alphabet[k]);
//	for (i = 1; i <= 6; i++)
//	{
//		for (j = 0; j < i; j++)
//			printf("%c",alphabet[j]);
//		printf("\n");
//	}
//
//	return 0;
//}
//答案的做法：
//int main()
//{
//	int i, j;
//	char c;
//
//		for (i = 1; i <= 6; i++)
//		{
//			for (j = 0, c = 'F'; j < i; j++, c--)
//				printf("%c",c);
//			printf("\n");
//		}
//
//	return 0;
//}

//第4题：在第3题的基础上稍作改动
//int main()
//{
//	int i, j;
//	char c = 'A';
//
//	for (i = 1; i <= 6; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			printf("%c", c);
//			c = c + 1;
//		}
//		printf("\n");
//	}
//	return 0;
//}

//6-6，输入上限和下限两个数据//看的答案，不是自己敲的
//int main()
//{
//	int start, end;
//	int i;
//	printf("Enter the start number: ");
//	scanf("%d",&start);                    //输入上限
//	printf("Enter the end number: ");
//	scanf("%d",&end);                      //输入下限
//	printf("  Ori:   Square:    Cubic:\n");
//	for (i = start; i <= end; i++)
//		{
//			printf("%6d%10d%10d",i,i*i,i*i*i);
//			printf("\n");
//		}
//	return 0;
//}

//6-7，将一个单词读入字符数组中，然后倒序打印该单词//看答案做的，scanf读单词、循环初始值和终止值不懂
//#include <string.h>
//int main()
//{
//	char word[30];
//	int i;
//	printf("Enter a word: ");
//	scanf("%s",word);   //读取单词，不考虑空格、换行符等空白字符，直接使用scanf()函数读取数据    //套路：读取用户写入的单词
//	printf("%d\n",strlen(word));   //strlen()确定字符数组的有效长度，进而确定有效下标
//	//printf("%d\n",sizeof(word));    //疑问：scanf一个字符串怎么表示？
//	for (i = strlen(word) - 1; i >= 0; i--)   //循环的起始位置是单词长度-1，终止位置是0
//	{
//		printf("%c",word[i]);
//	}
//	return 0;
//}

//6-8，判断输入的两个数为浮点数：scanf("%f %f",&x,&y)==2
//int main()
//{
//	float x,y;
//
//	printf("Enter two float data (seprate by blank): ");
//
//	while(scanf("%f %f",&x,&y)==2)   //就是这里没写出来   //套路：如何判断用户输入的两个数字是不是数字
//	{
//		printf("the answer is %f\n",(x-y)/(x*y));
//		printf("Enter two float data (seprate by blank): ");
//	}
//	printf("Not numbers!\n");
//
//	return 0;
//}

//第9题，我自己函数没写对看了答案，关注函数的写法和运用
//float function(float x, float y)
//{
//	return (x - y) / (x * y);         //套路：函数的定义写法
//}
//int main()
//{
//	float x, y;
//
//	printf("Enter two float data (seprate by blank): ");
//
//	while (scanf("%f %f", &x, &y) == 2)
//	{
//		printf("The answer is %f\n", function(x,y));         //套路：函数的调用
//		printf("Enter two float data (seprate by blank): ");
//	}
//	printf("Not numbers!\n");
//
//	return 0;
//}

//6-10，enter和scanf输入格式相同、for循环初始值i可以用常量复制后的字符表示
//int main()
//{
//	int sum = 0;
//	int lower, upper;
//	int i;
//	printf("Enter lower and upper integer limits (seprate by blank): ");
//	scanf("%d %d",&lower,&upper);   //套路：注意“%d %d”中间不能用逗号，因为enter的形式要和scanf的形式相同，此处enter已经表明输入两数字之间用空格
//	while (upper>lower)
//	{
//		for (i = lower; i <=upper; i++)  //套路：初始值i右侧可以不是数字，而是赋值的常量符号
//		{
//			sum = sum + i*i;
//		}
//		printf("The sums of the squares from %d to %d is %d\n",lower*lower,upper*upper,sum);
//		printf("The next set of limits (seprate by blank): ");
//		scanf("%d %d", &lower, &upper);
//	}
//	printf("The lower is bigger than the upper!\n");
//
//	return 0;
//}

//6-11，输入8个整数//第11题，注意与第7题写入单词的区别，反序输出对比7、15、11三个例子的输出循环初始化值都不一样
//int main()
//{
//	int i;
//	int data[8];   //不是char ch[8];
//
//	printf("Enter eight integer data (seprate by blank): ");
//	for (i = 0; i < 8; i++)
//	{
//		scanf("%d", &data[i]);    //不是scanf("%s",ch);       //套路：用户写入一个整数数组
//	}
//	for (i = 7; i >= 0; i--)       //不是for (i = strlen(ch) - 1; i > 0; i--)
//	{
//		printf("%d", data[i]);     //不是printf("%c",ch[i]);
//	}	
//	printf("\nDone!\n");
//
//	return 0;
//}

//第13题，一些细节没考虑到，基本流程能写出来
//int main()
//{
//	int j;
//	int data[8];
//	data[0] = 2;
//
//	for (int i = 1; i < 8; i++)
//	{
//		data[i] = data[i-1]*2;   //我的计算方法太复杂
//	}
//	int i = 0;    //这里注意，我没考虑到i在for循环中已经变为7，所以这里必须重新初始化
//	do 
//	{
//		printf("%d\n",data[i++]);
//	} while (i<8);
//
//	return 0;
//}

//6-14，用户写入一个双精度浮点数数组//注意写入一个数组用一个for，输出两个数组各用一个for。
//int main()
//{
//	double data1[8];
//	double data2[8];
//
//	printf("Enter eight integer data (seprate by blank): ");
//	for (int i = 0; i < 8; i++)
//	{
//		scanf("%lf",&data1[i]);       //套路：用户写入一个双精度浮点数数组
//	}
//	data2[0] = data1[0];
//	for (int i=1; i < 8; i++)
//	{
//		data2[i] =data2[i-1] + data1[i];
//	}
//	//另一个方法使用嵌套循环:
//	//for (int i = 0; i < 8; i++)
//	//{
//	//	double sum = 0;
//	//	for (int j = 0; j <= i; j++)
//	//	{
//	//		sum = sum + data1[j];
//	//	}
//	//	data2[i] = sum;
//	//}
//	int i = 0;
//	printf("First Array: ");
//	for (i = 0; i < 8; i++)
//	{
//		printf("%lf. ",data1[i]);
//	}
//	printf("\nSecond Array: ");
//	for (i = 0; i < 8; i++)
//	{
//		printf("%lf. ", data2[i]);
//	}
//	//以下是我用dowhile写的两个数组的输出，没有以上答案用两个for写的直观
//	//do
//	//{
//	//	printf("%lf", data1[i++]);
//	//	printf("\n%lf", data2[i++]);
//	//} while (i<8);
//	printf("\nDone!\n");
//	return 0;
//}

//6-15，//不难，注意这是第三个反序输出的例子，并且三个例子输出时循环的初始化值都不一样：
//接上：7是for (i = strlen(ch) - 1; i > 0; i--)因为未知输入的字符个数。11是for (i = 7; i >= 0; i--)因为已知只有8个数。
//接上：15是for (i--; i >= 0; i--)因为此时i仍为输入字符数组里的最后一个字符，即\n，输出时要把这个\n删除
//int main()
//{
//	char data[256];    //255个字符，但要多留一个\n的位置，故为256
//
//	printf("Enter the char in a line: ");
//
//	for (int i = 0; data[i] != '\n'; i++)     //用\n作为判断用户写入终止的信号
//	{
//		scanf("%c",&data[i]);    //套路：读取整数或浮点数数组字符要用&，但输入字符数组和输出不用
//	}
//	printf("The reverse of the data: ");
//	for (i--; i >= 0; i--)       //套路：此时的i是最后一个字符的下标，初始化是i--的目的是删除最后的换行符
//	{
//		printf("%c",data[i]);    //套路：读取字符数组字符要用&，但输出不用
//	}
//	printf("\nDone!\n");
//
//	return 0;
//}


//7-1题，getchar()的运用//读取输入，读到#停止并报告读取的空格数、换行符数、所有其他字符数量
//int main()
//{
//	int blank=0;
//	int endline=0;
//	int others=0;
//	char ch;
//
//	while ((ch = getchar()) != '#')   //用getchar()写入字符，不用scanf一个数组，因为此处是逐个读取字符
//	{
//		if (ch == ' ')
//			blank++;
//		else if (ch == '\n')
//			endline++;
//		else
//			others++;
//	}
//	printf("The number of blank:%d, endline:%d, others: %d.\n",blank,endline,others);
//
//	return 0;
//}

//7-2，读取输入，读到#停止，打印每个字符及对应的ASCII码，一行打印8个字符
//int main()
//{
//	char ch;
//	int counter = 0;
//
//	while ((ch = getchar()) != '#')      //套路：依次读取字符并操作字符
//	{
//		if (counter++ % 8 == 0)    //每8个字符换行，注意当counter=0时会首先打印一个换行符
//			printf("\n");
//		if (ch == '\n')
//			printf("'\\n'-%03d. ",ch);    //显示方式表达换行符
//		else if (ch == '\t')
//			printf("'\\t'-%03d. ",ch);    //显示方式表达制表符
//		else
//			printf("'%c'-%03d. ",ch,ch);  //其他字符打印原字符和十进制数
//	}
//	printf("Done!\n");
//
//	return 0;
//}

//7-3，//和答案的代码一样结果也很奇怪//读取整数，直到用户输入0，打印偶数个数和偶数平均值、奇数个数和奇数平均值
//int main()
//{
//	int even_count = 0;
//	int odd_count = 0;
//	int even_sum = 0;
//	int odd_sum = 0;
//	int input = 0;
//
//	while (scanf("%d", &input))      //读取整数数字
//	{
//		if (input == 0)
//			break;           //break只能在循环for while dowhile和开关switch中使用
//		if (input % 2 == 0)
//		{
//			even_count++;
//			even_sum += input;
//		}
//		else
//		{
//			odd_count++;
//			odd_sum += input;
//		}
//	}
//	printf("Have %d even number, average is %g\n",even_count,1.0*even_sum/even_count);
//	printf("Have %d odd number, average is %g\n",odd_count, 1.0 * odd_sum / odd_count);
//	printf("Done\n");
//
//	return 0;
//}

//第4题，用if else语句，读取输入，读到#停止。用感叹号替换句号，用两个感叹号替换感叹号，并报告替换了多少次
//int main()
//{
//	int counter = 0;
//	char ch;
//
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == '!')
//		{
//			printf("!!");
//			counter++;
//		}
//		else if (ch == '.')
//		{
//			printf("!");
//			counter++;
//		}
//		else
//			printf("%c",ch);
//	}
//	printf("\nTotal replace %d times\n",counter);
//	printf("Done\n");
//
//	return 0;
//}

//7-5，用switch语句，读取输入，读到#停止。用感叹号替换句号，用两个感叹号替换感叹号，并报告替换了多少次
//int main()
//{
//	int counter = 0;
//	char ch;
//	while ((ch = getchar()) != '#')
//	{
//		switch (ch)
//		{
//		case '!':
//			printf("!!");
//			counter++;
//			break;
//		case '.':
//			printf("!");
//			counter++;
//			break;
//		default:
//			printf("%c",ch);
//			break;
//		}
//	}
//	printf("\nHave replaced %d times.\n",counter);
////以下是我的错误做法，但我仍不知道我哪错了
//int main()
//int c = 0;
//int counter = 0;
//char ch;
//if ((ch = getchar()) == '.')
//	c = 1;
//else if ((ch = getchar()) == '!')
//	c = 2;
//else if ((ch = getchar()) == '#')
//	c = 3;
//else
//	c = 4;
//switch (c)
//{
//case 1:
//	printf("!");
//	counter++;
//	break;
//case 2:
//	printf("!!");
//	counter++;
//	break;
//case 4:
//	printf("%c",ch);
//	break;
//case 3:
//	break;
//}
//printf("\nHave replaced %d times\n",counter);
//return 0;
//}

//7-6，判断读取的两个字符是否为规定字符。读取输入，读到#停止，报告ei出现的次数
//int main()
//{
//	int counter = 0;
//	char ch;
//	int halfpair = 0;
//
//	while ((ch = getchar()) != '#')
//	{
//		switch (ch)
//		{
//		case 'e':
//			halfpair = 1;
//			break;
//		case 'i':
//			if (halfpair == 1)
//			{
//				counter++;
//				halfpair = 0;
//			}
//			break;
//		default:
//			halfpair = 0;
//		}
//	}
//	printf("\nThe number of \'ei\' is: %d.\n", counter);
//
//	return 0;
//}

//7-7，一个数学问题
//#define BASE_SALARY 10.00
//#define EXTRA_HOUR 1.5
//#define BASE_TAX 0.15
//#define EXTRA_TAX 0.2
//#define EXCEED_TAX 0.25
//int main()
//{
//	float hours;
//	float salary, tax, taxed_salary;
//
//	printf("Please enter your working hours: ");
//	scanf("%f",&hours);
//
//	if (hours <= 30)
//	{
//		salary = BASE_SALARY * hours;
//		tax = BASE_TAX * salary;
//		taxed_salary = salary - tax;
//	}
//	else if (hours <= 40)
//	{
//		salary = BASE_SALARY * hours;
//		tax= BASE_TAX * 300+ EXTRA_TAX * (salary-300);
//		taxed_salary = salary - tax;
//	}
//	else
//	{
//		salary = BASE_SALARY * 40 + (hours - 40) * EXTRA_HOUR * BASE_SALARY;
//		if (salary <= 450)
//			tax = BASE_TAX * 300 + EXTRA_TAX * (salary - 300);
//		else
//			tax= BASE_TAX * 300 + EXTRA_TAX * 150+ EXCEED_TAX*(salary-450);
//
//			taxed_salary = salary - tax;
//	}
//	printf("工资总额为%.2f，税金为%.2f，净收入为%.2f。\n",salary,tax,taxed_salary);
//
//	return 0;
//}


//7-9pre，只能输入正整数，并判断该数是不是素数
//int main()
//{
//	int input;
//	int a = 0;
//
//	scanf("%d", &input);
//	while (input>0)
//	{
//		for (int i = 2; i < input; i++)
//		{
//			if (input / i == 0)
//			{
//				a++;
//			}
//		}
//		if (a == 0)
//			printf("%d是素数\n", input);
//		else
//			printf("%d不是素数\n", input);
//	}
//	printf("Done\n");
//	
//	return 0;
//}

//7-9，只能输入正整数，并打印小于等于该数的素数  //没懂答案为什么这么做
//int main()
//{
//	int datum = 0;
//	int i = 0, j = 0;
//
//	do 
//	{
//		scanf("%d",&datum);
//		for (i = datum; i > 1; i--)
//		{
//			int is_prime = 1;
//			for (j = 2; j < i; j++)
//			{
//				if (i % j == 0)
//				{
//					is_prime = 0;
//					break;
//				}
//			}
//			if (is_prime == 1)
//				printf("%d ", i);
//		}
//		printf("\n");
//	} while (datum != 0);      //没考虑输入为负数的情况，答案考虑了
//	printf("Done!\n");
//
//	return 0;
//}
//以下为答案
//int main(int argc, char* argv[])    //第一个int argc，是记录你输入在命令行上的字符串个数；第二个*argv[]是个指针数组，存放输入在命令行上的命令（字符串）—from百度
//{
//	int datum;
//	do 
//	{
//		printf("Enter a number (0 to exit):");
//		scanf("%d",&datum);
//		if (datum < 2) 
//		{
//			if (datum == 0)
//				break;
//			printf("%d is out of range, retry.\n", datum);
//			continue;
//		}//读取用户输入的正整数
//		printf("You input %d, so the prime from %d to 2 is: ",datum,datum);
//		for (int i = datum; i > 1; i--) 
//		{    //输入datum~2之间的每个数，依次判断是否为素数
//			int is_prime = 1;
//			for (int j = 2; j <= i / 2; j++) 
//			{
//				if (i % j == 0) 
//				{
//					is_prime = 0;
//					break;           //不是素数，退出循环
//				}
//			}
//			if (is_prime == 1)
//				printf("%d, ",i);
//		}
//		printf("\n");
//	} while (datum != 0);
//	printf("Done! bye.");
//	return 0;
//}
