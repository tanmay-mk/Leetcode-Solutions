int accountBalanceAfterPurchase(int purchaseAmount){

    int rem = purchaseAmount % 10; 
    if (rem < 5)
    {
        return (100 - purchaseAmount + rem); 
    }
    return (100 - purchaseAmount - (10-rem)); 
    
}