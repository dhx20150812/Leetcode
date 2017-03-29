int coinChange(int* coins, int coinsSize, int amount) {
    if(amount==0) return 0;
    if(coinsSize==0) return -1;
    int *coinUsed = (int*)malloc((amount+1)*sizeof(int));//保存兑换每一个金额时需要的最小的硬币数量
    coinUsed[0] = 0;
    int cent;
    //计算每一个amount需要兑换的最少的硬币数
    for(cent=1;cent<=amount;cent++){
        coinUsed[cent] = -1;
        int i,minCoins=cent;
        for(i=0;i<coinsSize;i++){
            if(coins[i]<=cent && coinUsed[cent-coins[i]]!=-1){
                if(coinUsed[cent]==-1) coinUsed[cent] = coinUsed[cent-coins[i]]+1;
                else coinUsed[cent] = coinUsed[cent]<(coinUsed[cent-coins[i]]+1)?coinUsed[cent]:(coinUsed[cent-coins[i]]+1);
            }
        }
    }
    return coinUsed[amount];
}
