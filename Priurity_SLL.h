#include <iostream>
using namespace std;

class PSLL{
	public:
		int info;
		PSLL* next;
		PSLL(){
			next=0;
		}
		PSLL(int data,PSLL* n){
			info=data;
			next=n;
		}		
};
class PQ{
	private:
		PSLL* top;
		PSLL* end;
		public:
		PQ(){
			top=end=0;
		}
		bool isempty(){
			return top==0;
		}
			void clear(){
			PSLL* tmp;
			
			while(!isempty()){
			tmp=top;
			top=top->next;
			delete tmp;
			if(top==0)
			end=0;	
			}
			cout<<"The PSLL clreared seccessfully."<<endl;
			//end=0;
			
			
		}
		~PQ(){
			clear();
			
		}
	
		void addinorder(int data){
			if(!isempty()){
			if(end->info<data){
			end->next=new PSLL(data,0);
			end=end->next;
			}
			else
			{
				PSLL* tmp=new PSLL(data,end);
				tmp->next=end;
				end=tmp;
			}
			cout<<"The item add seccessfully."<<endl;
		}
		else {
		top=end=new PSLL(data,0);
		cout<<"The item add seccessfully."<<endl;
		}
		}
		
		void deletefromtop(){
			if(!isempty()){
			PSLL* tmp=top;
			top=top->next;
			delete tmp;
			cout<<"The item deleted seccessfully."<<endl;
			if(top==0){
				end=0;
			}	
			}
			else 
			cout<<"The item didn't deleted seccessfully.\n\t\t\t\tBecause the PSLL its empty."<<endl;
		}
	void display(){
		if(!isempty())
	{
		PSLL* tmp=top;
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
			addinorder(data);
			}
	}

	}	
	float sum(){
		int tmp=0;
		PSLL* num=top;
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
		PSLL* num=top;
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
			cout<<"The PSLL is empty."<<endl;
		}
		else{
		avrg=res/count;
		cout<<"The average of element is :  "<<avrg<<endl;	
		}
	}
	void maxnumber(){
	if(!isempty()){
		PSLL* tmp=top;
		PSLL* tmp2=top->next;
		PSLL* max;
		while(tmp!=0){	
			if(tmp->info>tmp2->info){
				max=tmp;
			}
			tmp=tmp->next;			
		}
		cout<<"The maximum number in this PSLL is :  "<<max->info<<endl;
	}
		else
		cout<<"The PSLL is empty."<<endl;
	}
	void minnumber(){
	if(!isempty()){
		PSLL* tmp=top;
		PSLL* tmp2=top->next;
		PSLL* min;
		while(tmp!=0){	
			if(tmp->info<tmp2->info){
				min=tmp;
			}
			tmp=tmp->next;			
		}
		cout<<"The minimum number in this PSLL is :  "<<min->info<<endl;
	}
		else
		cout<<"The PSLL is empty."<<endl;
	}	
	void converttoarray(){
		int size=counter();
		int num=0;
		int *arry=new int[size];
		if(!isempty()){
			PSLL* tmp=top;
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
		void swap(PSLL* b,PSLL* bt,PSLL* lt){
			lt->next=b->next->next;
			b->next=bt;
			bt->next=lt;
			
		}
	void priority(){
		if(!isempty()){
			PSLL* tmp=top;
			PSLL* tmp2=top;
			PSLL* tmp3;
			while(tmp->next!=0){
				if(tmp==top&&tmp->info>tmp->next->info)
				{
					tmp3=tmp;
					tmp=tmp->next;
					tmp->next=tmp3;
				}
				else if(tmp->info>tmp->next->info)
				{
					swap(tmp2,tmp->next,tmp);
				}
				tmp2=tmp;
				tmp=tmp->next;
			}
		}
	}
};
