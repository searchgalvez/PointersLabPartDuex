// PointersLabPartDuex.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "TriangleHeap.h"
#include "TriangleStack.h"

int AddNumbersReturnInt(int* a, int* b)
{
    return *a + *b;
}

void AddNumbersReturnVoid(int a, int b, int* sum)
{
    *sum = a + b;
}

void SwapValues(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10, b = 5, sum;

    std::cout << "AddNumbersReturnInt: " << AddNumbersReturnInt(&a, &b) << std::endl;
    AddNumbersReturnVoid(a, b, &sum);
    std::cout << "AddNumbersReturnVoid: " << sum << std::endl;

    std::cout << "Before Swap:" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    SwapValues(&a, &b);
    std::cout << "After Swap:" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    return 0;


    std::cout << "TriangleStack:" << std::endl;
    std::vector<TriangleStack> trStack; 
    TriangleStack ts1, ts2;

    ts1.SetBase(7.5);
    ts1.setHeight(5);

    ts2.SetBase(10);
    ts2.setHeight(7.25);

    trStack.push_back(ts1);
    trStack.push_back(ts2);

    for (size_t i = 0; i < trStack.size(); i++)
        std::cout << "Area: " << trStack[i].GetArea() << std::endl;

    std::cout << std::endl << "TriangleHeap:" << std::endl;
    std::vector<TriangleHeap> trHeap; 

    TriangleHeap th1;  

    th1.setBase(7.5);
    th1.setHeight(5);

    TriangleHeap th2(th1);

    trHeap.push_back(th1);
    trHeap.push_back(th2);

    for (size_t i = 0; i < trHeap.size(); i++)
        std::cout << "Area: " << trHeap[i].GetArea() << std::endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
