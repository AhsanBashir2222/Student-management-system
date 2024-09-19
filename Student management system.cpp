#include<iostream>
using namespace std;
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total=0;
void enterdata(){
	int ch;
	cout<<"How many student do you want to Enter :";
	cin>>ch;
	if(total==0){
		total=total+ch;
		for(int i=0; i<ch; i++){
			cout<<"Enter the data for Student "<<i+1<<" :";
			cout<<endl;
			cout<<"Enter Name :";
			cin>>arr1[i];
			cout<<"Enter Roll No :";
			cin>>arr2[i];
			cout<<"Enter Course :";
			cin>>arr3[i];
			cout<<"Enter Class :";
			cin>>arr4[i];
			cout<<"Enter Contact :";
			cin>>arr5[i];
		}
	}
	else{
		for(int i=total; i<ch+total; i++){
			cout<<"Enter the data for Student "<<i+1<<" :";
			cout<<endl;
			cout<<"Enter Name :";
			cin>>arr1[i];
			cout<<"Enter Roll No :";
			cin>>arr2[i];
			cout<<"Enter Course :";
			cin>>arr3[i];
			cout<<"Enter Class :";
			cin>>arr4[i];
			cout<<"Enter Contact :";
			cin>>arr5[i];
		}
		total=total+ch;
	}
}
void showdata(){
	if(total==0){
		cout<<"No data is Entered.........."<<endl;
	}
	else{
		for(int i=0; i<total; i++){
			cout<<"Enter the data for Student "<<i+1<<" :";
			cout<<endl;
			cout<<"Enter Name :"<<arr1[i]<<endl;
			cout<<"Enter Roll No :"<<arr2[i]<<endl;
			cout<<"Enter Course :"<<arr3[i]<<endl;
			cout<<"Enter Class :"<<arr4[i]<<endl;
			cout<<"Enter Contact :"<<arr5[i]<<endl;
		}
	}
}
void searchdata(){
	if(total==0){
		cout<<"No data is entered.........."<<endl;
	}
	else{
		string rollno;
		cout<<"Enter the Roll No of student :";
		cin>>rollno;
		for(int i=0; i<total; i++){
			if(rollno==arr2[i]){
			cout<<"Enter Name :"<<arr1[i]<<endl;
			cout<<"Enter Roll No :"<<arr2[i]<<endl;
			cout<<"Enter Course :"<<arr3[i]<<endl;
			cout<<"Enter Class :"<<arr4[i]<<endl;
			cout<<"Enter Contact :"<<arr5[i]<<endl;
			}
		}
	}
}
void updatedata(){
	if(total==0){
		cout<<"No data is Entered"<<endl;
	}
	else{
		string rollno;
		cout<<"Enter the rollno in which you update the data "<<endl;
		cin>>rollno;
		for(int i=0; i<total; i++){
			if(rollno==arr2[i]){
			cout<<"Previous data :"<<endl;
			cout<<"data of student "<<i+1<<endl;
			cout<<"Enter Name :"<<arr1[i]<<endl;
			cout<<"Enter Roll No :"<<arr2[i]<<endl;
			cout<<"Enter Course :"<<arr3[i]<<endl;
			cout<<"Enter Class :"<<arr4[i]<<endl;
			cout<<"Enter Contact :"<<arr5[i]<<endl;
			cout<<"Update data  : "<<endl;
			cout<<"Enter Name :";
			cin>>arr1[i];
			cout<<"Enter Roll No :";
			cin>>arr2[i];
			cout<<"Enter Course :";
			cin>>arr3[i];
			cout<<"Enter Class :";
			cin>>arr4[i];
			cout<<"Enter Contact :";
			cin>>arr5[i];
			
				
			}
		}
	}
}
void deletedata(){
	if(total==0){
		cout<<"No data is Entered"<<endl;
	}
	else{
		int a;
		cout<<"Enter 1 to delete All record "<<endl;
		cout<<"Enter 2 to delete Specific record "<<endl;
		cin>>a;
		if(a==1){
			total=0;
			cout<<"All record deleted.........."<<endl;
			
		}else if(a==2){
			string rollno;
			cout<<"Enter the roll no you want to delete data :";
			cin>>rollno;
			for(int i=0; i<total; i++){
				if(rollno==arr2[i]){
					for(int j=i; j<total; j++){
						arr1[j]=arr1[j+1];
						arr2[j]=arr2[j+1];
						arr3[j]=arr3[j+1];
						arr4[j]=arr4[j+1];
						arr5[j]=arr5[j+1];
					}
					total--;
					cout<<"Your record is deleted........"<<endl;
				}
			}
		}
	}
}
int main(){
	int ch;
	while(true){
		cout<<" Press 1 to Enter  data "<<endl;
		cout<<" Press 2 to Show   data "<<endl;
		cout<<" Press 3 to Search data "<<endl;
		cout<<" Press 4 to Update data "<<endl;
		cout<<" Press 5 to delete data "<<endl;
		cout<<" Press 6 to Exit   data "<<endl;
		cout<<"Enter your choice :";
		cin>>ch;
		switch(ch){
			case 1:
				enterdata();
				break;
			case 2:
				showdata();
				break;
			case 3:
				searchdata();
				break;
			case 4:
				updatedata();
				break;
			case 5:
				deletedata();
				break;
			case 6:
				exit(0);
				break;
			default:
				cout<<"Invalid Input...."<<endl;
				break;
				
		}
	}
}
