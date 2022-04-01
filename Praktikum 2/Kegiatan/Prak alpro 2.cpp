#include <iostream>
using namespace std;

int main(){
	int menu, geprek=21000, goreng=17000, udang=19000, cumi=20000, bakar=25000;
	int jarak,pil,total,ongkir,potongkir,diskon,tunai,jumongkir,totbayar;
	char a;
	x:
	cout<<"\t\tDaftar Menu\n";
	cout<<"======================================\n";
	cout<<"1. Ayam Geprek  : Rp 21.000\n";
	cout<<"2. Ayam Goreng  : Rp 17.000\n";
	cout<<"3. Udang Goreng : Rp 19.000\n";
	cout<<"4. Cumi Goreng  : Rp 20.000\n";
	cout<<"5. Ayam Bakar   : Rp 25.000\n"; 
	cout<<"======================================\n";
	
	cout<<"Pilih Menu : ";
	cin>>menu;
	cout<<"Jumlah pesanan : ";
	cin>>pil;
	switch(menu){
	
		case 1:
			total=geprek*pil;
			break;	
		case 2:
			total=goreng*pil;
			break;
		case 3:
			total=udang*pil;
			break;
		case 4:
			total=cumi*pil;
			break;
		case 5: 
			total=bakar*pil;
			break;
	}
	
	cout<<"Masukan Jarak Rumah Anda : ";
	cin>>jarak;
	if(jarak<=3){
		cout<<"Anda mendapatkan biaya ongkir Rp 15.000\n";
		ongkir=15000;
	}else{
		cout<<"Anda dikenai biaya ongkir Rp 25.000\n";
		ongkir=25000;
	}
	
	if(total>=25000 && total<=50000){
			cout<<"Anda mendapatkan potongan biaya ongkir Rp 3000\n";
			potongkir=3000;
			jumongkir=ongkir-potongkir;
			diskon=total*0;
	}else if(total>=50000 && total<=150000){
			cout<<"Anda mendapatkan potongan biaya ongkir Rp 5000 dan diskon 15%\n";
			potongkir=5000;
			jumongkir=ongkir-potongkir;
			diskon=total*0.15;
	}else if(total>=150000){
			cout <<"Anda Mendapatkan Potongan biaya ongkir Rp 8000 dan diskon 35% \n";
			potongkir=8000;
			jumongkir=ongkir-potongkir;
			diskon =total*0.35;
	}else{
			cout<<"Anda tidak Mendapatkan  diskon"<<endl;
	}
	
	cout<<endl;
	cout<<"===============================================\n";
	cout<<"|\t\tSlip Pembayaran"; cout<<"                |\n";    
	cout<<"===============================================\n";
	cout<<"|Harga Jual   : Rp "<<total<<endl;
	cout<<"|Jarak Rumah  : "<<jarak<<" Km"<<endl;
	cout<<"|Ongkir       : Rp "<<jumongkir<<endl;
	cout<<"|Diskon       : Rp "<<diskon<<endl;
	cout<<"|Total Bayar  : Rp "<<total-(jumongkir+diskon)<<endl;
	cout<<"===============================================\n";
	totbayar=total-(jumongkir+diskon);
	cout<<"|Tunai        : Rp "; cin>>tunai;
	cout<<"|Kembali      : Rp "<<tunai-totbayar<<endl;
	cout<<"===============================================\n";
	
	cout<<"\nApakah anda akan memesan kembali : [Y/T]";
	cin>>a;
		if(a == 'Y'){
			system("cls");
			goto x;
		}else if(a == 'T'){
			exit(0);
		}
	return 0; 		
}
