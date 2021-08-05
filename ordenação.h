void QuickSort(dados v[], int n){
	int a, b;
	dados x, temp;
	if(n<=1)
		return;
	else{
		x = v[0];
		a = 1;
		b = n-1;
		do{
			while((a<n)&&(v[a].codigo<=x.codigo))
				a++;
			while(v[b].codigo > x.codigo)
				b--;
			if(a<b){
				temp = v[a];
				v[a] = v[b];
				v[b] = temp;
				a++;
				b--;
			}	
		}while(a<=b);
		v[0] = v[b];
		v[b] = x;
		QuickSort(v, b);
		QuickSort(&v[a], n-a);
	}
}
