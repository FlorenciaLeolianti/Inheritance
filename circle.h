#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>

using namespace std;

class Circle
{
	public:
		virtual void hitungLuas()=0;
		virtual void hitungKeliling()=0;
	protected:
		float jarijari;
}
#endif
