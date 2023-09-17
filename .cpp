//Code

string loop(int num){
    string arr[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(num >=0 and num<= 9){
        return arr[num];
    }
    else if(num %2 ==0){
        return "even";
    } else {
        return "odd";
    }
}

int main(){
    int num;
    int n1,n2;
    cin>>n1>>n2;
    for(num=n1;num<=n2;num++){
        cout<<loop(num)<<endl;
    }
    return 0;
}
