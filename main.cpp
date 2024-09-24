#include<iostream>
#include<cstdlib>
#include "class1.cpp"
 
 
main(){
	midterm1 A(10), B(20);
	int num;
	cout << "Union and Intersection of Two Sets " << endl;
	cout << "Rayver Punzalan \n"<<endl;
	cout << "Enter no of values for a Set A: "; cin>>num; A.initial(num);
	cout << "Enter no of values for a Set B: "; cin>>num; B.initial(num);
	cin.ignore();
	cout<<endl; 
	cout << "Original" << endl;
	cout << "A="; 	A.displayAll1();
	cout << "\nB="; 	B.displayAll1(); cout<<endl;
	
	
	cout << "\nAct1";
	cout << "\nA="; 	A.displayAll(); cout << " The current index: "<<A.curIndex;
	cout << "\nB="; 	B.displayAll(); cout << " The current index: "<<B.curIndex; cout<<endl;
	
	
	cout << "\nAct2";
	cout << "\nA="; 	A.reverseAll(); cout << " The current index: "<< A.curIndex;
	cout << "\nB="; 	B.reverseAll(); cout << " The current index: "<< B.curIndex;

}
