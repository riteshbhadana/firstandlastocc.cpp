Differnce between VS STUDIO and  online compiler (coding ninjas{CODE STUDIO})

VS STUDIO CODE  wrote here 
#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans= -1;

    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans= -1;

    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int even[11]={1,2,3,3,3,3,3,3,3,5,5};
  cout << " first occerrence of 3 is at index " <<  firstOcc (even, 11, 3) << endl;
  cout << " last occerrence of 3 is at index " <<  lastOcc (even, 11, 3) << endl;
   return 0;
    }    



  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Online compiler (CODE STUDIO)~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int firstOcc(int arr[], int n, int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans= -1;

    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans= -1;

    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

pair<int, int> FirstAndLastPosition (vector <int> & arr, int n, int k)
{
    pair<int, int> p;
p.first= firstOcc(arr, n, k);
p.second=lastOcc(arr, n, k);

return p;
}
