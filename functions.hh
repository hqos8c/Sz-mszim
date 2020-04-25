/*

auto kin(){
   auto sum = 0.0;
   for(int i=0;i<N;i++){
       for (int j = 0; j < 3; j++)
       {
        sum += v[i][j]*v[i][j];   
       }
   }
   return sum/2;
}

auto pot(double r){
    return 4*(pow(r,-6)-pow(r,-3));
}


auto pot_energy(){
 auto sum = 0.0;
 for (int i = 0; i < N-1; i++)
 {  
    for (int j = i+1; j < N; j++)
    {
        double rij[3];
        double rSqd = 0;
        for (int k = 0; k < 3; k++)
        {
           rij[k] = r[i][k]-r[j][k];
           if(abs(rij[k])> 0.5*L){
               if(rij[k]>0)
               rij[k] -= L;
               else
               {
                   rij[k] +=L;
               }
           }
           rSqd += rij[k]*rij[k];
        }
        sum += pot(rSqd);
    }
 }
    return sum;
}

auto energy(){
    return (pot_energy() + kin());
}

auto cv (){
    return 1/instantaneousTemperature()*146.75; 
}
auto PV(){
    double sum = 0.0;
    for(int i = 0; i < N-1; i++){
        for (int j = i+1; j < N; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                sum += r[i][k]*r[j][k];
            }
            
        }
        
    }
    return sum*(1/3) + N*instantaneousTemperature();
}

auto Z(){
   return PV()/(N*instantaneousTemperature()); 
}

*/