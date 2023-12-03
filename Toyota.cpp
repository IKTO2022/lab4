#include <iostream>
using namespace std;


class Transport 
{ 
 public: 
        Transport(); 
        Transport(std::string st, int y, int h); 
        ~Transport(); 
        std::string getModel(); 
        void setModel(std::string val); 
        int getYear(); 
        void setYear(int val); 
        int getHorsePower();
        void setHorsePower(int val);
 private: 
        std::string name; 
        int year; 
        int horsePower;
}; 



int main(){
	Transport p1; 
    Transport p2("Alphard", 2008, 200); 
    p1.setModel("Prius"); 
    p1.setYear(2012); 
    p1.setHorsePower(300);

    cout << p1.getModel() << "  " << p1.getYear() << "  " << p1.getHorsePower() << endl; 
    cout << p2.getModel() << "  " << p2.getYear() << "  " << p2.getHorsePower() << endl; 
    Transport p3[3]; 
    std::string tempModel;
    int tempYear;
    int tempHorsePower;
    for(int i=0;i<3;i++) 
    { 
        cout <<"enter model->"; 
        cin >> tempModel; 
        p3[i].setModel(tempModel); 
        cout <<"enter year->"; 
        cin >> tempYear; 
        p3[i].setYear(tempYear); 
        cout <<"enter horse power->"; 
        cin >> tempHorsePower; 
        p3[i].setHorsePower(tempHorsePower); 
        cout<<endl;
    }
	 
    for(int i=0;i<3;i++) 
       cout << p3[i].getModel() << "  " << p3[i].getYear() << "  " << p3[i].getHorsePower() << endl; 
    return 0; 
} 
	Transport::Transport() 
	{ 
		name = "Noname";
		year = 0;
	
	} 
	
	Transport::Transport(std::string st, int y, int h) 
	{ 
	    name = st; 
	    year = y;
		horsePower = h; 
	} 
	
	Transport::~Transport() 
	{ 
	} 
	
	std::string Transport::getModel() 
	{ 
	    return name;
	} 
	
	void Transport::setModel(std::string val) 
	{ 
	    name = val;
	} 
	
	int Transport::getYear() 
	{ 
	    return year;
	} 
	
	void Transport::setYear(int val) 
	{ 
	    year = val;
	}
	
	int Transport::getHorsePower() 
	{ 
	    return horsePower;
	} 
	
	void Transport::setHorsePower(int val) 
	{ 
	    horsePower = val;
	}

