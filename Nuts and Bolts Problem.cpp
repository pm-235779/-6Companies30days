class Solution {
  public:

    void matchPairs(int n, char nuts[], char bolts[]) {
     int a=33,b=35,c=36,d=37,e=38,f=42,g=63,h=64,i=94;
     int x=0;
     for(int k=0;k<n;k++){
         if (static_cast<int>(nuts[k])==33){
             swap(nuts[x],nuts[k]);
             x++;
         }
     }
     
      for(int k=0;k<n;k++){
         if (static_cast<int>(nuts[k])==35){
             swap(nuts[x],nuts[k]);
             x++;
         }
     }
     
      for(int k=0;k<n;k++){
         if (static_cast<int>(nuts[k])==36){
             swap(nuts[x],nuts[k]);
             x++;
         }
     }
     
      for(int k=0;k<n;k++){
         if (static_cast<int>(nuts[k])==37){
             swap(nuts[x],nuts[k]);
             x++;
         }
     }
     
      for(int k=0;k<n;k++){
         if (static_cast<int>(nuts[k])==38){
             swap(nuts[x],nuts[k]);
             x++;
         }
     }
     
      for(int k=0;k<n;k++){
         if (static_cast<int>(nuts[k])==42){
             swap(nuts[x],nuts[k]);
             x++;
         }
     }
     
      for(int k=0;k<n;k++){
         if (static_cast<int>(nuts[k])==63){
             swap(nuts[x],nuts[k]);
             x++;
         }
     }
     
      for(int k=0;k<n;k++){
         if (static_cast<int>(nuts[k])==64){
             swap(nuts[x],nuts[k]);
             x++;
         }
     }
     
      for(int k=0;k<n;k++){
         if (static_cast<int>(nuts[k])==94){
             swap(nuts[x],nuts[k]);
             x++;
         }
     }
     
     
     x=0;
     
     
      for(int k=0;k<n;k++){
         if (static_cast<int>(bolts[k])==33){
             swap(bolts[x],bolts[k]);
             x++;
         }
     }
     
      for(int k=0;k<n;k++){
         if (static_cast<int>(bolts[k])==35){
             swap(bolts[x],bolts[k]);
             x++;
         }
     }
     
      for(int k=0;k<n;k++){
         if (static_cast<int>(bolts[k])==36){
             swap(bolts[x],bolts[k]);
             x++;
         }
     }
     
      for(int k=0;k<n;k++){
         if (static_cast<int>(bolts[k])==37){
             swap(bolts[x],bolts[k]);
             x++;
         }
     }
     
      for(int k=0;k<n;k++){
         if (static_cast<int>(bolts[k])==38){
             swap(bolts[x],bolts[k]);
             x++;
         }
     }
     
      for(int k=0;k<n;k++){
         if (static_cast<int>(bolts[k])==42){
             swap(bolts[x],bolts[k]);
             x++;
         }
     }
     
      for(int k=0;k<n;k++){
         if (static_cast<int>(bolts[k])==63){
             swap(bolts[x],bolts[k]);
             x++;
         }
     }
     
      for(int k=0;k<n;k++){
         if (static_cast<int>(bolts[k])==64){
             swap(bolts[x],bolts[k]);
             x++;
         }
     }
     
      for(int k=0;k<n;k++){
         if (static_cast<int>(bolts[k])==94){
             swap(bolts[x],bolts[k]);
             x++;
         }
     }
    }
};
