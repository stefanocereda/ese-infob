/* Frammento A */
int a, prod = 1;
scanf("%d", &a);
while (a>0) {
   prod = prod*a;
   scanf("%d", &a);
}
/* Frammento B */
int a, prod = 1;
scanf("%d", &a);
while (a>0) {
   prod = prod*a;
   a = a - 1;
}
/* Frammento C */
int a, prod = 1;
a = 1;
while (a>0) {
   scanf("%d", &a);
   if (a > 0)
      prod = prod*a;
}
