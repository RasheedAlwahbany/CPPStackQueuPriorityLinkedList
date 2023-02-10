#include<iostream>
#include "Stack_SLL.h"
#include "Queue_SLL.h"
#include "Priurity_SLL.h"
using namespace std;
int main(){
	Stack gets;
	Queue getq;
	PQ getp;
	int choose,data;
	while(true){
		system("cls");
	cout<<"PLease choose the way :\n\t1) By stack.\t2) By Queue.\t3) Priority."<<endl;
	cin>>choose;
	if(choose==1){
	while(true){
	cout<<"Welcome to Stack section.\nPlease choose the correct: \t\t(0) to back.\n\t1) Add to top.\n\t2) Display.\n\t3) Sum of item.\n\t4) Number of items."<<endl;
	cout<<"\t5) Average of items.\n\t6) The maxemum number.\n\t7) the minimum number.\n\t8) Convert to array.\n\t9) Delete from top.\n\t10) Clear node."<<endl;
	cout<<"\t11) The top number."<<endl;
	cin>>choose;
	if(choose==1){
		cout<<"Please enter the data :"<<endl;
		cin>>data;
	gets.addtotop(data);
	}
	else if(choose==2){
		gets.display();
	}
	
	else if(choose==3){
		data=gets.sum();
		if(data==0)
		{
		cout<<"The node is empty."<<endl;
		cout<<"The sum of items is :  "<<data<<endl;
		}
		else
		cout<<"The sum of items is :  "<<data<<endl;
		
	}
		else if(choose==4){
		cout<<"The number of item in node is :  "<<gets.counter()<<endl;
	}
	else if(choose==5){
		gets.average();
	}
	else if(choose==6){
		gets.maxnumber();
	}
	else if(choose==7){
		gets.minnumber();
	}
	else if(choose==8){
		gets.converttoarray();
	}
	else if(choose==9){
		gets.deletefromtop();
	}
	else if(choose==10){
		gets.clear();
	}
	else if(choose==11){
		cout<<"The top number is : "<<gets.first()<<endl;
	}
	else if(choose==0)
	break;
}
}
else if(choose==2){
	while(true){
	cout<<"Welcome to Queue section.\nPlease choose the correct:\t\t\t(0) to back.\n\t1) Add to end.\n\t2) Add in priority.\n\t3) Display.\n\t4) Sum of item.\n\t5) Number of items."<<endl;
	cout<<"\t6) Average of items.\n\t7) The maxemum number.\n\t8) the minimum number.\n\t9) Convert to array.\n\t10) Delete from top.\n\t11) Clear node."<<endl;
	cin>>choose;
	if(choose==1){
		cout<<"Please enter the data :"<<endl;
		cin>>data;
	getq.addtoend(data);
	}
	else if(choose==2){
		cout<<"Please enter the data :"<<endl;
		cin>>data;
		getq.addinorder(data);
	}
	else if(choose==3){
		getq.display();
	}
	
	else if(choose==4){
		data=getq.sum();
		if(data==0)
		{
		cout<<"The node is empty."<<endl;
		cout<<"The sum of items is :  "<<data<<endl;
		}
		else
		cout<<"The sum of items is :  "<<data<<endl;
		
	}
		else if(choose==5){
		cout<<"The number of item in node is :  "<<getq.counter()<<endl;
	}
	else if(choose==6){
		getq.average();
	}
	else if(choose==7){
		getq.maxnumber();
	}
	else if(choose==8){
		getq.minnumber();
	}
	else if(choose==9){
		getq.converttoarray();
	}
	else if(choose==10){
		getq.deletefromtop();
	}
	else if(choose==11){
		getq.clear();
	}
	else if(choose==0){
		break;
	}
}
}
else if(choose==3){
	while(true){
	cout<<"Welcome to Priority.\nPlease choose from bellow:\t\t\t(0) to back.\n1) enter.\n2) display."<<endl;
	cin>>choose;
	if(choose==1){
		cin>>data;
		getp.addinorder(data);
	}
	else if(choose==2){
		getp.display();
	}
	else if(choose==0)
	break;
}
}
}
	system("pause");
	return 0;
}
