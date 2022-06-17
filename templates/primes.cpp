bool isPrime[1000000];

void calculatePrimes(ll n){
    for(ll i=0; i<=n; i++) isPrime[i] = true;
    isPrime[0] = false; 
    isPrime[1] = false;
    isPrime[2] = false;
    for(ll i=2; i*i<=n; i++){
        if(isPrime[i]){
            for(ll j=i*i; j*i<=n; j+=i){
                isPrime[i] = false;
            }
        }
    }
}
 