Problems
Courses
Job-a-ThonMEGA
Contests
POTD

Refresh

Time (IST)	Status	Lang	Test Cases	Code
2022-10-16 14:17:32	Correct	cpp	159 / 159	View
C++ (g++ 5.4)
Average Time: 15m




Custom Input
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        vector<long long int>x;
        
        for(int i=0;i<n;i++){
            x.push_back(arr1[i]);
        }
        for(int i=0;i<m;i++){
            x.push_back(arr2[i]);
        }
        sort(x.begin(),x.end());
        
        return x[k-1];
        
    }
};