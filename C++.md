# FacePrep
# C++ 

* Hello world program
```c++
#include<iostream>
int main()
{
    std::cout<<"Hello World";
}
// Hello World
```
* Multiple Semicolons means no operation, as in they're empty statements
* Identifier ~> Names of variables,class or functions which could be a long sequence of digits,lowercase and uppercase letters and digits
* Keywords are collectiojns of reserved words and predefined identifiers
* maximum length considered is 31 characters

```c++
#include<iostream>
int main() // main is a predefined identifier not an keyword
{ 
    int main=10;  // common identifier
    std::cout<<main; // 10 will be printed
}
```
* There are 95 keywords in C++

<img src="https://github.com/piyushagarwal08/JU-Notes/blob/master/trigraph_sequence.png">

* In modern compilers, trigraph features are disabled by default
* Generally, C++ compiler ignores the white-spaces
* We can comment also as``` // any comment \ move to next line```
* In all web-based compilers, 0 is assigned to an uninitialized local variable by default. But, in the offline compiler(Dev C++, Turbo C), garbage value is assigned to an uninitialized local variable 
* To find the length of string, use ```<cstring>``` directive and ```str.length()``` function 
* To String as input we use the code as
```c++
#include<iostream>
using namespace std; // used to declare string datatype
int main()
{
    string x;
    // cin reads only words before space
    getline(cin,x); // takes a complete line as input
    std::cout<<x;
}
```
* To access global variables we use ```::``` as ```cout<<::global-variable-name;```
* Integer literal prefixes representation:
    1. Decimal ~> 63,23,231
    2. Octal ~> 077, 043, 076 (0 to 7)
    3. Hexadecimal ~> 0x3F, 0x4A (0 to 9 and A to F)
    4. Binary Integer literal ~> 0b011, 0b100
* Adding u or U as a suffix, modifies the integer data-type into unsigned int.
* the suffix l or L indicated the literal and long integer literal. To denote unsigned long int, the suffix to be used is ul or UL. Adding a l or L will make it unsigned long long int.
* Floating point literals are used to represent and store real numbers
* The suffix f or F indicates a type of float, and the suffix l or L indicates a type of long double. If a suffix is not specified, the floating-point constant has a type double.

```c++
#include<iostream>
int main()
{
    float f=54E; // error as there are no digits after E
    std::cout<<f;
}
```
* Carriage Return (\r) ~> Going back to the start of line deleting everything in betweem
* To store multiple characters in a variable we can use, ```std::string variable-name```

```c++
#include<iostream>
int main()
{
    std::cout<<"\"Hi "
    "all " "can you tell""me, what I will print\"";
}
// "Hi all can you tellme,what I will print"
```

```c++
#include<iostream>
int main()
{
    bool isTrue=true;
    bool isFalse=false;
    std::cout<<"This PRINTS " << isTrue << "\n";
    std::cout<<"And this prints " << isFalse << "\n";
}
// This PRINTS 1 \
And this prints 0
```
* ```const``` keyword can be used as a prefix to declare constants of the particular type
```const data-type variable_name = value;```
* constants in C++ can be defined using ```#define and const```
* syntax is ```#define identifier replacement``` and ```#define``` is a preprocessor directive
* A ```modifier``` is used to alter the meaning of the base type so that it more precisely fits the needs of various situations also called ```data modifiers```
* ```Data modifiers``` can alter the length of basic data types

* Integer Type Modifiers:
<table>
<tr><td>Type</td><td>Size</td><td>Range</td></tr>
<tr><td>short</td><td>2</td><td>-32768 to 32767</td></tr>
<tr><td>unsigned short</td><td>2</td><td>0 to 65535</td></tr>
<tr><td>signed short</td><td>2</td><td>same as short</td></tr>
<tr><td>int</td><td>4</td><td>-32768 to 32767</td></tr>
<tr><td>unsigned int</td><td>4</td><td>0 to 65535</td></tr>
<tr><td>signed int</td><td>4</td><td>Same as int</td></tr>
<tr><td>long</td><td>8</td><td>-2147483648 to 2147483647</td></tr>
<tr><td>unsigned long</td><td>8</td><td>0 to 4294967295</td></tr>

<tr><td>signed long</td><td>8</td><td>Same as long</td></tr>
</table>

* Character Type Modifiers ~> char is neither signed nor unsigned
* Floating-point Type Modifiers:
    1. Float - size:4 - precision:7
    2. Double - size:8 - precision:15
    3. long double - size:12 - precision:19
* If no data type is given to a variable after type modifier, then compiler automatically converts it to int data type
* We can't use any modifiers in float data type.If programmer tries to use it, the compiler automatically gives compile time error
* only ```long``` modifiers are allowed for ```double``` data type

* ```typedef``` allows you to create a new name for an existing data type, ```typedef type name```
example: ```typedef int awesome```

* enumeration:  
    1. Syntax ```enum enum_variable{state=0,state=1,...}```
    2. only blue-print is created from above code
    3. to create a variable ```enum enum-name variable-name```
    4. another way is ```enum enum_variable{state=0,state=1,...}variable-name```
```c++
#include<iostream>
enum season{spring,summer,autumn,winter}; // 0,1,2,3
int main()
{
    season climate;
    climate=summer //1
    std::cout<<"Climate = "<<climate; 
    // Climate = 1 
}
```
* All variables will be in an ```auto``` storage class until we define a storage class with a different scope

## Storage Class
* Storage classes provide information like visibility/scope of the variable in a program, memory location of a variable in memory, default value and it's lifetime.
* Supported types are:
    1. ```auto``` :
        * Default storage class
        * Lifetime: inside the block
        * Default value: garbage value
        * Example: int var; or auto int var;
    2. ```register```:
        * stored in CPU registers to allow fast access
        * Lifetime: inside the block
        * Default value: garbage
        * Example: register int var;
    3. ```static```:
        * Scope: local to the function
        * Lifetime: through out the program
        * Default value: 0
        * Example: static int var;
    4. ```extern```:
        * Global scope
        * Lifetime: throughout the program
        * Default value: 0
        * Example: extern int var;
        * while defining extern variable in a function or a block, it should not be initialized.It's because of linkage issues, which we will discuss later in the upcoming lessons
        
    ```c++
    #include<iostream>
    #include "extern_var_pgm.cpp"
    extern int count=1 //declaration of variable count

    int main()
    {
        cout <<"count: " <<count<<endl; // count: 1
        incrementCount(); // count gets 2
        cout<<"count: "<< count <<endl; // count: 2
        return 0;
    }

    // file : extern_var_pgm.cpp
    int count = 7;
    void incrementCount()
    {
        count = count +1;
    }    
    ``` 
    5. ```mutable```:
        * Only applicable to class data members
        * used to restrict the modification


```c++
#include<iostream>
using namespace std;
int main()
{
  int a,b;
  std::cin>>a>>b;
  std::cout<<"a+b="<<a+b<<endl;
  std::cout<<"a-b="<<a-b<<endl;
  std::cout<<"a*b="<<a*b<<endl;
  std::cout<<"a/b="<<a/b<<endl;
  std::cout<<"a%b="<<a%b<<endl;
  return 0;
}
```
```cpp
#include<iostream>
int main()
{
    int a =2;
    int b=9;
    std::cout<<((b=2)==a); // 1
}
```
```cpp
#include <iostream>
int main()
{
  int a=9, b=1, c=3;
  int result1=((a==9)||(b=3));  // 1 || b=1
  std::cout<<"Result1 : "<<result1<<" b : "<<b; // Result1 : 1 b : 1
  int result2=((b>c)&&(c=0));  // 0 && c=3
  std::cout<<"\nResult2 : "<<result2<<" c : "<<c;  // Result2: 0 c 3
}
```

* Integers are of two types:
    1. Positive ~> Stored as Binary Representation
    2. Negative ~> 2's complement
* To Calculate 2's complement ~ convert 1 to 0 and vice versa, add 1 to it and set - sign in front

```cpp
#include<iostream>
int main(){
  int a = 13, b = 45;
  a++; // 14
  b--; // 44
  int c = (++a) + (b--); // c = 14 + 44
  std::cout<<a<<" "<<b<<" "<<c; // 14 , 43, 59
}
```

* Miscellaneous Operators
    1. Sizeof Operator:
        * Unary operator
        * can have a variable or a data-type as an operand
        * returns the size of the operand
    2. Comma Operator
        * Used to separate two or more expressions that are included where only one expression is expected
        * Example: a=(b=3,b+2) // a=5 b = 3
    3. Explicit type-cast operator
        * Converts a value of one type to another data-type
        * x=int(y) , if y is of type float
        * x = int(y) , if y is of type float
    4. Ternary Operator
        * Evaluates one expression, either results in true or false
        * condition?true-expression:false-expression
        * example: ```(7==5)?std::cout<<"equal":std::cout<<"not equal";```

```cpp
#include<iostream>
int main()
{
    int x;
    std::cin>>x;
    x%2==0?std::cout<<"Possible":std::cout<<"Not possible";
    return 0;
}
```
* if two or more operators have same precedency then grouping is followed
```cpp
#include<iostream>
int main()
{
	int a = 10, b = 11, c = 3;
	std::cout << ++a + 2 * b++ / c;
    // 11 + 2 * 11 / 3 \
    11 + 22 / 3 \
    11 + 7 = 18

	return 0;
}
```
```cpp
#include<iostream>
int main()
{
	int a = 1, b = 2, c;
	c = a << b >> 1; 
    // 4 >> 1 ~> c =2
	std::cout<<c;
	return 0;
}
```
* The Newspaper Agency
```cpp
#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  // w is no of copies sold and x is cost per copy and y cost agency spends
  
  int w,x,y,result;
  std::cin>>w>>x>>y;
  result = w*x - w*y - 100;
  std::cout<<result;
  return 0;
}
```

```cpp
#include<iostream>
using namespace std;

float round(float var)
{
  float value = (int)(var*100 + 0.5);
  return (float)value/100;
}

int main()
{
  //Type your code here.
  // discount is of 2 % on interest
  int x ;// x =  principal amount borrowed by alice
  int r; // r = rate of interest
  int y; // y - time for interest in years
  float si,amount,discount,result;
  std::cin>>x>>r>>y;
  si = (x*r*y)/100;
  amount = si+x;
  discount = 0.02*(si);
  result = amount-discount;
  std::cout<<round(si)<<"\n"<<round(amount)<<"\n"<<round(discount)<<"\n"<<round(result)<<endl;
  
  return 0;
}
```
<<<<<<< HEAD

* to find the square root we use ``` cmath``` preprocessing directry .
* Hip hop
```
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  //Type your code here.
  int x,y,r;
  std::cin>>x>>y;
  r = sqrt((x-3)*(x-3) + (y-4)*(y-4));  // finds the perpendicular distance between 2 points
  std::cout<<r;
  return 0;
}
```

* Four musketeers
```
#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int x1, y1, x2, y2, x3, y3;
  cin>>x1>>y1>>x2>>y2>>x3>>y3;
  float x, y;
  x = (float)(x1 + x2 + x3)/3;
  y = (float)(y1 + y2 + y3)/3;
  cout<<x<<endl;
  cout<<y<<endl;
  
}
```

* Expression in switch case can only be int,short,char.
* Switch does not work for float
* fallthrough is a condition that occurs when break is not used.

* Sizeof Oprator
```
#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  cout<<sizeof(char)<<endl;
  cout<<sizeof(int)<<endl;
  cout<<sizeof(float)<<endl;
  cout<<sizeof(double)<<endl;
  
}
```

* terary oprator
```
#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int a;
  cin>>a;
  a%2 == 0 ? cout<<"Even" : cout<<"Odd";
}
```

* Smallest number 
```
#include <iostream>
using namespace std;

int main() 
{
   // Try out your code here
  int a, b;
  cin>>a>>b;
  if (a < b)
     cout<<a<<" is smallest number";
  else
     cout<<b<<" is smallest number";
    
   return 0;
}
```
* Leap year
```
// leap year
#include <iostream>
using namespace std;
/*
If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
The year is a leap year (it has 366 days).
The year is not a leap year (it has 365 days).
*/
int main() 
{
   // Try out your code here
    int y;
  std::cin>>y;
  if(y%4==0)
  {
    if(y%100==0)
    {
      if(y%400==0)
        std::cout<<"Vicky can celebrate his birthday.";
      else
        std::cout<<"Vicky can't celebrate.";
  	}
    else
      std::cout<<"Vicky can celebrate his birthday.";
  }
  else
    std::cout<<"Vicky can't celebrate.";
  return 0;
}
```

* Expression in switch case can only be int,short,char.
* Switch does not work for float
* fallthrough is a condition that occurs when break is not used.
* Electricity bill
```
#include<iostream>
using namespace std;
int main()
{
  int a, b, c, d;
  cin>>a;
  if (a <= 200)
    b = a * 0.5;
  else if ((a <= 400) && (a > 200))
    b = (a * 0.65) + 100;
  else if ((a <= 600) && (a > 400))
    b = (a * 0.85) + 200;
  else if (a > 600)
    b = (a * 1.25) + 450;
  
  
  cout<<"Rs."<<b;
}
```

* Gardning
```
//Gardening
#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int r,c,t;
  std::cin>>r>>c>>t;
  if(t>r && t<=2*r)
    std::cout<<"It is a mango tree";
  else if(t<=r*(c-1) && t > r*(c-2))
    std::cout<<"It is a mango tree";
  else
    std::cout<<"It is not a mango tree";
  return 0;
}
```
* Cricket!
```
#include<iostream>

#include<iomanip>

using namespace std;

int main()

{

int a,b,x,y;

 std::cin>>a>>b>>x>>y;

 float m = a/6;

 int n = y/6;

 int p = y%6;

 float k = ((float)n + (float)p/10);

 float d = x/k;

 float f = b/m;

 std::cout<<m<<"\n";

 std::cout<<std::fixed<<std::setprecision(1)<<k<<"\n";

 std::cout<<d<<"\n"<<f<<"\n";

 if(d>f)

   std::cout<<"Eligible to Win";

 else

   std::cout<<"Not Eligible to Win";

}
```

* Car Milagi
```
#include<iostream>
using namespace std;
int main()
{
  float x; //mileage
  int y,z; // litres of petrol, distance to travel
  std::cin>>x>>y>>z;
  x*y>=z?std::cout<<"Can reach":std::cout<<"Cannot reach";
  return 0;
  
}
```
```
//game with shapes
#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  // x ~> radius of circle , y~> length of square
  int x,y;
  std::cin>>x>>y;
  if(2*x<=y)
    std::cout<<"circle can be inside a square";
  else
    std::cout<<"circle cannot be inside a square";
  return 0;
}
```

```
//Age detector
#include<iostream>
using namespace std;
int main()
{
   int x,y;
  std::cin>>x>>y;
  if(y>x)
    std::cout<<y-x<<endl;
  else
    std::cout<<(100+y)-x<<endl;
  return 0;
}
```
* online shoping
```
#include<iostream>
int main()
{
  //Type your code here.
  int a, b, c, d, e, f, g, h, i, fl, am, sd;
  std::cin>>a >>b >>c;
  std::cin>>d >>e >>f;
  std::cin>>g >>h >>i;
  
  
  fl = (a-((a*b)/100)) + c;
  sd = (d -((d*e)/100)) + f;
  am = (g -((g*h)/100)) + i;
  
  std::cout<<"In Flipkart: Rs."<<fl;
  std::cout<<"\nIn Snapdeal: Rs."<<sd;
  std::cout<<"\nIn Amazon: Rs."<<am;  
  
  if((fl < sd) && (fl < am))
    std::cout<<"\nHe will prefer Flipkart";
  else if(sd < am)
    std::cout<<"\nHe will prefer Snapdeal";
  else if (am < sd)
    std::cout<<"\nHe will prefer Amazon";
  
  return 0;
}
```
```
//Microvave open
#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int n;
  float h;
  cin>>n>>h;
  
  
  switch(n)
  {
    case 1: cout<<h * float(n); break;
    case 2: cout<<h * 1.5;  break;
    case 3: cout<<h * 2.0;  break;
    default: cout<<"Number of items is more";
  }
  return 0;
}
```
```
//Matinee movie tickets
#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int a;
  float t;
  std::cin>>a>>t;
  if(t>13 && t<16)
  {
    if(a > 13)
      std::cout<<"$5.00";
    else
      std::cout<<"$2.00";
  }
  else
  {
    if(a > 13)
      std::cout<<"$8.00";
    else
      std::cout<<"$4.00";
  } 
  return 0;
}
```

* Decision making
```
#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int x,y,z;
  std::cin>>x>>y>>z;
  
  if(x>y && x<z || x>z && x<y) // x is second largest
    std::cout<<"The treasure is in box which has number "<<x<<endl;
  else if(y>x && y<z || y>z && y<x)
    std::cout<<"The treasure is in box which has number "<<y<<endl;
  else if(z>x && z<y || z>y && z<x)
    std::cout<<"The treasure is in box which has number "<<z<<endl;
  
  if(y%x==0 && z%x==0)
    std::cout<<"The code to open the box is "<<x;
  else if(z%y==0 && x%y==0)
    std::cout<<"The code to open the box is "<<y;
  else if(x%z==0 && y%z==0)
    std::cout<<"The code to open the box is "<<z;
  else
    std::cout<<"The code to open the box is "<<1;
  return 0;
}
```
```
//sece dining
/*
front ~> r1 ~> left
front ~> r2 ~> right
rear ~> r1 ~> right
rear ~> r2 ~> left
Assume rail is attached with the wall
and if no rail is selected, then print based on door
*/
#include<iostream>
using namespace std;
int main()
{
  string s;
  int rail;
  getline(cin,s);
  std::cin>>rail;
  if(s=="front" && rail==1 || s=="rear" && rail==2)
    std::cout<<"Left Handed";
  else if(s=="front" && rail==2 ||  s=="rear" && rail==1)
    std::cout<<"Right Handed";
  else if(s=="front")
    std::cout<<"Right Handed";
  else
    std::cout<<"Left Handed";
  return 0;
}
```

```
#include<iostream>
using namespace std;
int main()
{
  // Time Sheet
  //Type your code here.
  /*
  100 per hr
  +15 per hr if hr>8
  +25 per hr if hr >40 in one week
  +25% of hr saturday and +50% of hr for sundays
  */
  int a[7],pay=0,total=0;

  for( int b = 0; b < 7; b++)
      {
        std::cin>>a[b];
      }
  for(int i=0;i<7;i++)
  {
    if(a[i]>8)
      pay = pay+15*(a[i]-8);
    
    if(i==0)
      pay = pay+100*a[i]+0.5*100*a[i];
    else if(i==6)
      pay = pay + 100*a[i] + (100*a[i])/4;
    else
    	pay = pay + 100*a[i];
    total = total+a[i];
}
  if(total-a[0]-a[6]>40)
    pay = pay+25;
  std::cout<<pay;
  return 0;
}
```

* For loop is also known as ```Entry Controlled Loop```
---
## Stage 3
### Loop

```
#include<iostream>
int main(){
  // Type your code here
  //factorial 
  //5*4*3*2*1
  int x,result=1;
  std::cin>>x;
  for(;x>0;x--)
    result = result*x;
  std::cout<<result;
  return 0;
}
``` 

```
//reverse a number 
#include <iostream>
int main() 
{
	int x;
  std::cin>>x;
  while(x>0)
  {
   std::cout<<x%10;
    x = x/10;
  }
  
}
```

```
//paladrome
#include <iostream>
int main() 
{
	int n, rev = 0, temp;
  	std::cin>>n;
  temp = n;
  	while(n > 0){
            int r = n % 10;
            rev = rev * 10 + r;
            n = n / 10;
       }
       if(rev == temp)
  	    std::cout<<"Palindrome";
	return 0;
}
```

* counts of digits
```
#include<iostream>
#include <bits/stdc++.h> 
using namespace std; 
// To count the no. of digits in a number 
void count_digits(int n) 
{ 
    // converting number to string using 
    // to_string in C++ 
    string num = to_string(n); 
  
    // calculate the size of string 
    cout << num.size() << endl; 
} 
// driver function 
int main() 
{ 
    // number 
    int n; 
  cin>>n;
    count_digits(n); 
    return 0; 
} 
```

* decript the message
```
//6 has divisors 1, 2 and 3 (excluding itself), and 1 + 2 + 3 = 6, so 6 is a perfect number.
#include<iostream>
int main()
{
 int a,b,num,i,div,sum=0;
 std::cin>>a>>b;
 num=a+b;
 for(i=1;i<num;i++)
 {
   div=num%i;
   if(div==0)
     sum=sum+i;
 }

 if(sum==num)
   std::cout<<"They can read the message";
 else
   std::cout<<"They can't read the message";
 return 0;
}
```

```
//handshake
#include<iostream>
using namespace std;
int main()
{
 int a,n;
 std::cin>>n;
 a=(n*(n-1))/2;
   std::cout<<a;
}
```

```
//dollar and cents
#include<iostream>
using namespace std;
int main()
{
  int a, b, c, d, e, f;
  cin>>a>>b>>c>>d;
  e = a + c;
  f = b + d;
  if(f>99)
  {
    e = e + 1;
    f = f - 100;
  }
  cout<<e<<endl;
  cout<<f;
  
}
```

```
#include<iostream>
using namespace std;
int main()
{
 int n,count=0;
 cin>>n;
 cout<<n<<endl;
 while(n!=1)
 {
   if(n%2==0)
     n=n/2;
   else
     n=3*n+1;
   cout<<n<<endl;
   count++;
 }

 cout<<count;
}
```

* fibonacci series
```
#include <iostream>  
using namespace std;  
int main()  
{  
int n1=0,n2=1,n3,i,number;    
std::cin>>number;    
for(i=2;i<number;++i)  
{    
 n3=n1+n2;    
 n1=n2;    
 n2=n3;    
}  
std::cout<<n3;
}
```

```
// Viva on odd numbers
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
int num;
float marks=0.0 ;
for(int i=0;i<3;)
{
cin>>num;
if(num<0)
{
marks=marks-1;
break;
}
else if(num%2==0)
{
marks=marks-0.5;
}
else{
marks=marks+1;
i++;
}
}
cout<<marks<<endl;
}
```

* Kaprekar number
```
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
bool chkkaprekar(int n)
{
    if (n == 1)
       return true;
    int sqr_n = n * n;
    int ctr_digits = 0;
    while (sqr_n)
    {
        ctr_digits++;
        sqr_n /= 10;
    }
    sqr_n = n*n; 
    for (int r_digits=1; r_digits<ctr_digits; r_digits++)
    {
         int eq_parts = pow(10, r_digits);

         if (eq_parts == n)
            continue;
         int sum = sqr_n/eq_parts + sqr_n % eq_parts;
         if (sum == n)
           return true;
    }
    return false;
}
int main()
{
int kpno;

cin >> kpno;
          chkkaprekar(kpno)? cout<<"Kaprekar Number": cout <<"Not a Kaprekar Number";
          cout <<endl; 
}
```

* Data Mining
```
#include<iostream>

#include <bits/stdc++.h>  

using namespace std;  

int reverse(int n)  

{  

   int rev = 0;  

   while (n != 0) {  

       rev = (rev * 10) + (n % 10);  

       n /= 10;  

   }  

   return rev;  

}  

void getSum(int n)  

{  

   n = reverse(n);  

   int sumOdd = 0, sumEven = 0, c = 1;  

 

   while (n != 0) {  

 

       if (c % 2 == 0)  

           sumEven += n % 10;  

       else

           sumOdd += n % 10;  

       n /= 10;  

       c++;  

   }

 

 if(sumOdd==sumEven)

   cout<<"Yes";

 else

   cout<<"No";

}  

int main()  

{  

   int n ;

     cin>>n;

   getSum(n);  

   return 0;  

}
```

* target practice
```
#include <iostream>

using namespace std;

 

int main(void)

{

   int target, score, attempt=0, sum=0;

cin>>target;

while(sum<target)

{

 cin>>score;

 sum=sum+score;

 attempt++;

}

cout<<"The number of turns is "<<attempt<<"\n";

}
```
### Series

* I
```
#include <iostream>
#include <cmath>
int main()
{
int n;
std::cin>>n;
double r=0.5;
for(int i=0;i<n;i++)
{
if(i==0)
{
std::cout<<r;
continue;
}
else
{
double t=pow(3,i-1);
double x=t+r;
r=x;
std::cout<<" "<<x;
}
}
}
```

* II
```
//Write a program to generate the first 'n' terms of the following series 121, 225, 361,...
#include<iostream>
int main ()
{
   int n, a=11, x=4, i=0, num;
   std::cin>>n;
for(i=0;i<n;i++)
{
   num=a*a;
   std::cout<<num<<" ";
   a=a+4;
}
}
```

* III
```
//Write a program to generate the first 'n' terms of the following series 6, 11, 21, 36, 56,...
#include<iostream>

using namespace std;

int main()

{

 int n,i,j=6,sum=5;

 cin>>n;

 for (i=1;i<=n;i++)

 {

 cout<<j<<" ";

 j=j+sum;

  sum=sum+5;  

 }

 return 0;

}
```

* seriers IV
```
//Write a program to generate the following series 0,2,8,14,...,34.
#include<iostream>

using namespace std;

int main()

{

int n,x;

 cin>>n;

 for (int i = 1; i <= n; i++)

   {

   x=i*i;

   if (x%2 == 0)

   cout<< x - 2<<" ";

 else

   cout<< x - 1<<" ";

   }  

}
```
* series 4
```
//Write a program to generate the first 'n' terms of the following series 121, 225, 361,...

#include<iostream>


int main ()

{

   int n, a=11, x=4, i=0, num;

   std::cin>>n;

   

for(i=0;i<n;i++)

{

   num=a*a;

   std::cout<<num<<" ";

   a=a+4;

}

}
```

* Pattern !
```
/*
Write a program to print the following pattern.
Sample Input:

3

Sample Output:

3 
44 
555 
6666 
6666 
555 
44 
3
*/


#include<iostream>

using namespace std;

int main()

{

int n = 3,n1,i,j;

cin >> n1;

for(i=1;i<=n+1;i++)

{

for(j=1;j<=i;j++)

cout<<n1;

n1++;

cout<<endl;

}

n1--;

for(i=n+1;i>=1;i--)

{

for(j=1;j<=i;j++)

cout<<n1;

n1--;

cout<<endl;

}

}
```

* pattern 2
```
/*
Write a program to print the following pattern.
Sample Input:

5

Sample Output:

1
3*2
4*5*6
10*9*8*7
11*12*13*14*15
*/

#include<iostream>  

using namespace std;  

void printPattern(int n)  

{  

   int j, k = 0;  

   for (int i=1; i<=n; i++)  

   {  

       if (i%2 != 0)  

       {  

           for (j=k+1; j<k+i; j++)  

               cout << j << "*";  

           cout << j++ << endl;  

           k = j;      

       }  

       else

       {  

           k = k+i-1;  

           for (j=k; j>k-i+1; j--)  

               cout << j << "*";  

           cout << j << endl;      

       }  

   }  

}  

int main()  

{  

   int n;

  cin>>n;

   printPattern(n);  

   return 0;  

}
```

* series 3
```
/*
Write a program to print the following pattern.
Sample Input:

5

Sample Output:

1 
2*2 
3*3*3 
4*4*4*4 
5*5*5*5*5 
5*5*5*5*5 
4*4*4*4 
3*3*3 
2*2 
1
*/

#include<iostream>

int main()

{

 int n,j;

 std::cin>>n;

 for(int I=1; I<=n; I++)

 {

   for( j=1; j<=I; j++)

     if (j<I)

     {

       std::cout<<I<<"*";}

   

   else

   {

     std::cout<< I<<"\n";

   }

 }

 for(int I=n; I>=0; I--)

 {

   for( j=1; j<=I; j++)

     if (j<I)

       std::cout<< I<<"*";

   else

     std::cout<< I<<"\n";

 }

}
```

Patternu IV
```
/*
Write a program to print the given below pattern.
Sample Input:

5

Sample Output:

11112
32222
33334
54444
55556
*/
#include <iostream>

using namespace std;

int main() {

   int flag=0;

  int n,i,j;

   cin>>n;

 int s=0;

  int l=n+1;

  int m,k;

   m=n;

 for(int i=1;i<=n;i++)

 {

  for(int j=2;j<l;j++)

   {

    if(i%2!=0)

       {

        cout<<i;

          k=i;

           flag=1;

           s=j;

         if(s==m)

         {

          cout<<++k;

         }

       }

       

     if(i%2==0)

     {

      cout<<i;

       flag=0;

     }

   }

   cout<<endl;

   if(i<n)

   {

    if(flag==1)

     {

    cout<<++k;

    }

   }

   

 }

   return 0;

}
```



