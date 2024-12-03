#include<iostream>
#include<string>
using namespace std;

class Stack{
	private:
		int top;
		int arr[5];
	public:
		
		//default constructor
		Stack()
		{
			top=-1;
			for(int i=0; i<5; i++)
			{
				arr[i]=0;
			}
		}
		
		//This function is checking for whether the stack is empty or not
		bool isEmpty()
		{
			if(top==-1)
			{
				return true;
			}else{
				return false;
			}
		}
      
    //This function will check if the stack is full or not
        bool isFull()
       {
	       	if(top==4)
	       	{
	       		return true;
			}
			else
			{
				return false;
			}
    	}
    
    //implementing pushing operation for inserting values
    void push(int val)
    {
    	if(isFull())
    	{
    		cout<<"Stack is full no place is empty for inserting new values: ";
		}else
		{
			top++;  //0
			arr[top]=val;	
		}
	}
	
	//implementing pop method for removing values
	int pop(int val)
	{
		  if(isEmpty())
		  {
		  	cout<<"Your stack is empty no values are there to remove: ";
		    return 0;
		  }
		  else
		  {
		  	int popvalue= arr[top];
		  	arr[top]=0;
		  	top--;
		  	return popvalue;	
		  }
	}
	
	//make a count method which will return the number of values we have in stack
    int count()
    {
    	return(top+1);
	}
	
	//implementing a peak method
    int peak(int pos)
    {
    	if(isEmpty())
    	{
    		cout<<"Empty: ";
    		return 0;
		}
		else
		{
			return arr[pos];
		}
	}
    
    //implementing a method which will change a data at specific position
    void change(int pos, int value)
    {
    	arr[pos]=value;
    	cout<<"value changed at location: "<<pos<<endl;
	}
	
	//display 
	void display()
	{
		cout<<"All values in the stack are: "<<endl;
		for(int i=4; i>=0; i--)
		{
		  cout<<arr[i]<<endl;	
		}
	}
};

    //main function
    int main()
    {
      Stack s1;
	  int option,position,value;
	do
	  {
	  	cout<<"What operation do you want to select?Enter 0 for exit: "<<endl;
	  	cout<<"1. Push: "<<endl;
	  	cout<<"2. Pop: "<<endl;
	  	cout<<"3. isEmpty: "<<endl;
	  	cout<<"4. isFull: "<<endl;
	  	cout<<"5. peak: "<<endl;
	  	cout<<"6. count: "<<endl;
	  	cout<<"7. change: "<<endl;
	  	cout<<"8. display: "<<endl;
	  	
	  	cin>>option;
	  	switch(option)
	  	{
	  		case 1:
		  		cout<<"Enter an item to push in stack: "<<endl;
		  		cin>>value;
		  		s1.push(value);
		  		break;
	  		
	  		case 2:
	  			cout<<"pop function called poped value: "<<s1.pop(value)<<endl;
		        break;
		    
		    case 3:
		    	if(s1.isEmpty())
		    	cout<<"Stack is empty"<<endl;
		    	else
		    	cout<<"Stack is not empty"<<endl;
		    	break;
		    	
		    case 4:
		    	if(s1.isFull())
		    	cout<<"Stack is Full"<<endl;
		    	else
		    	cout<<"Stack is not full"<<endl;
		    	break;
		    	
		    case 5:
		    	cout<<"Enter position of item you want to peak:";
		    	cin>>position;
		    	cout<<"Peak function called: "<<endl<<s1.peak(position)<<endl;
		    	break;
		    
			case 6:
			    cout<<"Count function called: "<<s1.count()<<endl;	
			    break;
			    
			case 7:
				cout<<"Change function called: "<<endl;
		        cout<<"Enter position of item you want to change: ";
		        cin>>position;
		        cout<<endl;
		        cout<<"Enter value of item you want to change: ";
		        cin>>value;
		        s1.change(position, value);
				break;
				
			case 8:
				cout<<"display function called: "<<endl;
				s1.display();
				break;
				
			default:
				cout<<"Enter proper option number: "<<endl;
		    }
	}while(option!=0);
}
	
