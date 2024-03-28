// zd.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std; 

	class Avto {
	private:
		string marka; 
		string model; 
		int god;
		string color; 
		double probeg; 
	public :
		Avto(string m , string mode , int year , string col , double prob){
			marka = m; 
			model = mode; 
			god = year; 
			color = col; 
			probeg = prob; 


		}
		void vivod() {
			cout << "модель - " << marka << " бренд - " << model << " год - " << god << " цвет - " << color << " пробег - " << probeg << endl;
		}
		double probe(double emkost , double rashod) {
			probeg = (emkost * 100) / rashod;
			return probeg;
			
		}
		void viv() {
			cout << "Пробег" << probeg << endl; 
		}


	};

int main()

{
	setlocale(LC_ALL, "Russian");
	
	Avto avto("модель", "бренд", 2005, "желтый", 100); 
	
	avto.vivod();


	
	
	avto.probe(100 ,50);
	avto.viv();
	
}
