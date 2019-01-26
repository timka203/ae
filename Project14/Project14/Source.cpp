#include <iostream>
#include <stdio.h>
#include <time.h>
#include <locale.h>
void task10()
{
	printf("не до конца понял , как делать");


}
void task9()
{
	int a[5][6] = { 0 };
	int count = 0;
	int count1 = 0;
	for (size_t i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			a[i][j] = 1 + rand() % 10;
			printf("%d  ", a[i][j]);
		}
		printf("\n");
	}
	for (size_t i = 0; i < 5; i++)
	{

		for (size_t j = 0; j < 6; j++)
		{
			if ((a[i][j] ==7))
				count++;
		
		}
	}
	printf("-%d-",count);




}
void  task8()
{
	int a[5][6] = { 0 };
	int count=0;
	int count1 = 0;
	for (size_t i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			a[i][j] = 1 + rand() % 10;
			printf("%d  ", a[i][j]);
		}
		printf("\n");
	}
	for (size_t i = 0; i < 5; i++)
	{
		
		for (size_t j = 0; j < 6; j++)
		{
			if ((a[i][j]%2==0))
				count++;
			else
			{
				count1++;
			}
		}
	}
	printf("-%d-%d-", count, count1);



}
void task7()
{
	int a[5][6] = { 0 };
	int sum[6] = { 0 };
	int min[6] = { 10 };
	int max[6] = { 0 };
	for (size_t i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			a[i][j] = 1 + rand() % 10;
			printf("%d  ", a[i][j]);
		}
		printf("\n");
	}
	for (size_t i = 0; i < 6; i++)
	{
		for (size_t j = 0; j<5; j++)
		{
			sum[i] = a[j][i] + sum[i];
		}
		sum[i] = sum[i] / 6;
		printf("%d\n",sum[i]);
	}
	for (size_t i = 0; i < 5; i++)
	{
		min[i] = 100;
		for (size_t j = 0; j < 6; j++)
		{
			if (a[i][j] < min[i])
			{
				min[i] = a[i][j];

			}
			if(a[i][j] > max[i])
			{
				max[i] = a[i][j];

			}
			
		}
		printf("(%d)-%d-%d\n", i, min[i], max[i]);
	}

}
void task6()
{

	int a[3][4] = { 0 };
	int c = 0;
	int y[3] = { 0 };
	int min[3] = { 100 };
	int minn = 100;
	for (size_t i = 0; i < 3; i++)
	{
		minn = 100;
		for (int j = 0; j < 4; j++)
		{
		
			a[i][j] = 1 + rand() % 10;
			printf("%d  ", a[i][j]);
			if (a[i][j] < minn)
			{
				minn = a[i][j];
				min[i] = j;
				
			}
		}

		printf("\n");
	}
	printf("\n---------\n");
	printf("%d-%d\n", min[0], min[2]);
	c = a[0][min[0]];
	a[0][min[0]] = a[2][min[2]];
	a[2][min[2]] = c;
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			printf("%d  ", a[i][j]);
		}
		printf("\n");
	}
	
}

void task5()
{
	int a[5][6] = { 0 };
	int count = 0;
	int y = 1;
	for (size_t i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			a[i][j] = 1 + rand() % 10;
			printf("%d  ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n---------\n");
	for (int i = 0; i < 9; i++)
	{
		int x = 0;
		int it = 0;
		for (int j = 4; j >= i; j--)
		{
			if (a[j][5] > a[j + 1][5])
			{
				x = a[j][5];
				a[j][5] = a[j + 1][5];
				a[j + 1] [5]= x;

				it++;
			}
		}
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j= 0; j < 6; j++)
		{
			printf("%d  ", a[i][j]);
		}
		printf("\n");
	}




}
void task4()
{
	printf("делали");


}
void task3()
{
	int a[10] = { 0 };
	 int count = 0;
	 int y = 1;
	for (size_t i = 0; i < 10; i++)
	{
		a[i] = 1 + rand() % 10;
		printf("%d\n", a[i]);
	}
	printf("\n---------\n");
	for (size_t i = 0; i < 10; i++)
	{
		for (int e = 0; e < 10; e++)
		{
			if (a[i] == a[e] && i != e)
				count++;
			if (count > y)
			{
				a[i] = 1 + rand() % 10;;
				count = 0;
				e = 0;
				y = 0;
			}

		}
	}
	for (int i = 0; i < 9; i++)
	{
		int x = 0;
		int it = 0;
		for (int j = 8; j >= i; j--)
		{
			if (a[j] > a[j + 1])
			{
				x = a[j];
				a[j] = a[j + 1];
				a[j + 1] = x;

				it++;
			}
		}
	}
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
	}


}
void task2()
{
	printf("делали");


}
void task1()
{
	printf("делали");

}
int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1: task1(); break;
		case 2: task2(); break;
		case 3: task3(); break;
		case 4: task4(); break;
		case 5: task5(); break;
		case 6: task6(); break;
		case 7: task7(); break;
		case 8: task8(); break;
		case 9: task9(); break;
		
		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}