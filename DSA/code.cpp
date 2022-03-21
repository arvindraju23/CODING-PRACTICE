#include<iostream>
using namespace std;
class Array
{
    private:
    int *A;
    int size;
    int length;

    public:
    Array()
    {
        size=10;
        length=0;
        A=new int [size];

    }
    Array(int size1)
    {
        size=size1;
        length=0;
        A=new int [size1];
    }
    ~Array()
    {
            delete []A;
    }
    void Display();
    void insert (int index, int x);
    void Append(int x);
    int LinearSearch (int key);
    int BinarySearch (int key);
    int Get (int index);
    void Set (int index, int x);
    int max();
    int min();
    int sum();
    int avg();
    void Reverse();
    void Reverse2();
    void insertSort(int x);
    int isSorted();
    void Rearrange();
    Array* Merge(Array arr2);
    Array* union(Array arr2);
    Array* Intersection(Array arr2);
    Array* Difference(Array arr2);
};

//Implementation Parts of Member_Function Starting......
void Array::Display()
{
    int i;
    cout<<"\n Elements are \n";
    for(i=0; i<length; i++)
    {
        cout<<A[i]<<" ";
    }
}
void Array::Append(int x)
{
    if(length<size)
    A[length++]=x;
}
void Array:: insert(int index, int x)
{
    int i;
    if(index>=0 && index<=length; i--);
    {
    A[i]=A[i-1];
    A[index]=x;
    length++;
    }
}
int Array :: Delete(int index)
{
    int x=0;
    int i;
    if(index>=0 && index<length )
    {
        x=A[index];
        for(i=index; i<length-1; i++)
        {
            A[i]=A[i+1];
            length --;
            return x;
        }
    }
    return o;
}
void Array::swap(int *x, int *y)
{
    int temp;
    temp =*x;
    *x=*y;
    *y=temp;
}
int Array::LinearSearch(int key)
{
    int i;
    for (i=0; i<length; i++)
    {
        if (key ==A[i])
        {
            swap(&A[i], &A[0]);
            return i;
        }
    }
    return -1;
}
int Array :: BinarySearch(int key)
{
    int low, mid, high;
    l=0;
    h=length-1;
    while (low<=high)
    {
        /* code */
        mid=(low+high)/2;
        if (key==A[mid])
        
        {
            return mid;
        }
        else if (key<A[mid]){
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return -1;
}
int Array::Get(int index)
{
    if(index>=0 && index<length)
    return A[index];
    return -1;
}
int Array ::max()
{
    int max=A[0];
    int i;
    for (int i=1;i<length; i++)
    {
        if(A[i]>max)
        max=A[i];
    }
    return max;
}
int Array ::min()
{
    int min=A[0];
    int i;
    for (int i=1;i<length; i++)
    {
        if(A[i]<min)
        min=A[i];
    }
    return min;
}
int Array::sum()
{
    int s=0;
    int i;
    for(i=0; i<length; i++)
    {
        s+=A[i];
    }
    return s;
}
float Array:: avg()
{
    return (float)sum()/length;
}
void Array:: Reverse()
{
    int *B;
    int i,j;
    B=int new Array();
    for(i=length-1;j=0; i>=0;i--, j++)
    {
        B[j]=A[i];
        
    }
    for(i=0; i<length; i++)
    {
        A[i]=B[i];
    }
    void Array::Reverse2()
    {
        int i,j;
        for(i=0; j=length-1; i<j; i++,j--)
        {
            swap(&A[i], &A[j]);
        }
    }
    void Array:: InsertSort(int x)
    {
        int i=length-1; 
        if(length==size)
        {
            return ;
        }
        while (i>=0 && A[i]>x)
        {
            A[i+1]=A[i];
            i--;
        }
        A[i+1]=x;
        length++;
    }
    int Array:: isSorted()
    {
        int i;
        for(i=0; i<length-1; i++)
        {
            if(A[i]>A[i+1])
            return 0;
        }
        return 1;
    }
    void Array:: Rearrange()
    {
        int i, j; 
        i=0; 
        j=length-1;
        while (i<j)
        {
            while (A[i]<0)
            i++;
            while (A[j]>=0)
            j--;
            if  (i<j)
            swap (&A[i], &A[j]);
        }

    }

    int Array:: Merge(Array arr2)
    {
        int i,j,k;
        i=j=k=0;
        Array *arr3=new Array(length->arr2.length);
        while(i<length && j<arr2.length)
        {
            if(A[i]<arr.A[j])
            {
                arr3->A[k++]=A[i++];
            }
            else 
            {
                arr3->A[k++]=arr2.A[j++];
            }
        }
        for( ; i<length; i++){
            arr3->A[k++]=A[i];
        }
        for( ; j<arr2.length ; j++)
        {
            arr3 -> A[k++]arr2.A[j];
        }

    }
    return arr3;
}
Array* Array:: Union (Array arr2)
{
    int i,j,k;
    i=j=k=0;
    Array *arr3 = new Array(length+ arr2.length);
    while(i<length && j<arr2.length)
    {
        if(A[i]<arr2.A[j])
        arr3-> A[k++]=A[i++];
        else if(arr2.A[j]<A[i])
        arr3 ->A[k++]=arr2.A[j++];
        else
        arr3->A[k++]=A[i++];
        j++;
    }
    
}
for( ; i<length; i++)
{
    arr3->A[k++]=A[i];
}
for( ; i<arr2.length; j++)
{
    arr3->A[k++]=arr2.A[j];
    arr3->length=k;
    return arr3;

}
Array* Array::Intersection(Array arr2)
{
    int i,j,k;
    i=j=k=0;
    Array *arr3=new Array(length +arr2.length);
    while(i<length && j<arr2.length)
    {
        if(A[i]<arr2.A[j])
        i++;
        else if (arr2.A[j]<A[i])
        j++;
        else if(A[i]==arr2.A[j])
        {
            arr3->A[k++]=A[i++];
            j++;
        }
    }
    arr3->length=k;
    return arr3;
}
Array* Array:: Difference (Array arr2)
{
    int i,j,k;
    i=j=k=0;
    Array *arr3=new Array (length +arr2.length);
    while(i<length && j<arr2.length)
    {
        if(A[i]<arr2.A[j])
        arr3->A[k++]=A[i++];
        else if(arr2.A[j]<A[i])
        j++;
        else 
        {
            i++;
            j++;

        }

    }
    for( ; i<length ; i++)
    {
        arr3->A[k++]=A[i];
        arr3->length=k;
        return arr3;
    }
    
}
int main()
{
    Array *arr1;
    int ch,sz;
    int x, index;
    cout<<"Enter size of Array";
    cin>>sz;
    arr1= new Array (sz);
    
}
