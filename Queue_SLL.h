#include <iostream>
using namespace std;

class Qnode{
	public:
		int info;
		Qnode* next;
		Qnode(){
			next=0;
		}
		Qnode(int data,Qnode* n){
			info=data;
			next=n;
		}		
};
class Queue{
	private:
		Qnode* top;
		Qnode* end;
		public:
		Queue(){
			top=end=0;
		}
		bool isempty(){
			return top==0;
		}
			void clear(){
			Qnode* tmp;
			
			while(!isempty()){
			tmp=top;
			top=top->next;
			delete tmp;
			if(top==0)
			end=0;	
			}
			cout<<"The Qnode clreared seccessfully."<<endl;
			//end=0;
			
			
		}
		~Queue(){
			clear();
			
		}
	
		void addtoend(int data){
			if(!isempty()){
			end->next=new Qnode(data,0);
			end=end->next;
			cout<<"The item add seccessfully."<<endl;
		}
		else {
		top=end=new Qnode(data,0);
		cout<<"The item add seccessfully."<<endl;
		}
		}
		void addinorder(int data){
			if(!isempty()){
				
				if(data>end->info){
				end->next=new Qnode(data,0);
				end=end->next;
				}
			else{
				Qnode* tmp=top;
			while(tmp->next!=end){
				tmp=tmp->next;
				}
				Qnode* tmp3=new Qnode(data,end);
				tmp->next=tmp3;
				tmp3->next=end;
			}
			cout<<"The item add seccessfully."<<endl;
		}
		else {
		top=end=new Qnode(data,0);
		cout<<"The item add seccessfully."<<endl;
		}
		}
		

		void deletefromtop(){
			if(!isempty()){
			Qnode* tmp=top;
			top=top->next;
			delete tmp;
			cout<<"The item deleted seccessfully."<<endl;
			if(top==0){
				end=0;
			}	
			}
			else 
			cout<<"The item didn't deleted seccessfully.\n\t\t\t\tBecause the Qnode its empty."<<endl;
		}
	void display(){
		if(!isempty())
	{
		Qnode* tmp=top;
		cout<<"The item in the list is :  "<<endl;
		while(tmp!=end->next){
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
			addtoend(data);
			}
	}

	}	
	float sum(){
		int tmp=0;
		Qnode* num=top;
		if(!isempty())
	{
		if(top==end){
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
		Qnode* num=top;
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
			cout<<"The Qnode is empty."<<endl;
		}
		else{
		avrg=res/count;
		cout<<"The average of element is :  "<<avrg<<endl;	
		}
	}
	void maxnumber(){
	if(!isempty()){
		Qnode* tmp=top;
		Qnode* tmp2=top->next;
		Qnode* max;
		while(tmp!=0){	
			if(tmp->info>tmp2->info){
				max=tmp;
			}
			tmp=tmp->next;			
		}
		cout<<"The maximum number in this Qnode is :  "<<max->info<<endl;
	}
		else
		cout<<"The Qnode is empty."<<endl;
	}
	void minnumber(){
	if(!isempty()){
		Qnode* tmp=top;
		Qnode* tmp2=top->next;
		Qnode* min;
		while(tmp!=0){	
			if(tmp->info<tmp2->info){
				min=tmp;
			}
			tmp=tmp->next;			
		}
		cout<<"The minimum number in this Qnode is :  "<<min->info<<endl;
	}
		else
		cout<<"The Qnode is empty."<<endl;
	}	
	void converttoarray(){
		int size=counter();
		int num=0;
		int *arry=new int[size];
		if(!isempty()){
			Qnode* tmp=top;
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
};
