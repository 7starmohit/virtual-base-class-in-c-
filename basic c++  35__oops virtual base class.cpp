#include<iostream>
using namespace std;
class student{
	protected:
		int roll_no;
	public:
		void set_roll(int q){
			roll_no= q;
		}
		void show_roll(){
			cout<<"the roll number of the student is:"<<roll_no<<endl;
		}
};

class test: virtual public student{
	protected:
		float math,cs;
	public:
		void set_number(float w1,float w2){
			math=w1;
			cs=w2;
		}
		void show_number(){
			cout<<"the obtained number in maths is "<<math<<endl;
			cout<<"the obtained number in cs is "<<cs<<endl;
		}
};

class sports:virtual public student{
	protected:
		int score;
	public:
		void set_score(int x){
			score=x;
		}
		
		void show_score(){
			cout<<"the guy gets "<<score<<"in sports"<<endl;
		}
};

class result:public test, public sports{
	protected:
		float net_number;
	public:
		void display(){
			net_number=math+cs+score;
			show_roll();
			show_number();
			show_score();
			cout<<"the total of all the student get is "<<net_number<<endl;
		}
};
int main(){
	result mohit;
	mohit.set_roll(29);
	mohit.set_number(71.5,98.0);
	mohit.set_score(85);
	mohit.display();
	return 0;
}
