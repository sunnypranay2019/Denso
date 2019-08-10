#include<iostream>
using namespace std;
int main()
{
   int price,discount,count = 0;
   cin >> price >> discount;
   discount = 100 - discount;
   while(price>0)
   {
       count = count + price;
       price = (discount*price) / 100;
   }
   cout <<  count;
   return 0;
}
