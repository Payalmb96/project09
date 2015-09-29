#include<stdio.h>
#include<string.h>
#define MAX 128 
char* Base64Encoder(char* str){
	return NULL;
}
char* BinaryEncoder(char* str){
	return NULL;
}
char* MorseCodeEncoder(char* str){
	return NULL;
}
char* Ascii85Encoder(char* str){
	return NULL;
}
char* HuffEncoder(char* str){
	return NULL;
}
char* Base64Decoder(char* str){
	return NULL;
}
char* BinaryDecoder(char* str){
	return NULL;
}
char* MorseCodeDecoder(char* str){
	return NULL;
}
char* Ascii85Decoder(char* str){
	return NULL;
}
char* HuffDecoder(char* str){
	return NULL;
}
void printmenu1(){
	char ch, *stren, *str;
	do{
		str = (char*) malloc(MAX);
		printf("Enter String:");
		scanf("%s", str);
		printf("Enter choice of converting String to - \n1.Base64\n2.Binary\n3.Morse Code\n4.Ascii85\n5.Encoder\n6.Exit");
		scanf("%c", &ch);
		switch(ch){
			case '1':
					stren = Base64Encoder(str);
					printf("Encoded String : %s", stren);break;
			case '2':
					stren = BinaryEncoder(str);
					printf("Encoded String : %s", stren);break;
			case '3':
					stren = MorseCodeEncoder(str);
					printf("Encoded String : %s", stren);break;
			case '4':
					stren = Ascii85Encoder(str);
					printf("Encoded String : %s", stren);break;
			case '5':
					stren = HuffEncoder(str);
					printf("Encoded String : %s", stren);break;
			case '6':
					break;
			default:
					printf("-----Wrong Choice!-----");
		}
	}while(ch != '6');
}
void printmenu2(){
	char ch, *str, *strde;
	do{
		str = (char*) malloc(MAX);
		printf("Enter String:");
		scanf("%s", str);
		printf("Enter choice of converting String to - \n1.Base64\n2.Binary\n3.Morse Code\n4.Ascii85\n5.Encoder\n6.Exit");
		scanf("%c", &ch);
		switch(ch){
			case '1':	
					strde = Base64Decoder(str);
					printf("Decoded String : %s", strde);break;
			case '2':
					strde = BinaryDecoder(str);
					printf("Decoded String : %s", strde);break;
			case '3':
					strde = MorseCodeDecoder(str);
					printf("Decoded String : %s", strde);break;
			case '4':
					strde = Ascii85Decoder(str);
					printf("Decoded String : %s", strde);break;
			case '5':
					strde = HuffDecoder(str);
					printf("Decoded String : %s", strde);break;
			case '6':
					break;
			default:
					printf("-----Wrong Choice!-----");
		}
	}while(ch != '6');
}
int main(){
	char ch;
	do{
		printf("Enter choice: \n1.Encoder \n2.Decoder\n3.Exit\n");
		scanf("%c", &ch);
		switch(ch){
			case '1':
					printmenu1();
					break;
			case '2':
					printmenu2();
					break;
			case '3':
					break;
			default:
					printf("-----Wrong Choice!--------");
		}
	}while(ch != '3');
}

