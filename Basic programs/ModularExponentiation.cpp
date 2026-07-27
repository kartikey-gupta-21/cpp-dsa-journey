int modularExponentiation(int x, int n, int m){
	int res=1;
	while(n>0){
		if(n&1){
			//odd
			res=(1LL*(res)*(x)%m)%m;   //used 1LL to avoid integer overflow
		}
		x=(1LL*(x%m)*(x%m))%m;
		n=n>>1;    //double shift to 1 is used as division by 2
	}
	return res;
}