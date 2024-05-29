#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    int mid=(start + end)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        //go to right waala part
        if(key>arr[mid]){
            start=mid +1;
        }
        //go to left waala part
        else{
            end=mid -1;
        }
  int mid=(start + end)/2;
    }
    return -1;


}




int main(){





int even[6]={2,4,6,8,12,18};
int odd[5]={3,8,11,14,16};

int evenindex=binarySearch(even,6,35);
cout<<"index of 18 is "<<evenindex<<endl;
int oddindex=binarySearch(odd,5,20);

cout<<"index of 20 is "<<oddindex<<endl;
    return 0;
}