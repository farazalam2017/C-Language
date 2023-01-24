/* Array of structures as function argument */
#include<stdio.h>
struct company{
  char name[20];
  char ceo[20];
  float revenue;
  float pps;//price per stock
};
void printfStructure(const struct company str_arr[]);
int main()
{
  struct company companies[3] = {
    {"CountryBook","Tim green",999999,1300},
    {"CountryCooks","Jim Green", 99999, 700},
    {"CountryHooks","Sim Green",99999,300},
  };
  printfStructure(companies);
}
void printfStructure(const struct company str_arr[]){
  int i;
  for (i = 0; i < 3;i++)
  {
    printf("Name:- %s\n", str_arr[i].name);
    printf("CEO:- %d\n", str_arr[i].ceo);
    printf("Revenue:- %f\n", str_arr[i].revenue);
    printf("Price per stock:- %f\n", str_arr[i].pps); 
  }
}