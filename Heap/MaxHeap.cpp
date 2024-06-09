#include<iostream>
//#include<utility>
using namespace std;

class maxHeap{
   int *arr;
   int size; // total elememnt in heap
   int total_size;   //total size of array
   public:
   maxHeap(int n){
    arr=new int[n];
    size=0;
    total_size=6;
   }

   //insert in heap

   void insert(int value){
      //if heapsize is available or not
      if(size==total_size){
        cout<<"Heap Overflow"<<endl;
        return;
      }

      arr[size]=value;
      int index=size;
      size++;

      //compare with its parent
      while(index>0 && arr[(index-1)/2]<arr[index]){
        swap(arr[index], arr[(index-1)/2]);
        index=(index-1)/2;
      }

      cout<<arr[index]<<" is inserted into the heap\n";
    }
      void print(){
        for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";

        cout<<endl;
      }
      
      void heapify(int index){
         int largest = index;
         int left=2*index+1;
         int right=2*index+2;

         //largest will store the index of element which is greater b/w parent left child and right child
         if(left<size && arr[left]>arr[largest])
         largest=left;

         if(right<size && arr[right]>arr[largest])
         largest=right;

         if(largest!=index){
         swap(arr[index],arr[largest]);
         heapify(largest);
         }
      }

      void Delete(){
        if(size==0){
          cout<<"Heap Underflow\n";
          return;
        }
       cout<<arr[0]<<" deleted from the heap\n";
       arr[0]=arr[size-1];
       size--;

       if(size==0)
       return;

       heapify(0);
      }
};
int main(){
    maxHeap H1(6);
    H1.insert(4);
    H1.insert(14);
    H1.insert(11);
    H1.Delete();
    H1.print();
    H1.insert(2);
    H1.insert(112);
    H1.insert(24);
    H1.insert(24);
    H1.print();
    H1.Delete();
    H1.print();
}