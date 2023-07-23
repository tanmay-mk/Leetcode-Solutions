int isWinner(int* player1, int player1Size, int* player2, int player2Size){

    int player1Score = player1[0]; 
    int player2Score = player2[0]; 
    
    for(int i=1; i<player1Size; i++)
    {
        if(i == 1)
        {
            if(player1[i-1] == 10)
            {
                player1Score += 2*player1[i];
            }
            else
            {
                player1Score += player1[i];
            }
            
            if(player2[i-1] == 10)
            {
                player2Score += 2*player2[i];
            }
            else
            {
                player2Score += player2[i];
            }
        }
        else
        {
            if(player1[i-1] == 10 || player1[i-2] == 10)
            {
                player1Score += 2*player1[i];
            }
            else
            {
                player1Score += player1[i];
            }
            
            if(player2[i-1] == 10 || player2[i-2] == 10)
            {
                player2Score += 2*player2[i];
            }
            else
            {
                player2Score += player2[i];
            }
        }
    }
    
    return ((player1Score > player2Score)? 1 : ((player1Score == player2Score)? 0 : 2));
}