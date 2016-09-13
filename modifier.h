#ifndef MODIFIER_H
#define MODIFIER_H

class Actor;

template <typename T>
struct modifier{
	T param;
	modifier(){}
	modifier(T param) : param(param) {}
	virtual void operator()(Actor *a) = 0;
};

#endif