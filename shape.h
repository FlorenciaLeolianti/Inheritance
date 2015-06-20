#ifndef SHAPE_H
#define SHAPE_H


using namespace std;

class Shape
{
	public:
		float getLuas();
		float getKeliling();
		virtual void hitungLuas()=0; //pure virtual function
		virtual void hitungKeliling()=0;
		
		//Untuk sorting:
		static bool sortByLuas(Shape *a, Shape *b);
		static bool sortByKeliling(Shape *a, Shape *b);
	protected:
		float luas;
		float keliling;
};
#endif
