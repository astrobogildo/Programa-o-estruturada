#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int somaPar (int v[], int tam)
{
  if (tam == 0)			// se estiver vazio o vetor
    return 0;
  else if (v[tam - 1] % 2 == 0)
    {
      return v[tam - 1] + somaPar (v, tam - 1);	// Ver se C) diferente de par
    }
  else
    return 0 + somaPar (v, tam - 1);	// chamada recursiva
}

int main ()
{

  int i, maior, n1, n2, n3, n4, n5;
  int num1[10];
  int num2[10];
  int num3[10];
  int num4[10];
  int num5[10];

  srand (time (NULL));

  for (i = 0; i < 10; i++)
    {
      num1[i] = rand ();
      num2[i] = rand ();
      num3[i] = rand ();
      num4[i] = rand ();
      num5[i] = rand ();
    }

  n1 = somaPar (num1, 10);
  n2 = somaPar (num2, 10);
  n3 = somaPar (num3, 10);
  n4 = somaPar (num4, 10);
  n5 = somaPar (num5, 10);
  printf ("SOMA1 =%d SOMA2=%d SOMA3=%d SOMA4=%d SOMA5=%d\n\n", n1, n2, n3, n4,
	  n5);
  if (n1 > 0)
    {
      maior = n1;
    }
  else if (n2 > maior)
    {
      maior = n2;
    }
  else if (n3 > maior)
    {
      maior = n3;
    }
  else if (n4 > maior)
    {
      maior = n4;
    }
  else if (n4 > maior)
    {
      maior = n5;
    }

  printf ("O maior NC:mero C): %d", maior);

  return 0;
}
