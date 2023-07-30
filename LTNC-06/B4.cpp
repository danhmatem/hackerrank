#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box{
    private :
        int length;
        int breadth;
        int height;
    public:
        Box() : length(0), breadth(0), height(0) {};
        
        Box(int l, int b, int h) : length(l), breadth(b), height(h) {};
        
        Box (const Box& other) : length(other.length), breadth(other.breadth), height(other.height){};
        
        int getLength(){
            return length;
        }
        int getBreadth(){
            return breadth;
        }
        int getHeight(){
            return height;
        }
        long long CalculateVolume() const{
            return static_cast<long long>(length) * breadth * height;
        }
         bool operator<(const Box& other) const {
        if (length < other.length) {
            return true;
        } else if (length == other.length) {
            if (breadth < other.breadth) {
                return true;
            } else if (breadth == other.breadth) {
                return height < other.height;
            }
        }
        return false;
    }

        friend ostream& operator<<(ostream& out, const Box& box) {
        out << box.length << " " << box.breadth << " " << box.height;
        return out;
    }
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}