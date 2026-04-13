#include <iostream>
using namespace std;
long hms_to_secs(int hours, int minutes, int seconds){
    return (long)hours * 3600 + (long)minutes * 60 + seconds;
}
int main(){
    int hours,minutes,seconds;
    char colon;
    cout << "=== Time Converter: HH:MM:SS to Seconds ===" << endl;
    while(true){
        cout<<"\nEnter time (HH:MM:SS) or 0:0:0 to quit: ";
        cin>>hours>>colon>>minutes>>colon>>seconds;
        if(hours==0&&minutes==0&&seconds==0)
            break;
        if(minutes<0||minutes>59||seconds<0||seconds>59){
            cout<<"Invalid input!"<<endl;
            continue;
        }
        long totalSeconds=hms_to_secs(hours,minutes,seconds);
        cout<<hours<<"h "<<minutes<<"m "<<seconds<<"s"
            <<" = "<<totalSeconds<<" seconds"<<endl;
    }
    cout<<"Goodbye!"<<endl;
    return 0;
}