#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//C Primer Plus��ϰ��
// 
//6-1��д������26��Сд��ĸ��
//int main()
//{
//	char alphabet[26];
//	int i;
//	char c = 'a';
//	for (i = 0; i < 26; i++, c++)  //��·��д��26����ĸ
//		alphabet[i] = c;
//	for (i = 0; i < 26; i++)
//		printf("%c",alphabet[i]);  //��·�����26����ĸ
//
//	return 0;
//}

//��2�⣬��ӡ�������ݣ��ؼ����ڡ����ѭ����ӡ�������ڲ�ѭ����ӡ���ݡ�
//���ڱ��⣬�ؼ�����ʶ������1�д�ӡ1���ַ�����2�д�ӡ2���ַ������ڲ�ѭ����������������
//int main()
//{
//	int i, j;
//
//	for (i = 1; i <= 5; i++)  //���ѭ�����ƴ�ӡ����
//	{
//		for (j = 0; j < i; j++)   //�ڲ�ѭ�����ƴ�ӡ���ݣ��ڲ�ѭ����������������
//			printf("%c",'$');
//		printf("\n");	
//	}
//
//	return 0;                              //��·����ӡ�������ݣ��ؼ����ڡ����ѭ����ӡ�������ڲ�ѭ����ӡ���ݡ�
//}

//��3�⣺
//�ҵ��������ǵ�1��͵�2��Ļ���
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
//�𰸵�������
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

//��4�⣺�ڵ�3��Ļ����������Ķ�
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

//6-6���������޺�������������//���Ĵ𰸣������Լ��õ�
//int main()
//{
//	int start, end;
//	int i;
//	printf("Enter the start number: ");
//	scanf("%d",&start);                    //��������
//	printf("Enter the end number: ");
//	scanf("%d",&end);                      //��������
//	printf("  Ori:   Square:    Cubic:\n");
//	for (i = start; i <= end; i++)
//		{
//			printf("%6d%10d%10d",i,i*i,i*i*i);
//			printf("\n");
//		}
//	return 0;
//}

//6-7����һ�����ʶ����ַ������У�Ȼ�����ӡ�õ���//�������ģ�scanf�����ʡ�ѭ����ʼֵ����ֵֹ����
//#include <string.h>
//int main()
//{
//	char word[30];
//	int i;
//	printf("Enter a word: ");
//	scanf("%s",word);   //��ȡ���ʣ������ǿո񡢻��з��ȿհ��ַ���ֱ��ʹ��scanf()������ȡ����    //��·����ȡ�û�д��ĵ���
//	printf("%d\n",strlen(word));   //strlen()ȷ���ַ��������Ч���ȣ�����ȷ����Ч�±�
//	//printf("%d\n",sizeof(word));    //���ʣ�scanfһ���ַ�����ô��ʾ��
//	for (i = strlen(word) - 1; i >= 0; i--)   //ѭ������ʼλ���ǵ��ʳ���-1����ֹλ����0
//	{
//		printf("%c",word[i]);
//	}
//	return 0;
//}

//6-8���ж������������Ϊ��������scanf("%f %f",&x,&y)==2
//int main()
//{
//	float x,y;
//
//	printf("Enter two float data (seprate by blank): ");
//
//	while(scanf("%f %f",&x,&y)==2)   //��������ûд����   //��·������ж��û���������������ǲ�������
//	{
//		printf("the answer is %f\n",(x-y)/(x*y));
//		printf("Enter two float data (seprate by blank): ");
//	}
//	printf("Not numbers!\n");
//
//	return 0;
//}

//��9�⣬���Լ�����ûд�Կ��˴𰸣���ע������д��������
//float function(float x, float y)
//{
//	return (x - y) / (x * y);         //��·�������Ķ���д��
//}
//int main()
//{
//	float x, y;
//
//	printf("Enter two float data (seprate by blank): ");
//
//	while (scanf("%f %f", &x, &y) == 2)
//	{
//		printf("The answer is %f\n", function(x,y));         //��·�������ĵ���
//		printf("Enter two float data (seprate by blank): ");
//	}
//	printf("Not numbers!\n");
//
//	return 0;
//}

//6-10��enter��scanf�����ʽ��ͬ��forѭ����ʼֵi�����ó������ƺ���ַ���ʾ
//int main()
//{
//	int sum = 0;
//	int lower, upper;
//	int i;
//	printf("Enter lower and upper integer limits (seprate by blank): ");
//	scanf("%d %d",&lower,&upper);   //��·��ע�⡰%d %d���м䲻���ö��ţ���Ϊenter����ʽҪ��scanf����ʽ��ͬ���˴�enter�Ѿ���������������֮���ÿո�
//	while (upper>lower)
//	{
//		for (i = lower; i <=upper; i++)  //��·����ʼֵi�Ҳ���Բ������֣����Ǹ�ֵ�ĳ�������
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

//6-11������8������//��11�⣬ע�����7��д�뵥�ʵ����𣬷�������Ա�7��15��11�������ӵ����ѭ����ʼ��ֵ����һ��
//int main()
//{
//	int i;
//	int data[8];   //����char ch[8];
//
//	printf("Enter eight integer data (seprate by blank): ");
//	for (i = 0; i < 8; i++)
//	{
//		scanf("%d", &data[i]);    //����scanf("%s",ch);       //��·���û�д��һ����������
//	}
//	for (i = 7; i >= 0; i--)       //����for (i = strlen(ch) - 1; i > 0; i--)
//	{
//		printf("%d", data[i]);     //����printf("%c",ch[i]);
//	}	
//	printf("\nDone!\n");
//
//	return 0;
//}

//��13�⣬һЩϸ��û���ǵ�������������д����
//int main()
//{
//	int j;
//	int data[8];
//	data[0] = 2;
//
//	for (int i = 1; i < 8; i++)
//	{
//		data[i] = data[i-1]*2;   //�ҵļ��㷽��̫����
//	}
//	int i = 0;    //����ע�⣬��û���ǵ�i��forѭ�����Ѿ���Ϊ7����������������³�ʼ��
//	do 
//	{
//		printf("%d\n",data[i++]);
//	} while (i<8);
//
//	return 0;
//}

//6-14���û�д��һ��˫���ȸ���������//ע��д��һ��������һ��for����������������һ��for��
//int main()
//{
//	double data1[8];
//	double data2[8];
//
//	printf("Enter eight integer data (seprate by blank): ");
//	for (int i = 0; i < 8; i++)
//	{
//		scanf("%lf",&data1[i]);       //��·���û�д��һ��˫���ȸ���������
//	}
//	data2[0] = data1[0];
//	for (int i=1; i < 8; i++)
//	{
//		data2[i] =data2[i-1] + data1[i];
//	}
//	//��һ������ʹ��Ƕ��ѭ��:
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
//	//����������dowhileд����������������û�����ϴ�������forд��ֱ��
//	//do
//	//{
//	//	printf("%lf", data1[i++]);
//	//	printf("\n%lf", data2[i++]);
//	//} while (i<8);
//	printf("\nDone!\n");
//	return 0;
//}

//6-15��//���ѣ�ע�����ǵ�����������������ӣ����������������ʱѭ���ĳ�ʼ��ֵ����һ����
//���ϣ�7��for (i = strlen(ch) - 1; i > 0; i--)��Ϊδ֪������ַ�������11��for (i = 7; i >= 0; i--)��Ϊ��ֻ֪��8������
//���ϣ�15��for (i--; i >= 0; i--)��Ϊ��ʱi��Ϊ�����ַ�����������һ���ַ�����\n�����ʱҪ�����\nɾ��
//int main()
//{
//	char data[256];    //255���ַ�����Ҫ����һ��\n��λ�ã���Ϊ256
//
//	printf("Enter the char in a line: ");
//
//	for (int i = 0; data[i] != '\n'; i++)     //��\n��Ϊ�ж��û�д����ֹ���ź�
//	{
//		scanf("%c",&data[i]);    //��·����ȡ�����򸡵��������ַ�Ҫ��&���������ַ�������������
//	}
//	printf("The reverse of the data: ");
//	for (i--; i >= 0; i--)       //��·����ʱ��i�����һ���ַ����±꣬��ʼ����i--��Ŀ����ɾ�����Ļ��з�
//	{
//		printf("%c",data[i]);    //��·����ȡ�ַ������ַ�Ҫ��&�����������
//	}
//	printf("\nDone!\n");
//
//	return 0;
//}


//7-1�⣬getchar()������//��ȡ���룬����#ֹͣ�������ȡ�Ŀո��������з��������������ַ�����
//int main()
//{
//	int blank=0;
//	int endline=0;
//	int others=0;
//	char ch;
//
//	while ((ch = getchar()) != '#')   //��getchar()д���ַ�������scanfһ�����飬��Ϊ�˴��������ȡ�ַ�
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

//7-2����ȡ���룬����#ֹͣ����ӡÿ���ַ�����Ӧ��ASCII�룬һ�д�ӡ8���ַ�
//int main()
//{
//	char ch;
//	int counter = 0;
//
//	while ((ch = getchar()) != '#')      //��·�����ζ�ȡ�ַ��������ַ�
//	{
//		if (counter++ % 8 == 0)    //ÿ8���ַ����У�ע�⵱counter=0ʱ�����ȴ�ӡһ�����з�
//			printf("\n");
//		if (ch == '\n')
//			printf("'\\n'-%03d. ",ch);    //��ʾ��ʽ��ﻻ�з�
//		else if (ch == '\t')
//			printf("'\\t'-%03d. ",ch);    //��ʾ��ʽ����Ʊ��
//		else
//			printf("'%c'-%03d. ",ch,ch);  //�����ַ���ӡԭ�ַ���ʮ������
//	}
//	printf("Done!\n");
//
//	return 0;
//}

//7-3��//�ʹ𰸵Ĵ���һ�����Ҳ�����//��ȡ������ֱ���û�����0����ӡż��������ż��ƽ��ֵ����������������ƽ��ֵ
//int main()
//{
//	int even_count = 0;
//	int odd_count = 0;
//	int even_sum = 0;
//	int odd_sum = 0;
//	int input = 0;
//
//	while (scanf("%d", &input))      //��ȡ��������
//	{
//		if (input == 0)
//			break;           //breakֻ����ѭ��for while dowhile�Ϳ���switch��ʹ��
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

//��4�⣬��if else��䣬��ȡ���룬����#ֹͣ���ø�̾���滻��ţ���������̾���滻��̾�ţ��������滻�˶��ٴ�
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

//7-5����switch��䣬��ȡ���룬����#ֹͣ���ø�̾���滻��ţ���������̾���滻��̾�ţ��������滻�˶��ٴ�
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
////�������ҵĴ��������������Բ�֪�����Ĵ���
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

//7-6���ж϶�ȡ�������ַ��Ƿ�Ϊ�涨�ַ�����ȡ���룬����#ֹͣ������ei���ֵĴ���
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

//7-7��һ����ѧ����
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
//	printf("�����ܶ�Ϊ%.2f��˰��Ϊ%.2f��������Ϊ%.2f��\n",salary,tax,taxed_salary);
//
//	return 0;
//}


//7-9pre��ֻ�����������������жϸ����ǲ�������
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
//			printf("%d������\n", input);
//		else
//			printf("%d��������\n", input);
//	}
//	printf("Done\n");
//	
//	return 0;
//}

//7-9��ֻ������������������ӡС�ڵ��ڸ���������  //û����Ϊʲô��ô��
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
//	} while (datum != 0);      //û��������Ϊ������������𰸿�����
//	printf("Done!\n");
//
//	return 0;
//}
//����Ϊ��
//int main(int argc, char* argv[])    //��һ��int argc���Ǽ�¼���������������ϵ��ַ����������ڶ���*argv[]�Ǹ�ָ�����飬����������������ϵ�����ַ�������from�ٶ�
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
//		}//��ȡ�û������������
//		printf("You input %d, so the prime from %d to 2 is: ",datum,datum);
//		for (int i = datum; i > 1; i--) 
//		{    //����datum~2֮���ÿ�����������ж��Ƿ�Ϊ����
//			int is_prime = 1;
//			for (int j = 2; j <= i / 2; j++) 
//			{
//				if (i % j == 0) 
//				{
//					is_prime = 0;
//					break;           //�����������˳�ѭ��
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
