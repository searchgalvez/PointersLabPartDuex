#pragma once
#ifndef TRIANGLEHEAP_H
#define TRIANGLEHEAP_H

class TriangleHeap
{
private:
    float* mBase, * mHeight;

public:
    TriangleHeap();
    TriangleHeap(const TriangleHeap& rhs);
    ~TriangleHeap();
    void setBase(float base);
    void setHeight(float height);
    float GetArea() const;
};

#endif 
