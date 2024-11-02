// Problem 1
// floorFunction
template<typename T>
int floorFunction(T num)
{
    return num;
}
// ceilingFunction
template<typename T>
int ceilingFunction(T num)
{
    if(num==int(num))
    {
        return int(num);
    }
    if(num>0)
    {
        return int(num)+1;
    }
    return int(num);
}
// Problem 2x
// swap_values
template<typename T>
void swap_values(T &a, T &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}

// Problem 3
// multiply
int multiply(int a, int b)
{
    if(b==0)
    {
        return 0;
    }b--;
    return a+multiply(a,b);
}
// Problem 4
// digitSum
int digitSum(int num)
{
    if(num==0)
    {
        return 0;
    }
    return num%10 + digitSum(num/10);
};
// Problem 5
// decimalToBinary
int decimalToBinary(int number)
{
    if (number == 0)
    {
        return 0;
    }
    return (number%2)+10* decimalToBinary(number / 2);
};

// Problem 6
// midValue
template<typename T>
T midValue(T a, T b, T c)
{
    if(a>b && b>c  c>b && b>a)
    {

        return b;
    }
    if(a>c && c>b  b>c && c>a)
    {
        return c;
    }
    if(b>a && a>c || c>a && a>b)
    {
        return a;
    }
}
#ifndef PROBLEMS_H
#define PROBLEMS_H

#endif //PROBLEMS_H