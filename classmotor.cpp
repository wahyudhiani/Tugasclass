#include <iostream>
#include <string>
using namespace std;

class motor{
		public :
			int jumlhmotor;
			string merkmotor;
			void berkendara(string kecepatan);
};

void motor::berkendara(string kecepatan){
	
	cout<< " Kecepatan Motor :"<< kecepatan << endl;
}
int main (){
	motor motorbalap, motormetic, motorbebek;
	
	motormetic.jumlhmotor = 250;
	motormetic.merkmotor = "honda";
	motorbalap.jumlhmotor = 100;
	motorbalap.merkmotor = "Yamaha";
	
	cout << "Motor Balap : "<<endl;
	cout << "Jumlah Motor: "<<motorbalap.jumlhmotor<<" unit"<<endl;
	cout << " Merk Motor : "<<motorbalap.merkmotor<<endl;
	
	motorbalap.berkendara("60km/jam");
	
	cout << ""<<endl;
	
	cout << "Motor Metic : "<<endl;
	cout << "Jumlah Motor: "<<motormetic.jumlhmotor<<" unit"<<endl;
	cout << " Merk Motor : "<<motormetic.merkmotor<<endl;
	
	motormetic.berkendara("120km/jam");
	
}
