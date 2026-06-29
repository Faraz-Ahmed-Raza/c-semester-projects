
#include<iostream>
using namespace std;

int main()
{
    cout<<"========== STUDENT SCHOOL REPORTING SYSTEM =========="<<endl;

    int number;
    cout<<"enter number of students \n ";
    cin>>number;

    string name[number];
    int roll_number[number];
    int marks[number];

    cout<<" add students \n"<<endl;

    for(int i=0; i<number; i++)
    {
        cout<<"enter student Name \n";
        cin>>name[i];

        cout<<"enter roll Number: ";
        cin>>roll_number[i];

        cout<<"enter marks ";
        cin>>marks[i];
    }

    int number_of_choice;

    cout<<"\n========== Menu =========="<<endl;
    cout<<"1. Display All Students"<<endl;
    cout<<"2. Search Student By Roll Number"<<endl;
    cout<<"3. Highest And Lowest Marks"<<endl;
    cout<<"4. Show Grades"<<endl;
    cout<<"5. Average Marks"<<endl;
    cout<<"6. Pass And Fail Count"<<endl;
    cout<<"7. Update Student Marks"<<endl;
    cout<<"8. Delete Student"<<endl;
    cout<<"9. Show Topper"<<endl;
    cout<<"10. Show Students Above Marks Limit\n"<<endl;

    cout<<"Enter Choice \n";
    cin>>number_of_choice;

    if(number_of_choice == 1)
    {
        for(int i=0; i<number; i++)
        {
            cout<<"Student Name "<<name[i]<<endl;
            cout<<"Roll Number "<<roll_number[i]<<endl;
            cout<<"Marks "<<marks[i]<<endl;
        }
    }

    else if(number_of_choice == 2)
    {
        int search_roll;
        int found = 0;

        cout<<"Enter Roll Number ";
        cin>>search_roll;

        for(int i=0; i<number; i++)
        {
            if(search_roll == roll_number[i])
            {
                cout<<"\nStudent Nam "<<name[i]<<endl;
                cout<<"Roll Number "<<roll_number[i]<<endl;
                cout<<"Marks "<<marks[i]<<endl;

                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            cout<<"Student Not Found"<<endl;
        }
    }

    else if(number_of_choice == 3)
    {
        int highest = marks[0];
        int lowest = marks[0];

        for(int i=0; i<number; i++)
        {
            if(marks[i] > highest)
            {
                highest = marks[i];
            }

            if(marks[i] < lowest)
            {
                lowest = marks[i];
            }
        }

        cout<<"Highest Marks = "<<highest<<endl;
        cout<<"Lowest Marks = "<<lowest<<endl;
    }

    else if(number_of_choice == 4)
    {
        for(int i=0; i<number; i++)
        {
            cout<<name[i]<<" : ";

            if(marks[i] >= 90)
            {
                cout<<"Grade A";
            }
            else if(marks[i] >= 80)
            {
                cout<<"Grade B";
            }
            else if(marks[i] >= 70)
            {
                cout<<"Grade C";
            }
            else if(marks[i] >= 60)
            {
                cout<<"Grade D";
            }
            else if(marks[i] >= 50)
            {
                cout<<"Grade E";
            }
            else
            {
                cout<<"Fail";
            }

            cout<<endl;
        }
    }

    else if(number_of_choice == 5)
    {
        int sum = 0;

        for(int i=0; i<number; i++)
        {
            sum += marks[i];
        }

        cout<<"Average Marks = "<<sum/number<<endl;
    }

    else if(number_of_choice == 6)
    {
        int pass = 0;
        int fail = 0;

        for(int i=0; i<number; i++)
        {
            if(marks[i] >= 50)
            {
                pass++;
            }
            else
            {
                fail++;
            }
        }

        cout<<"Passed Students = "<<pass<<endl;
        cout<<"Failed Students = "<<fail<<endl;
    }

    else if(number_of_choice == 7)
    {
        int search_roll;
        int found = 0;

        cout<<"Enter Roll Number ";
        cin>>search_roll;

        for(int i=0; i<number; i++)
        {
            if(search_roll == roll_number[i])
            {
                cout<<"Current Marks = "<<marks[i]<<endl;

                cout<<"Enter New Marks ";
                cin>>marks[i];

                cout<<"Marks Updated Successfully"<<endl;

                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            cout<<"Student Not Found"<<endl;
        }
    }

    else if(number_of_choice == 8)
    {
        int search_roll;
        int found = 0;

        cout<<"Enter Roll Number To Delete ";
        cin>>search_roll;

        for(int i=0; i<number; i++)
        {
            if(search_roll == roll_number[i])
            {
                name[i] = "Deleted";
                roll_number[i] = 0;
                marks[i] = 0;

                cout<<"Student Deleted Successfully"<<endl;

                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            cout<<"Student Not Found"<<endl;
        }
    }

    else if(number_of_choice == 9)
    {
        int highest = marks[0];
        string topper = name[0];

        for(int i=0; i<number; i++)
        {
            if(marks[i] > highest)
            {
                highest = marks[i];
                topper = name[i];
            }
        }

        cout<<"Topper = "<<topper<<endl;
        cout<<"Marks = "<<highest<<endl;
    }

    else if(number_of_choice == 10)
    {
        int limit;

        cout<<"Enter Marks Limit ";
        cin>>limit;

        cout<<"\nStudents Above "<<limit<<" Marks"<<endl;

        for(int i=0; i<number; i++)
        {
            if(marks[i] > limit)
            {
                cout<<name[i]<<marks[i]<<endl;
            }
        }
    }

    else
    {
        cout<<"Invalid Choice"<<endl;
    }

    return 0;
}
