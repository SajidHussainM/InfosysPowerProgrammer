/*


Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.

Note : Midnight is 12:00:00 AM on a 12-hour clock and 00:00:00 on a 24-hour clock. Noon is 12:00:00 PM on 12-hour clock and 12:00:00 on 24-hour clock.

Input format:

Read the time in the format HH:MM:SSAM/PM from the standard input stream

Output format:

Print the military time to the standard output stream

Sample Input	Sample Output	Explanation
11:21:30PM	23:21:30	The time 11:21:30 PM in military (24 hr) format is 23:21:30
12:12:20AM	00:12:20	The time 12:12:20 AM in military (24 hr) format is 00:12:20


*/









#include <iostream>
using namespace std;

string solve(string s){
    int n = s.size();
    string ans;
    string t = s.substr(n-2,2);
    string h = s.substr(0,2);
    string m = s.substr(3,2);
    string sec = s.substr(6,2);
    
    //cout<<sec<<" "<<h<<" "<<m<<endl;
    
    if(t == "AM"){
        int hour = stoi(h) ;
        
        string temp = to_string(hour);
        if(hour == 12) temp = "00";
        ans.append(temp);
        ans.push_back(':');
        ans. append(m);
        ans.push_back(':');
        ans.append(sec);
        
    }
    else{
        int hour = 12 + stoi(h) ;
        string temp = to_string(hour);
        ans.append(temp);
        ans.push_back(':');
        ans. append(m);
        ans.push_back(':');
        ans.append(sec);
    }
    return ans;
}

int main() {
    string s;
    
    cin>>s;
    
    cout<<solve(s);
    return 0;
}
