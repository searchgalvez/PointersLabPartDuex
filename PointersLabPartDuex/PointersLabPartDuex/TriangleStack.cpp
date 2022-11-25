#include "TriangleStack.h"

TriangleStack::TriangleStack() : mBase(1), mHeight(1)
{}

void TriangleStack::SetBase(float base)
{
    mBase = base;
}

void TriangleStack::setHeight(float height)
{
    mHeight = height;
}

float TriangleStack::GetArea() const
{
    return (mBase * mHeight) / 2;
}
