#include<iostream>
using namespace std;
/*
student-->test
student-->sports
test--> result
sports-->result
*/
class Student{
	protected:
		int roll_no;
		public:
			void set_number(int a){
				roll_no = a;
			}
			void print_number(void){
				cout << "Your Roll Number IS : " << roll_no << endl;
			}			
};
class Test : virtual public Student{
	protected:
		float maths , physics;
		public:
			void set_marks(float m1, float m2){
				maths = m1;
				physics = m2;
			}
			void print_marks(void){
				cout << "Your Result Is : "    << endl
				     << "Maths : "  << maths   << endl
				     << "Physics:"  << physics << endl;
			}
}; 

class Sports : virtual public Student{
	protected :
		float score;
		  public:
		  	void set_score(float se){
		  		score = se;
			  }
			  void print_score(void){
			  	cout << "Your Score Is : "  << score << endl;
			  }
};

class Result :public Test , public Sports{
	private:
		float total;
		public: 
		void display(){
			total = maths +	physics +score;
			print_number();
			print_marks();
			print_score();
			cout << "Your Total Score IS : " << total << endl;
		}
};

int main(){
		Result r1;
		r1.set_marks(50.3,36.9);
		r1.set_number(23);
		r1.set_score(9);
		r1.display();
	
}
