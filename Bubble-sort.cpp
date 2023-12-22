void bubblesort(int *a, int n){
    int issorted = 0;
    for(int i=0; i<n ; i++)
    {
        cout<<"Working on pass number : "<<i+1<<endl;
        issorted = 1;
        for(int j=0 ; j<n-1-i ; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                issorted = 0;
            }
        }
        if(issorted){
            return;
        }
    }
}
