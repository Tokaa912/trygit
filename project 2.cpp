#include <bits/stdc++.h>
using namespace std;
struct Items
{
    int ItemID;
    string Name;
    int price;
};

struct Customer
{
    int CustomerID;
    string Phonenumber;
    long wallet;
    int points;

};
void add_customer(Customer arr2[],int size);
void add_item(Items arr1[],int size);
void print_customer(Customer arr2[],int size);
void print_item(Items arr1[],int size);
void make_order(Customer arr2[],Items arr1[],int size);
int main()
{
    int choice;
    Items arr1[1000];
    Customer arr2[1000];

    arr1[0].ItemID=1;
    arr1[0].Name="cappuccino";
    arr1[0].price=30;
    arr2[0].CustomerID=1;
    arr2[0].Phonenumber="0123456789";
    arr2[0].points=0;
    arr2[0].wallet=1000;
    arr1[1].ItemID=2;
    arr1[1].Name="espresso";
    arr1[1].price=50;
    arr2[1].CustomerID=2;
    arr2[1].Phonenumber="0123456788";
    arr2[1].points=0;
    arr2[1].wallet=2000;
    arr1[2].ItemID=3;
    arr1[2].Name="Turkish coffee";
    arr1[2].price=50;
    arr2[2].CustomerID=3;
    arr2[2].Phonenumber="0123456787";
    arr2[2].points=0;
    arr2[2].wallet=500;
    arr1[3].ItemID=4;
    arr1[3].Name="lemon";
    arr1[3].price=25;
    arr1[4].ItemID=5;
    arr1[4].Name="orange";
    arr1[4].price=25;

    cout<<"***************************************************\n";
    cout<<"             WELCOME TO LOYALITY PROGRAM           \n";
    cout<<"***************************************************\n";
    cout<<"[1] add customer\n"<< "[2] add a menu item\n"<<"[3] print all customers\n"<<"[4] print all items\n"<<"[5] Make order\n"<<"[6] Redeem Item\n"<<"[7] show the customer with the highest points\n";
    cin>>choice;
    switch (choice)
    {
        case 1 :
        {
            add_customer(arr2,1000);
            break;
        }
        case 2:
            {
                 add_item(arr1,1000);
                break;
            }
        case 3:
            {
                print_customer(arr2,1000);
                break;
            }
        case 4:
            {
                print_item(arr1,1000);
               break;
            }
        case 5:
            {
                 make_order( arr2, arr1,1000);
                break;
            }
        case 6:
            {
                break;
            }
        case 7:
            {
                break;

            }
        default:
            {
                cout<<"UNVALID PLEASE ENTER A NUMBER FROM 1:7\n";
                break;
            }
    }
   return 0;
}

void add_customer(Customer arr2[],int size)
{
    cout<<"ENTER YOUR ID AND PHONENUMBER AND POINTS AND WALLET\n";
    cin>>arr2[3].CustomerID>>arr2[3].Phonenumber>>arr2[3].points>>arr2[3].wallet;
}
void add_item(Items arr1[],int size)
{
    cout<<"ENTER THE ITEMID AND NAME AND THE PRICE OF THE ITEM\n";
    cin>>arr1[3].ItemID>>arr1[3].Name>>arr1[3].price;
}


void print_customer(Customer arr2[],int size)
{
    for(int i=0;i<3;i++)
    {
        cout<<"CustomerID"<<"\t"<<"PHONENUMBER"<<"\t"<<"wallet"<<endl;
        cout<<arr2[i].CustomerID<<"\t"<<arr2[i].Phonenumber<<"\t"<<arr2[i].points<<"\t"<<arr2[i].wallet<<endl;
    }
}


void print_item(Items arr1[],int size)
{
    for(int i=0;i<3;i++)
    {
        cout<<"ItemID"<<"\t"<<"Name"<<"\t"<<"price"<<endl;
        cout<<arr1[i].ItemID<<"\t"<<arr1[i].Name<<"\t"<<arr1[i].price<<endl;

    }
}

void make_order(Customer arr2[],Items arr1[],int size)
{
    string order;
    int id,j;
    cout<<"ENTER YOUR ID\n";
    cin>>id;
    cout<<"ENTER YOUR ORDER \n";
    cin>>order;
    for(int j=0;j<3;j++)
    {
        if (id==arr2[j].CustomerID)
        {
            break;
        }
    }
    for(int i=0;i<3;i++)
    {
        if (order==arr1[i].Name)
        {
            arr2[j].wallet=arr2[j].wallet-arr1[i].price;
            break;
        }
    }
    cout<<"YOUR MONEY NOW IS : "<<arr2[j].wallet<<endl;
}
