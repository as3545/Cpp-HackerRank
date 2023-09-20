/*
Maps are a part of the C++ STL.Maps are associative containers that store elements formed by a combination of a key value and a mapped value, following a specific order.The mainly used member functions of maps are:

Map Template:

std::map <key_type, data_type>
Declaration: 

map<string,int>m; //Creates a map m where key_type is of type string and data_type is of type int.
Size:

int length=m.size(); //Gives the size of the map.
Insert:

m.insert(make_pair("hello",9)); //Here the pair is inserted into the map where the key is "hello" and the value associated with it is 9.
Erasing an element:

m.erase(val); //Erases the pair from the map where the key_type is val.
Finding an element:

map<string,int>::iterator itr=m.find(val); //Gives the iterator to the element val if it is found otherwise returns m.end() .
Ex: map<string,int>::iterator itr=m.find("Maps"); //If Maps is not present as the key value then itr==m.end().
Accessing the value stored in the key:

To get the value stored of the key "MAPS" we can do m["MAPS"] or we can get the iterator using the find function and then by itr->second we can access the value.
To know more about maps click Here.

You are appointed as the assistant to a teacher in a school and she is correcting the answer sheets of the students.Each student can have multiple answer sheets.So the teacher has  queries:

 :Add the marks  to the student whose name is .

: Erase the marks of the students whose name is .

: Print the marks of the students whose name is . (If  didn't get any marks print .)

Input Format

The first line of the input contains  where  is the number of queries. The next  lines contain  query each.The first integer,  of each query is the type of the query.If query is of type , it consists of one string and an integer  and  where  is the name of the student and  is the marks of the student.If query is of type  or ,it consists of a single string  where  is the name of the student.

Constraints





Output Format

For queries of type  print the marks of the given student.

Sample Input

7
1 Jesse 20
1 Jess 12
1 Jess 18
3 Jess
3 Jesse
2 Jess
3 Jess
Sample Output

30
20
0

  */


//Code

int main() 
{
    string stuName (""); int stuMark=0; 
    map<string , int> student;          //int length = nm.size();
   
    long long queries; int queryType;
    //cout << "Enter queries number: "; 
    cin >> queries;
    for ( int i = 0 ; i < queries ; i++)
    {
        map<string , int>::iterator it;         
        //cout << "Enter query type (1.Insert  2.Erase 3.Print): \n"; 
        cin >> queryType;
        //cout << "Insert student name: "; 
        cin >> stuName;
        // cin.ignore(numeric_limits<streamsize>::max(), '\n');
        switch ( queryType ) 
        {
            case 1: //cout << "Insert student mark: "; 
                cin>> stuMark;
                if ( (it = student.find(stuName)) != student.end() )
                    student[stuName] += stuMark;
                else 
                    student.insert( make_pair(stuName, stuMark) );
                    //student[stuName] = stuMark;
                break;
                
            case 2:
                if ( (it = student.find(stuName)) != student.end() )
                    student.erase(it);
                break;
                
            case 3:            
                //if ( (it = student.find(stuName)) != student.end() )
                        cout << student[stuName] << endl; 
                //else    cout << 0;
                break;
        }  
    }
    
    return 0;
}
