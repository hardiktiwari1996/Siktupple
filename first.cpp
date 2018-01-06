#include<bits/stdc++.h>
using namespace std;
int main(){
	 ifstream infile;
     int a[500];
     int n=0;
     char cNum[10] ;
                infile.open ("test.txt", ifstream::in);
                if (infile.is_open())
                {
                        while (infile.good())
                        {
                                infile.getline(cNum, 256, ',');
                                a[n]= atoi(cNum) ;
                                n++ ;
                        }
                        infile.close();
                
	
    long int sum=0,ans=0,min;
   // for(int i=0;i<n;i++)  cin>>a[i]; 
     
	bool b[n];
    
	for(int i=0;i<n;i++)  b[i]=true;
    
	if(n==1)
      cout<<a[0];
    else{
      if(n==2){
         if(a[0]>a[1])
           ans=a[0]*a[1]+a[0];
      else
           ans=a[1]*a[0]+a[1];
       cout<<ans<<"\n";
      }
      else{
          for(int i=1;i<n-1;i++){
      	       min=10000;int f=0,l=0,d=0;
      	       int c[500];
             for(int j=1;j<n-1;j++){
               if((min>a[j])&&(b[j]==true)){
                  min=a[j];  
				  f=1; l=j;
				  //cout<<"helllo\n";          
                }
            }
            for(int kj=1;kj<n-1;kj++){
            	if(min==a[kj]&&b[kj]==true)
            	  c[d++]=kj;
			}
            
          if(f){ long int t1=0,t2=0,t3=0,max=0;
		      for(int k=0;k<d;k++){
		      	   l=c[k];
				    int lg=l-1;
                    int kg=l+1;
           	 while(1){
           		    if(b[lg]==true){
           			break;
				    }
				    lg--;
			    }
		     while(1){
		    	    if(b[kg]==true){
		    		break;
				    }
				    kg++;
			    }
			 if(a[lg]*a[l]*a[kg]>max){
			 	 max=a[lg]*a[l]*a[kg];
			     t1=lg; t2=l; t3=kg;
			  }	
			}
			b[t2]=false;		   
		   sum=sum+max;
		  // cout<<sum<<" "<<i<<" "<<t2<<" "<<a[t1]<<" "<<a[t2]<<" "<<a[t3]<<"\n";
		   }
        }
     if(a[0]>a[n-1]) sum=sum+(a[0]*a[n-1])+a[0];
     else sum=sum+(a[n-1]*a[0])+a[n-1];
     cout<<sum<<"\n";
    }}}
                else
                {
                        cout << "Error opening file";
                }
}
