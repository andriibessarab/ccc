int main() {
    int week_day, total_days;
    cin >> week_day;
    cin >> total_days;

    // Print headings
    cout << "Sun Mon Tue Wed Thr Fri Sat"<<endl;
    for(int s=0; s<week_day-1; s++)
    {
        cout<<"    ";
    }

    int c = week_day;
    for(int i=1; i<=total_days; i++)
    {
        cout<<setw(3)<<setfill(' ')<<i;
        if(c % 7 == 0 || c == total_days + week_day - 1)
        {
            cout<<endl;
        }
        else
        {
            cout<<" ";
        }
        c++;
    }
}
