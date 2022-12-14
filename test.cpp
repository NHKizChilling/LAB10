#include <stdio.h>
void Nhap(int arr[], int n){
    //dung vong lap for duyet tu vi tri index thu 0 cho den vi tri n - 1 
    for(int i = 0; i <= n - 1; i++){
        //nhap gia tri va gan vao tung phan tu a[i] cua mang
        printf("NHAP A[%d]: ",i);
        scanf("%d",&arr[i]);
    }
}
void Xuat(int arr[], int n){
    for(int i = 0; i <= n - 1; i++){
        // xuat cac phan tu a[i] co trong mang ra man hinh
        printf("%d \t",arr[i]);
    }
}
void XoaPhanTu(int arr[], int &n, int index){
    //neu dia chi xoa nho hon 0 thi xoa phan tu dau tien
    if(index < 0){
        index = 0;
    }
    //neu dia chi xoa lon hon hoac bang n thi xoa phan tu cuoi cung
    if(index >= n){
        index = n - 1;
    }
    // Dich chuyen mang ve ben trai tu vi tri xoa
    for(int i = index; i < n - 1; i++){
        arr[i] = arr[i+1];
    }
    //sau khi xoa giam so luong phan tu mang
    n--;
}
int main(){
    //hai bao so luong phan tu
    int n;
    printf("NHAP N: ");
    scanf("%d",&n);
    //khai bao mang gom n phan tu
    int arr[n];
    //goi ham nhap
    Nhap(arr,n);
    //xuat mang vua nhap
    printf("\nMANG BAN DAU\n");
    Xuat(arr,n);
    //sau khi mang da duoc nhap khai bao vi tri can xoa
    int index;
    printf("\nNHAP VI TRI CAN XOA: ");
    scanf("%d",&index);
    //goi ham xoa phan tu truyen vao mang can xoa, so luong phan tu va dia chi can xoa
    XoaPhanTu(arr,n,index);
    //hien thi mang sau khi xoa tai vi tri index
    printf("\nMANG SAU KHI XOA TAI ARR[%d]\n", index);
    Xuat(arr,n);
}