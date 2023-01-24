/* Returning a structure from a function */
#include<stdio.h>
struct player(){
  char name[20];
  float height, weight, fees;
};
void print_Structure(struct player p);
struct player deduct_fees(struct player p);
int main()
{

}
struct player deduct_fees(struct player p)
{
  p.fees = p.fees - 1000;
  return p;
}
void print_Structure(struct player p)
{
  printf("Name:- %s\n", p.name);
  printf("Height:- %f\n", p.height);
}