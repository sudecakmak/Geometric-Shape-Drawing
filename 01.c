#include <stdio.h>
#include <stdlib.h>

main()
{
	int n, a, b, c, r;
	int i, j, x, y;

	while (1)
	{
		printf("\nWhich shape would you like to draw?\n");
		printf(" 1. Line\n");
		printf(" 2. Parabola\n");
		printf(" 3. Circle\n");
		printf(" 4. Exit\n");

		scanf_s("%d", &n);

		switch (n)
		{
		case 1:
		{
			printf("\nLine formula is y = ax + b");

			printf("\nPlease enter coefficients a and b:");
			scanf_s("%d%d", &a, &b);

			for (i = 11; i >= -10; i--)
			{
				y = i;

				for (j = -10; j <= 11; j++)
				{
					x = j;

					if (y == a * x + b)
					{

						printf("*");
					}

					if (i == 0 & j == 0)
					{
						if (y == a * x + b)
							continue;

						printf("|");
					}

					if (j == 0 & i != 11)
					{
						if (y == a * x + b)
							continue;

						if (i == 0)
							continue;

						printf("|");
					}

					if (i == 11 & j == 0)
					{
						printf("y");
					}

					if (i == 0)
					{
						if (y == a * x + b)
							continue;

						if (j == 0)
							continue;

						printf("-");
					}
					else
					{
						if (y == a * x + b)
							continue;
						if (j == 0)
							continue;
						printf(" ");
					}

					if (j == 11 & i == 0)
					{
						printf("x");
					}
				}

				printf("\n");
			}
			break;
		}
		case 2:
		{
			printf("\nParabola formula is y = a(x^2) + bx + c");

			printf("\nPlease enter coefficients a, b and c:");
			scanf_s("%d%d%d", &a, &b, &c);

			for (i = 11; i >= -10; i--)
			{
				y = i;

				for (j = -10; j <= 11; j++)
				{
					x = j;

					if (y == (a*x*x) + (b*x) + c)
					{
						printf("*");
					}

					if (i == 0 & j == 0)
					{
						if (y == (a*x*x) + (b*x) + c)
							continue;

						printf("|");
					}

					if (j == 0 & i != 11)
					{
						if (y == (a*x*x) + (b*x) + c)
							continue;

						if (i == 0)
							continue;

						printf("|");
					}

					if (i == 11 & j == 0)
					{
						printf("y");
					}

					if (i == 0)
					{
						if (y == (a*x*x) + (b*x) + c)
							continue;

						if (j == 0)
							continue;

						printf("-");
					}
					else
					{
						if (y == (a*x*x) + (b*x) + c)
							continue;

						if (j == 0)
							continue;

						printf(" ");
					}

					if (j == 11 & i == 0)
					{
						printf("x");
					}
				}

				printf("\n");
			}
			break;
		}
		case 3:
		{
			printf("\nCircle formula is (x-a)^2 + (y-b)^2 = r^2");

			printf("\nPlease enter center's coordinates (a,b) and radius:");
			scanf_s("%d%d%d", &a, &b, &r);

			for (i = 11; i >= -10; i--)
			{
				y = i;

				for (j = -10; j <= 11; j++)
				{
					x = j;

					if ((x - a)*(x - a) + (y - b)*(y - b) == (r*r))
					{
						printf("*");
					}

					if (i == 0 & j == 0)
					{
						if ((x - a)*(x - a) + (y - b)*(y - b) == (r*r))
							continue;

						printf("|");
					}

					if (j == 0 & i != 11)
					{
						if ((x - a)*(x - a) + (y - b)*(y - b) == (r*r))
							continue;

						if (i == 0)
							continue;

						printf("|");
					}

					if (i == 11 & j == 0)
					{
						printf("y");
					}

					if (i == 0)
					{
						if ((x - a)*(x - a) + (y - b)*(y - b) == (r*r))
							continue;

						if (j == 0)
							continue;

						printf("-");
					}
					else
					{
						if ((x - a)*(x - a) + (y - b)*(y - b) == (r*r))
							continue;

						if (j == 0)
							continue;

						printf(" ");
					}

					if (j == 11 & i == 0)
					{
						printf("x");
					}
				}

				printf("\n");
			}
			break;
		}
		case 4:
		{
			break;
		}
		default:
		{
			printf("\nYou must enter 1,2,3 or 4!\n\n");
			break;
		}
		}

		if (n == 4)
			break;
	}

	printf("\n\n");
	system("pause");
}

//Sude Çakmak
//152120201044