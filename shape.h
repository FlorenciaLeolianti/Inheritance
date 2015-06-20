#ifndef SHAPE_H
#define SHAPE_H


using namespace std;

class Shape
{
	public:
		string jenisShape;
		string getjenisShape();	
		float getLuas();
		float getKeliling();
		virtual void hitungLuas()=0; //pure virtual function
		virtual void hitungKeliling()=0;
	protected:
		float luas;
		float keliling;
};
#endif
