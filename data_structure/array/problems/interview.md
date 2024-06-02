# Array Interview Questions

### GATE/NET Questions

Question 1: Determine output
```cpp
printf("%d\t", printf("hello\n"));

/* Output */
// hello 6
```

Question 2: Determine output
```cpp
int a = 10;
int *p = &a;
int **pr = &p;
printf("%d\n", *p);
printf("%p\n", p);
printf("%d\n", **pr);

/* Output */
// 10
// 0x7ffddc9a4004
// 10
```

Question 3: Determine output
```cpp
int a[] = {1,2,3};
printf("%d", *a);

/* Output */
// 1
```

Question 4: Determine output
```cpp
int a[] = {1,2,3};
int *p = a;
printf("%d\t", *p);
printf("%d", *p+1);

/* Output */
// 1 2
```

Question 5: Determine output
```cpp
int arr[4][5];
for (int i=0; i<4; i++) 
    for (int j=0; j<5; j++) 
        arr[i][j] = 10 * i + j;
printf("%d", *(arr[1]+9));

/* Output */
// 24
```

Question 6: Determine output and explain
```cpp
char* c = "GATECSIT2017";
char* p = c;
printf("%d\n", 2[p]);   // ascii value of p[2] i.e. T
printf("%d\n", p[2]);   // ascii value of p[2] i.e. T
printf("%d\n", 6[p]);   // ascii value of p[6] i.e. I
printf("%d", (int)strlen(c+2[p]-6[p]-1));

/* Output */
// 84
// 84
// 73
```

Question 7: What will be the error
```cpp
int *a[2];
int b = 10;
a[0] = &b;
a[0][0] = 10; // run time error

/* Output */
// Segmentation fault
```

Question 8: Determine output
```cpp
// x starts from address 2000
unsigned int x[4][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
    {10, 11, 12}
};
printf ("%u, %u, %u", x+3, *(x+3), *(x+2)+3);

/* Output */
// 2036, 2036, 2036
```
