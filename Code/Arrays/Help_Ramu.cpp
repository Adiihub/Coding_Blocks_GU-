// Ramu often uses public transport. The transport in the city is of two types: cabs and rickshaws. The city has n rickshaws and m cabs, the rickshaws are numbered by integers from 1 to n, the cabs are numbered by integers from 1 to m.

// Public transport is not free. There are 4 types of tickets:

// A ticket for one ride on some rickshaw or cab. It costs c1 ruppees;
// A ticket for an unlimited number of rides on some rickshaw or on some cab. It costs c2 ruppees;
// A ticket for an unlimited number of rides on all rickshaws or all cabs. It costs c3 ruppees;
// A ticket for an unlimited number of rides on all rickshaws and cabs. It costs c4 ruppees.

// Ramu knows for sure the number of rides he is going to make and the transport he is going to use. He asked you for help to find the minimum sum of ruppees he will have to spend on the tickets.

// Output Format
// For each testcase , print a single number - the minimum sum of rupees Ramu will have to spend on the tickets in a new line.

// Sample Input
// 2
// 1 3 7 19
// 2 3
// 2 5
// 4 4 4
// 4 3 2 1
// 1 3
// 798
// 1 2 3
// Sample Output
// 12
// 1

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int c1,c2,c3,c4;
        cin>>c1>>c2>>c3>>c4;
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }

        int totalR=0;
        for(int i=0;i<n;i++){
            totalR+=min(a[i]*c1,c2);
        }
        int finalAnsR=min(totalR,c3);

        int totalC=0;
        for(int i=0;i<m;i++){
            totalC+=min(b[i]*c1,c2);
        }
        int finalAnsC=min(totalC,c3);



        int ans=min(finalAnsC+finalAnsR,c4);

        cout<<ans<<endl;
    }
    return 0;
}