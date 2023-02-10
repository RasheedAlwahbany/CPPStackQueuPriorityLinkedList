#include <iostream>
using namespace std;
class Snode{
	public:
		int info;
		Snode* next;
		Snode(){
			next=0;
		}
		Snode(int data,Snode* n){
			info=data;
			next=n;
		}		
};
class Stack{
	private:
		Snode* top;
		public:
		Stack(){
			top=0;
		}
		bool isempty(){
			return top==0;
		}
			void clear(){
			Snode* tmp=top;
			while(!isempty()){
			tmp=top;
			top=top->next;
			delete tmp;
			}
			cout<<"The Snode clreared seccessfully."<<endl;
			//tail=0;
			
			
		}
		~Stack(){
			clear();
			
		}
		void addtotop(int data){
			if(!isempty()){
			Snode* tmp=top;
			top=new Snode(data,top);
			top->next=tmp;
			cout<<"The item add seccessfully."<<endl;
		}
		else {
			top=new Snode(data,0);
			cout<<"The item add seccessfully."<<endl;
		}
	}
	
		void deletefromtop(){
			if(!isempty()){
			Snode* tmp=top;
			top=top->next;
			delete tmp;
			cout<<"The item deleted seccessfully."<<endl;	
			}
			else 
			cout<<"The item didn't deleted seccessfully.\n\t\t\t\tBecause the Snode its empty."<<endl;
		}
void display(){
		if(!isempty())
	{
		Snode* tmp=top;
		cout<<"The item in the list is :  "<<endl;
		while(tmp!=0){
			cout<<tmp->info<<endl;
			tmp=tmp->next;
		}
	}
		else{
			
			char name;
			int data;
			cout<<"The Single linked list is empty.\n Did you want to add to it (Y/N) :"<<endl;
			cin>>name;
			if(name=='y' || name =='Y'){
				cout<<"Please enter the data :"<<endl;
				cin>>data;
			addtotop(data);
			}
	}

	}	
	float sum(){
		int tmp=0;
		Snode* num=top;
		if(!isempty())
	{
		if(top->next==0){
			tmp=top->info;
			return tmp;
		}
		else{
		while(num!=0){
			tmp+=num->info;
			num=num->next;
		//	cout<<"The sum of items is :  "<<tmp<<endl;
		}
		return tmp;
	}
		return tmp;

	}
}
	float counter(){
		int count=0;
		Snode* num=top;
		if(!isempty()){
			while(num!=0){
			++count;
			num=num->next;	
			}
			
			return count; 
		}
		return count;
	}	
	void average(){
		float res=sum();
		float avrg;
		float count=counter();
		if(res==0){
			cout<<"The SSnode is empty."<<endl;
		}
		else{
		avrg=res/count;
		cout<<"The average of element is :  "<<avrg<<endl;	
		}
	}
	void maxnumber(){
	if(!isempty()){
		Snode* tmp=top;
		Snode* tmp2=top->next;
		Snode* max;
		while(tmp!=0){	
			if(tmp->info>tmp2->info){
				max=tmp;
			}
			tmp=tmp->next;			
		}
		cout<<"The maximum number in this Snode is :  "<<max->info<<endl;
	}
		else
		cout<<"The Snode is empty."<<endl;
	}
	void minnumber(){
	if(!isempty()){
		Snode* tmp=top;
		Snode* tmp2=top->next;
		Snode* min;
		while(tmp!=0){	
			if(tmp->info<tmp2->info){
				min=tmp;
			}
			tmp=tmp->next;			
		}
		cout<<"The minimum number in this Snode is :  "<<min->info<<endl;
	}
		else
		cout<<"The Snode is empty."<<endl;
	}	
	void converttoarray(){
		int size=counter();
		int num=0;
		int *arry=new int[size];
		if(!isempty()){
			Snode* tmp=top;
			while(tmp!=0){
				arry[num]=tmp->info;
				tmp=tmp->next;
				num++;
			}
		}	
			cout<<"The items in array is :  "<<endl;
			for(int i=0;i<size;i++){
				cout<<arry[i]<<endl;
			}
		}
		int first(){
			return top->info;
		}
		
};
