#include<bits/stdc++.h>
using namespace std;
const float PI = 3.14;
// Function Declaration
float factorial(int exponent);
double compute_sine(double result);
double compute_cosine(double result);

//Global Declaration
int deg;
float rad,deno,nume;
int exponent;
int i,ch;
double result;

int main()
{
    do
    {
        cout<<"Enter the Degree:";
        cin>>deg;
        cout<<"Enter your choice if you want sin enter 1 and if you want cos enter 2 and if you want tan enter 3:";
        cin>>ch;

        switch(ch)
        {
        case 1:
            {
                if(deg==90||deg==180)
                {
                    double x = compute_sine(result);
                    x = round(compute_sine(result));
                    cout<<"sin("<<deg<<")"<<" "<<"="<<" "<<x<<endl;
                }

                else
                 cout<<"sin("<<deg<<")"<<" "<<"="<<setprecision(2)<<" "<<compute_sine(result)<<endl;
                break;
            }
        case 2:
            {
                if(deg==90||deg==180)
                {
                    double y = compute_cosine(result);
                    y = round(compute_cosine(result));
                    cout<<"cos("<<deg<<")"<<" "<<"="<<" "<<y<<endl;
                }

                else
                   cout<<"cos("<<deg<<")"<<" "<<"="<<setprecision(2)<<" "<<compute_cosine(result)<<endl;


                break;
            }
        case 3:
            {
                double x = compute_sine(result);
                double y = compute_cosine(result);
                if (deg==90||deg==180)
                 {
                   x = round(compute_sine(result));
                   y = round(compute_cosine(result));
                   if(y==-1)
                    y=1;
                cout<<"Tan("<<deg<<")"<<" = "<<x/y<<endl;
                 }
               else
                cout<<"Tan("<<deg<<")"<<" = "<<x/y<<endl;
                break;

            }

        case 4:
            break;
        default :
            cout<<"Wrong choice:"<<endl;
            break;


        }

    }while(ch!=4);
       cout<<"The result is:"<<result<<endl;
    return 0;

}

// Function compute_sine Definition
double compute_sine(double result)
{
    result = 0.0;
    rad = deg*PI/180;
    for(i=0;i<15;i++)
    {
        exponent = (2*i)+1;
        nume = pow(rad,exponent);
        deno = factorial(exponent);
        result = result + ((nume*pow(-1,i))/deno);
    }

    return result;

}
// Function factorial Definition

float factorial(int exponent)
{
    int i;
    float fact = 1.0;
    for( i=1;i<=exponent;i++)
    {
        fact*=i;
    }
    return fact;
}

// Function compute_cosine Definition
double compute_cosine(double result)
{
    result = 0.0;
    rad = deg*PI/180;
    for(i=0;i<15;i++)
    {
        exponent = (2*i);
        nume = pow(rad,exponent);
        deno = factorial(exponent);
        result = result + ((nume*pow(-1,i))/deno);
    }

    return result;

}
