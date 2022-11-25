#pragma once
#ifndef TRIANGLESTACK_H
#define TRIANGLESTACK_H

class TriangleStack
{
private:
    float mBase;
    float mHeight;

public:
    TriangleStack();
    void SetBase(float base);
    void setHeight(float height);
    float GetArea() const;
};

#endif


