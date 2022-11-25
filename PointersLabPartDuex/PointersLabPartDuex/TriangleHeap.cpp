#include <iostream>
#include "TriangleHeap.h"

using namespace std;

TriangleHeap::TriangleHeap()
{

    mBase = new float;
    mHeight = new float;

    *mBase = 1;
    *mHeight = 1;
}

TriangleHeap::TriangleHeap(const TriangleHeap& rhs)
{

    mBase = new float;
    mHeight = new float;

    *mBase = *(rhs.mBase);
    *mHeight = *(rhs.mHeight);
}


TriangleHeap::~TriangleHeap()
{
    delete mBase;
    delete mHeight;
}


void TriangleHeap::setBase(float base)
{
    *mBase = base;
}


void TriangleHeap::setHeight(float height)
{
    *mHeight = height;
}


float TriangleHeap::GetArea() const
{
    return ((*mBase) * (*mHeight)) / 2;
}