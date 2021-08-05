void armazenar(dados d){
	FILE *f;
	if(d.tipo == 1){
		f = fopen("bebida.bin", "ab");
	}else{
		if(d.tipo == 2){
			f = fopen("comida.bin", "ab");
		}else{
			f = fopen("vinho.bin", "ab");
		}
	}
	fwrite(&d, sizeof(dados), 1, f);
	fclose(f);
}

int numeroDados(){
	FILE *f;
	dados a;
	int n=0;
	if((f = fopen("bebida.bin", "rb"))!=NULL){
		while(fread(&a, sizeof(dados), 1, f) == 1){
			n++;
		}
		fclose(f);
	}
	if((f = fopen("comida.bin", "rb"))!=NULL){
		while(fread(&a, sizeof(dados), 1, f) == 1){
			n++;
		}
		fclose(f);
	}	
	if((f = fopen("vinho.bin", "rb"))!=NULL){
		while(fread(&a, sizeof(dados), 1, f) == 1){
			n++;
		}
		fclose(f);
	}
	return n;
}
