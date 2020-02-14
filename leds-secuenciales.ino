void funcion1();          
void funcion2();
void funcion3();
static int cont=0;
void setup(){                    //Configuracion de conexiones para las entradas y salidas del ARduiNo
  pinMode(7, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (4, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode (9, OUTPUT);  
  pinMode (3, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (8,INPUT);
}

void loop(){
    
    if(digitalRead(8)==HIGH){       //Si pulso el boton
    cont=cont+1;      //cont va valer 1
    }
   
    inicio:
    switch(cont){        //Evalua cont, segun los distintos valores que tenga el mismo
    
    case 1:         //si es 1 realiza las instrucciones de la funcion 1
    funcion1();
    cont=cont+1;  //Ahora cont es igual a 2
    goto inicio;
    break;
    
    case 2:    //Como es igual 2 realizara las instrucciones de la  funcion 2
    funcion2();
    cont=cont+1;  //Se transforma en 3
    goto inicio;
    break;
    
    case 3:      //Ya que es 3, realizara las instrucciones de la funcion 3
    funcion3();
    cont=1;      //retorno a la funcion 1
    goto inicio;
    break;
    }
}
   
    
    
  void funcion1() {
  int ban=1;
  do{
  delay(50);
  digitalWrite (7, HIGH);
  delay(50);
  digitalWrite(7, LOW);
  delay(50);
  digitalWrite (6, HIGH);
  delay(50);
  digitalWrite(6, LOW);
  delay(50);
  digitalWrite (5, HIGH);
  delay(50);
  digitalWrite(5, LOW);
  delay(50);
  digitalWrite (4, HIGH);
  delay(50);
  digitalWrite(4, LOW);
  delay(50);
  digitalWrite (10, HIGH);
  delay(50);
  digitalWrite(10, LOW);
  delay(50);
  digitalWrite (9, HIGH);
  delay(50);
  digitalWrite(9, LOW);
  delay(50);
  digitalWrite (3, HIGH);
  delay(50);
  digitalWrite(3, LOW);
  delay(50);
  digitalWrite (12, HIGH);
  delay(50);
  digitalWrite(12, LOW);
  delay(50);
  digitalWrite (12, HIGH);
  delay(50);
  digitalWrite(12, LOW);
  delay(50);
  digitalWrite (3, HIGH);
  delay(50);
  digitalWrite(3, LOW);
  delay(50);
  digitalWrite (9, HIGH);
  delay(50);
  digitalWrite(9, LOW);
  delay(50);
  digitalWrite (10, HIGH);
  delay(50);
  digitalWrite(10, LOW);
  delay(50);
  digitalWrite (4, HIGH);
  delay(50);
  digitalWrite(4, LOW);
  delay(50);
  digitalWrite (5, HIGH);
  delay(50);
  digitalWrite(5, LOW);
  delay(50);
  digitalWrite (6, HIGH);
  delay(50);
  digitalWrite(6, LOW);
  delay(50);
  digitalWrite (7, HIGH);
  delay(50);
  digitalWrite(7, LOW);
  delay(50);
  if(digitalRead(8)==HIGH){
  ban=0;
  }
 }
  while(ban==1);
}

  void funcion2(){
  int ban=1;
  do{
  delay(50);
  digitalWrite (7, HIGH);
  delay(50);
  digitalWrite(6, HIGH);
  delay(50);
  digitalWrite (5, HIGH);
  delay(50);
  digitalWrite(4, HIGH);
  delay(50);
  digitalWrite (10, HIGH);
  delay(50);
  digitalWrite(9, HIGH);
  delay(50);
  digitalWrite (3, HIGH);
  delay(50);
  digitalWrite(12, HIGH);
  delay(50);
  digitalWrite (7, LOW);
  delay(50);
  digitalWrite(6, LOW);
  delay(50);
  digitalWrite (5, LOW);
  delay(50);
  digitalWrite(4, LOW);
  delay(50);
  digitalWrite (10, LOW);
  delay(50);
  digitalWrite(9, LOW);
  delay(50);
  digitalWrite (3, LOW);
  delay(50);
  digitalWrite(12, LOW);
  delay(50); 
  //
  digitalWrite (12, HIGH);
  delay(50);
  digitalWrite(3, HIGH);
  delay(50);
  digitalWrite (9, HIGH);
  delay(50);
  digitalWrite(10, HIGH);
  delay(50);
  digitalWrite (4, HIGH);
  delay(50);
  digitalWrite(5, HIGH);
  delay(50);
  digitalWrite (6, HIGH);
  delay(50);
  digitalWrite(7, HIGH);
  delay(50);
  digitalWrite (7, LOW);
  delay(50);
  digitalWrite(6, LOW);
  delay(50);
  digitalWrite (5, LOW);
  delay(50);
  digitalWrite(4, LOW);
  delay(50);
  digitalWrite (10, LOW);
  delay(50);
  digitalWrite(9, LOW);
  delay(50);
  digitalWrite (3, LOW);
  delay(50);
  digitalWrite(12, LOW);
  delay(50);
  
  if(digitalRead(8)==HIGH){
  ban=0;
  }
  }
  while(ban==1);
} 

  void funcion3(){
  int ban=1;
  do{
  delay(70);
  digitalWrite (7, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite (10, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(6, LOW);
  digitalWrite (4, LOW);
  digitalWrite(9, LOW);
  digitalWrite (12, LOW);
  delay(70);
  digitalWrite (7, LOW);
  digitalWrite(5, LOW);
  digitalWrite (10, LOW);
  digitalWrite(3, LOW);
  digitalWrite(6, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite (12, HIGH);
  delay(100);
  if(digitalRead(8)==HIGH){
  ban=0;
  }
 } 
  while(ban==1);
}
  
   
