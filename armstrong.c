#include <stdio.h>
intmain()
    {
        int armstrong(int n)
        int temp = n;
        int len;
        for(len = 0; temp; len++, temp /=10);

        temp = n;
        int result = 0, pow = 1;
        while(temp) {
            int lastDigit = temp % 10;
            temp /=10;
            for(int x = 1; x <= len; x++)
                pow = pow * lastDigit;
            
        }
    }