#include <stdio.h>


int main()
{
	int T, i;
	float Term1, Term2, Final, Attendance, Class_Test1, Class_Test2,
		Class_Test3, Class_Test_Avg, big1, big2, Total;


	while (1)
	{
	    printf("\nHow many case? : ");
		scanf("%d", &T);
		if (T <= 100)
		{
			i = 1;
			while (i <= T)
			{
				printf("\nEnter Case %d marks: ", i);
				scanf("%f %f %f %f %f %f %f", &Term1, &Term2, &Final, &Attendance, &Class_Test1, &Class_Test2, &Class_Test3);
				while (1)
				{
					if (Term1 > 20 || Term1 < 0)
					{
						printf("\nTerm 1 marks is out of range. Try again.");

						break;
					}
					else if (Term2 > 20 || Term2 < 0)
					{
						printf("\nTerm 2 marks is out of range. Try again.");

						break;
					}
					else if (Final < 0 || Final > 30)
					{
						printf("\nFinal marks is out of range. Try again.");

						break;
					}
					else if (Attendance < 0 || Attendance > 10)
					{
	printf("\nAttendance marks is out of range. Try again.");

	break;
		}
		else if (Class_Test1 < 0 || Class_Test1 > 20)
		{
		printf("\nClass Test 1 marks is out of range. Try again.");

			break;
					}
					else if (Class_Test2 < 0 || Class_Test2 > 20)
					{
			printf("\nClass Test 2 marks is out of range. Try again.");

						break;
					}
					else if (Class_Test3 < 0 || Class_Test3 > 20)
					{
						printf("\nClass Test 3 marks is out of range. Try again.");
						break;
					}
					else
					{
						if (Class_Test1 >= Class_Test2 && Class_Test1 >= Class_Test3)
						{
							big1 = Class_Test1;

							if (Class_Test2 >= Class_Test3)
							{
								big2 = Class_Test2;
							}
							else
							{
								big2 = Class_Test3;
							}
						}
		else if (Class_Test2 >= Class_Test1 && Class_Test2 >= Class_Test3)
						{
							big1 = Class_Test2;

							if (Class_Test1 >= Class_Test3)
							{
								big2 = Class_Test1;
							}
							else
							{
								big2 = Class_Test3;
							}
						}
		else if (Class_Test3 >= Class_Test1 && Class_Test3 >= Class_Test2)
						{
							big1 = Class_Test3;

							if (Class_Test1 >= Class_Test2)
							{
								big2 = Class_Test1;
							}
							else
							{
								big2 = Class_Test2;
							}
						}

						Class_Test_Avg = (big1 + big2) / 2;

			Total = Term1 + Term2 + Final + Attendance + Class_Test_Avg;
						if (Total >= 90)
						{	printf("Case %d: A\n", i);
i++;
							break;
						}
						else if (Total >= 80 && Total < 90)
						{
							printf("Case %d: B\n", i);
							i++;
							break;
						}
						else if (Total >= 70 && Total < 80)
						{
							printf("Case %d: C\n", i);
							i++;
							break;
						}
						else if (Total >= 60 && Total < 70)
						{
							printf("Case %d: D\n", i);
							i++;
							break;
						}
						else if (Total < 60)
						{
							printf("Case %d: F\n", i);
							i++;
							break;
						}
					}
				}
			}
		}
		else
		{
			printf("Too many cases, try less than 100 cases please: ");
			continue;
		}
	}return 0;
}
