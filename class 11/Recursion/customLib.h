#ifndef CUSTOMLIB_H
#define CUSTOMLIB_H

int fibo(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}

#endif