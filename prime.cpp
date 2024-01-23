vector<int> primeNumbersTillN(int N) {
    vector<int> primeNumbers;
    vector<bool> isPrime(N + 1, true);
    for (int p = 2; p * p <= N; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= N; i += p) {
                isPrime[i] = false;
            }
        }
    }
    for (int p = 2; p <= N; p++) {
        if (isPrime[p]) {
            primeNumbers.push_back(p);
        }
    }
    return primeNumbers;
}
