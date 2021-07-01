#include<stdio.h>
int main ()
/*
    egg
    bread
    jam
    water
    salt
    pepper
*/
{
  int ch;
  Begin:
  printf("\n********************");
  printf("\nRecipie with egg,pepper,salt,bread - 1");
  printf("\nRecipie with bread,jam -2");
  printf("\n********************\n\n");
  printf("\nEnter your choice : ");
  scanf("%d",&ch);
  switch (ch)
  {
    case 1:
            printf("\n1.Take a tumber and break the egg and put a pinch of salt and pepper\n2.Stir the mixture nicely\n3.NOw put the mixture of egg , pepper and salt and put it on a broad container\n4.Now put the peices of bread inside the broad container and leave for 15 minutes\n5.Now put the peices of bread on the tawa and fry it.");
            printf("\n\nWala you get egg sanwich.");
            break;
    case 2:
            printf("\n1.Take a peice of break and apply jam on the bread");
            printf("\nAnd there you get bread jam.");
            break;
  }
  goto Begin;
  return 0;
}
