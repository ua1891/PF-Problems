#include<iostream>
using namespace std;

main()
{
    int exam_hours,exam_minutes, arrival_hours,arrival_minutes;
    int difference,TotalexamMinutes,TotalarrivalMinutes;
    float convert, mode;

    cout<<"Enter exam starting time (hours) 0 to 23 ";
    cin>>exam_hours;
    cout<<"Enter exam starting time (minutes) 0 to 59 ";
    cin>>exam_minutes;
    cout<<"Enter arrival time (hours) 0 to 23 ";
    cin>>arrival_hours;
    cout<<"Enter arrival time (minutes) 0 to 59 ";
    cin>>arrival_minutes;
    TotalexamMinutes=exam_hours*60+exam_minutes;
    TotalarrivalMinutes=arrival_hours*60+arrival_minutes;
    difference=TotalarrivalMinutes-TotalexamMinutes;

        if(difference==0)
        {
            cout<<"On Time"; 
        }
       
         if(difference>=-30&&difference<0)
         {
            cout<<"On time"<<endl;
            difference=-1*difference;
            cout<<difference<<"minutes before the start of exam";
         } 
        else if(difference>-60&&difference<=-30)
        {
            cout<<"Early";
             difference=-1*difference;
            cout<<difference<<"minutes before the start of exam";
        }  
        else if (difference <-60)
        {
            cout<<"Early"<<endl;
            difference=-1*difference;
            convert=difference/60;
            mode=difference%60;
            cout<<convert<<":"<<mode<<"before start of exam";       
         }  
        else if(difference<=-60&&difference<=-69)
        {
            cout<<"Early";
            difference=-1*difference;
            convert=difference/60;
            mode=difference%60;
            cout<<convert<<":0"<<mode;  
        }   
        else if(difference>0&&difference<=60)
        {
            cout<<"late";
            cout<<difference<<"minutes after start exam";

        }  
        else if(difference>60&&difference<=69) 
        {
            cout<<"late"<<endl;
            convert=difference/60;
            mode=difference%60;
            cout<<convert<<":0"<<mode<<"hour after the exam";
        } 
        else if(difference>60)
        {
           cout<<"late";
           convert=difference/60;
           mode=difference%60;
           cout<<convert<<":"<<mode<<"hour after the exam";
 
        }

        
        }

        
        


    

    
    

