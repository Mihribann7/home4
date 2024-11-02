//Problem1
// floorFunction
template<typename T>
int floorFucntion (T num) {
    return num;
}
//ceilingFunction
template <typename T>
int ceilingFunction(T num) {
    if(num==int(num)) {
        return int(num);
    }
    if(num>0) {
        return int(num)+1;
    }
    return int(num);
}



//Problem2
//swap_values
void swap_values(double a, double b) {
    a = a+b;
    b=a-b;
    a=a-b;
}

//Problem3
//multiply
int multiply(int a, int b) {
    if (a==0 || b==0)  return 0;
    return a + multiply(a, b-1);
}

//Problem4
//digitSum
int digitSum(int n) {
    if (n==0) return 0;
    return n%10 + digitSum(n/10);
}

//Problem5
//decimalToBinary
int decimalToBinary(int n) {
    if (n == 0) return 0;

    return  n % 2+10* decimalToBinary(n / 2);;
}

//Problem6
//midvalue
template <typename T>
T midValue(T a, T b, T c) {
    if (a > b && a < c || b>a && a>c)  return a;
    if (b > a && b < c || a>b && b>>c) return b;
    return c;
}
#ifndef PROBLEMS_H
#define PROBLEMS_H
#endif //PROBLEMS_H


