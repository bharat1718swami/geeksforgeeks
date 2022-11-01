public:
    int evenlyDivides(int N){
        //code here
          int count=0;
        int num;
        int temp=N;
        while(temp>0){
            num=temp%10;
            if(num==0) ;
            else if(N%num==0) count++;
            
            temp=temp/10;
        }
        
        return count;
    }
};
