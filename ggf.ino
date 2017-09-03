
int ledPin = 7;//declara o led na porta 7
int ldrPin = A1;//declara o sensor ldr(sensor de luz) na porta A1

void setup() {
 pinMode (ledPin, OUTPUT);//define o led como saida de dados
 Serial.begin(9600);  
    
}

void loop() {
 int ldrValor = analogRead(ldrPin);//declara uma variavel inteira para rceber valores lidos pelo sensor


if(ldrValor>=700){//condição se o valor ldo for maior que 700, nao ha grão
  Serial.println("sem grao");
}
 else
  if(ldrValor>=300){//comdição se o valor for maior ou igual 300 então o grão é considerado bom
  Serial.println("bom");

  }
  else
  if(ldrValor<=20){//comdição se o valor for 20 na a luz no ambiente
    
    Serial.println("sem luz");
    
  
  } else{//comdição se o valor for menor que 300 então o grão é considerado ruim
  
   Serial.println("ruim");
   
  }

  Serial.println(ldrValor);
  delay(1000);
}
