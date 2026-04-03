 #include<iostream>
 using namespace std;
 void printCar(int cars[5][5]);
 void B( int car[5][5]);
 void c( int car[5][5]);
 void D( int car[5][5]);


    main()
    {
    
        const int rowSize = 5;
        const int colSize = 5;        //red,black,brown,blue,gray.
        int cars[rowSize][colSize] = { {10, 7, 12, 10, 4},//suzuki.
                           {18, 11, 15, 17, 2},//toyota.
                           {23, 19, 12, 16, 14},//Nissan
                           {7, 12, 16, 0, 2},//BMW
                           {3, 5, 6, 2, 1} };//Audi
                           printCar(cars);
                           B(cars);
                           c(cars);



                           
    }
    void printCar(int cars[5][5]){ 
            for (int i = 0; i <5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (i==0&&j==3)
                    {
                        cout<<"Total blue cars of toyota is:"<<cars[i][j]<<endl;
                        
                    }

                    
                }
                
            }
            

    }
    void B( int car[5][5]){
        int sum=0;
        for (int i = 0; i <5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
              if (i==j)
              {
                    sum+=car[i][j];
              }
              
                                   
            }
            
        }
        cout<<"Sum of total red car is:"<<sum;
    }
    void c( int car[5][5]){

        int sum=0;
        for (int i = 0; i <5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
              if (i==2)
              {
                    sum+=car[i][j];
              }
              
                                   
            }
            
        }
        cout<<"Sum of total nissan car is:"<<sum;
    }
    


 