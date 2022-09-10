int maximumWealth(int accounts[]) {
    int ans=0;
       for(int person=0; person<sizeof(accounts);person++) {
            int sum=0;
            for(int account=0;account<sizeof(accounts[person]);account++){
                sum = sum + accounts[person][accounts];
            }
            if(sum>ans){
                ans=sum;
            }
       }
       return ans;
    }


