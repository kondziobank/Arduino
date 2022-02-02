int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int p = 9;

void setup(){
  pinMode(a, OUTPUT); 
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}
void loop() {
  digitalWrite(p, HIGH);
  delay(100);
  jeden();
  delay(100);
  dwa();
  delay(100);
  trzy();
  delay(100);
  cztery();
  delay(100);
  piec();
  delay(100);
  szesc();
  delay(100);
  siedem();
  delay(100);
  osiem();
  delay(100);
  dziewiec();
  delay(100);
  zero();
  }
 
void jeden(){
 digitalWrite(b, HIGH);
 digitalWrite(c, HIGH);
 delay(1000);
 digitalWrite(b, LOW);
 digitalWrite(c, LOW);
}
void dwa(){
 digitalWrite(a, HIGH);
 digitalWrite(b, HIGH);
 digitalWrite(g, HIGH);  
 digitalWrite(e, HIGH);
 digitalWrite(d, HIGH);
 delay(1000);
 digitalWrite(a, LOW);
 digitalWrite(b, LOW);
 digitalWrite(c, LOW);  
 digitalWrite(d, LOW);
 digitalWrite(e, LOW);
 digitalWrite(f, LOW);
 digitalWrite(g, LOW);

  
}
  void  trzy(){
 digitalWrite(a, HIGH);
 digitalWrite(b, HIGH);
 digitalWrite(g, HIGH);  
 digitalWrite(c, HIGH);
 digitalWrite(d, HIGH);
 delay(1000);
 digitalWrite(a, LOW);
 digitalWrite(b, LOW);
 digitalWrite(c, LOW);  
 digitalWrite(d, LOW);
 digitalWrite(e, LOW);
 digitalWrite(f, LOW);
 digitalWrite(g, LOW);
  }


    
  void cztery(){
 digitalWrite(f, HIGH);
 digitalWrite(b, HIGH);
 digitalWrite(g, HIGH);  
 digitalWrite(c, HIGH);
 delay(1000);
 digitalWrite(a, LOW);
 digitalWrite(b, LOW);
 digitalWrite(c, LOW);  
 digitalWrite(d, LOW);
 digitalWrite(e, LOW);
 digitalWrite(f, LOW);
 digitalWrite(g, LOW);
  }


      
   void piec(){
 digitalWrite(a, HIGH);
 digitalWrite(f, HIGH);
 digitalWrite(g, HIGH);  
 digitalWrite(c, HIGH);
 digitalWrite(d, HIGH);
 delay(1000);
 digitalWrite(a, LOW);
 digitalWrite(b, LOW);
 digitalWrite(c, LOW);  
 digitalWrite(d, LOW);
 digitalWrite(e, LOW);
 digitalWrite(f, LOW);
 digitalWrite(g, LOW);
   }


        
   void szesc(){
 digitalWrite(a, HIGH);
 digitalWrite(f, HIGH);
 digitalWrite(e, HIGH);  
 digitalWrite(c, HIGH);
 digitalWrite(d, HIGH);
 digitalWrite(g, HIGH);
 delay(1000);
 digitalWrite(a, LOW);
 digitalWrite(b, LOW);
 digitalWrite(c, LOW);  
 digitalWrite(d, LOW);
 digitalWrite(e, LOW);
 digitalWrite(f, LOW);
 digitalWrite(g, LOW);
   }


          
   void siedem(){
 digitalWrite(a, HIGH);
 digitalWrite(b, HIGH);
 digitalWrite(c, HIGH);  
 delay(1000);
 digitalWrite(a, LOW);
 digitalWrite(b, LOW);
 digitalWrite(c, LOW);  
 digitalWrite(d, LOW);
 digitalWrite(e, LOW);
 digitalWrite(f, LOW);
 digitalWrite(g, LOW);
 
 
   }
   
   
   void osiem(){
 digitalWrite(a, HIGH);
 digitalWrite(b, HIGH);
 digitalWrite(c, HIGH);  
 digitalWrite(d, HIGH);
 digitalWrite(e, HIGH);
 digitalWrite(f, HIGH);
 digitalWrite(g, HIGH);
 delay(1000);
 digitalWrite(a, LOW);
 digitalWrite(b, LOW);
 digitalWrite(c, LOW);  
 digitalWrite(d, LOW);
 digitalWrite(e, LOW);
 digitalWrite(f, LOW);
 digitalWrite(g, LOW);
   }
   
   void dziewiec(){
 digitalWrite(a, HIGH);
 digitalWrite(b, HIGH);
 digitalWrite(c, HIGH);
 digitalWrite(d, HIGH);
 digitalWrite(f, HIGH);
 digitalWrite(g, HIGH);
 delay(1000);
 digitalWrite(a, LOW);
 digitalWrite(b, LOW);
 digitalWrite(c, LOW);  
 digitalWrite(d, LOW);
 digitalWrite(e, LOW);
 digitalWrite(f, LOW);
 digitalWrite(g, LOW);
   }       
    void zero(){
 digitalWrite(a, HIGH);
 digitalWrite(b, HIGH);
 digitalWrite(c, HIGH);
 digitalWrite(d, HIGH);
 digitalWrite(e, HIGH);
 digitalWrite(f, HIGH);
 delay(1000);
 digitalWrite(a, LOW);
 digitalWrite(b, LOW);
 digitalWrite(c, LOW);  
 digitalWrite(d, LOW);
 digitalWrite(e, LOW);
 digitalWrite(f, LOW);
 digitalWrite(g, LOW);
   }
