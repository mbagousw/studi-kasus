#include<iostream>

using namespace std;
int main ()
{
    int kode,diskon,pri,dlv,dlv1,dlv2,jml,tot,byr,kbl;
    char mad;
    do
    {
    cout<<"          Rumah Makan Yogjanesian            "<<endl;
    cout<<"           Harga Untuk Anak Muda            "<<endl;
    cout<<"         Resep Asli dari Chef Juna       "<<endl;
    cout<<"============================================"<<endl;
    cout<<""<<endl;
   
    cout<<"Menu Makanan              Harga"<<endl;
    cout<<"============================================"<<endl;
    cout<<"1. AYAM GEPREK            Rp. 21.000"<<endl;
    cout<<"2. AYAM GORENG            Rp. 17.000"<<endl;
    cout<<"3. UDANG GORENG           Rp. 19.000"<<endl;
    cout<<"4. CUMI GORENG            Rp. 20.000"<<endl;
    cout<<"5. AYAM BAKAR             Rp. 25.000"<<endl;

    cout<<'\n'<<"MASUKKAN PILIHAN ANDA : ";
    cin>>kode;
    switch (kode){
    case 1:
        cout<<'\n'<<"AYAM GEPREK"<<endl;
        pri=21000;
        cout<<"Masukkan Jumlah : ";
        cin>>jml;
            tot=pri*jml;
        cout<<endl;
        cout<<"JASA DELIVERY   " << endl;
			cout<<"1. 1 Km - 3 Km" << endl;
			cout<<"2. 3 Km - 10 Km" << endl;
		cout << endl;
		cout << "Masukan Pilihan Anda : ";
		cin >> dlv;	
        switch (dlv) {
        	
        	case 1:
        	cout<<'\n'<<"1 Km - 3 Km"<< endl;
			dlv1=15000;
			cout<<"Masukan Jarak Lokasi Anda : ";
			cin>>dlv;
				tot=tot+dlv1;
			cout<<endl;
			break;
			case 2:
				cout<<'\n'<<"3 Km - 10 Km"<< endl;
			dlv2=25000;
			cout<<"Masukan Jarak Lokasi Anda : ";
			cin>>dlv;
				tot=tot+dlv2;
			cout<<endl;
			break;
			
		}
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<endl;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 2:
        cout<<'\n'<<"AYAM GORENG"<<endl;
            pri=17000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<endl;
        cout<<"JASA DELIVERY   " << endl;
			cout<<"1. 1 Km - 3 Km" << endl;
			cout<<"2. 3 Km - 10 Km" << endl;
		cout << endl;
		cout << "Masukan Pilihan Anda : ";
		cin >> dlv;	
        switch (dlv) {
        	
        	case 1:
        	cout<<'\n'<<"1 Km - 3 Km"<< endl;
			dlv1=15000;
			cout<<"Masukan Jarak Lokasi Anda : ";
			cin>>dlv;
				tot=tot+dlv1;
			cout<<endl;
			break;
			case 2:
				cout<<'\n'<<"3 Km - 10 Km"<< endl;
			dlv2=25000;
			cout<<"Masukan Jarak Lokasi Anda : ";
			cin>>dlv;
				tot=tot+dlv2;
			cout<<endl;
			break;
			
		}
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<endl;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 3:
        cout<<'\n'<<"UDANG GORENG"<<endl;
            pri=19000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<endl;
        cout<<"JASA DELIVERY   " << endl;
			cout<<"1. 1 Km - 3 Km" << endl;
			cout<<"2. 3 Km - 10 Km" << endl;
		cout << endl;
		cout << "Masukan Pilihan Anda : ";
		cin >> dlv;	
        switch (dlv) {
        	
        	case 1:
        	cout<<'\n'<<"1 Km - 3 Km"<< endl;
			dlv1=15000;
			cout<<"Masukan Jarak Lokasi Anda : ";
			cin>>dlv;
				tot=tot+dlv1;
			cout<<endl;
			break;
			case 2:
				cout<<'\n'<<"3 Km - 10 Km"<< endl;
			dlv2=25000;
			cout<<"Masukan Jarak Lokasi Anda : ";
			cin>>dlv;
				tot=tot+dlv2;
			cout<<endl;
			break;
			
		}
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<endl;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 4:
        cout<<'\n'<<"CUMI GORENG"<<endl;
            pri=20000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<endl;
        cout<<"JASA DELIVERY   " << endl;
			cout<<"1. 1 Km - 3 Km" << endl;
			cout<<"2. 3 Km - 10 Km" << endl;
		cout << endl;
		cout << "Masukan Pilihan Anda : ";
		cin >> dlv;	
        switch (dlv) {
        	
        	case 1:
        	cout<<'\n'<<"1 Km - 3 Km"<< endl;
			dlv1=15000;
			cout<<"Masukan Jarak Lokasi Anda : ";
			cin>>dlv;
				tot=tot+dlv1;
			cout<<endl;
			break;
			case 2:
				cout<<'\n'<<"3 Km - 10 Km"<< endl;
			dlv2=25000;
			cout<<"Masukan Jarak Lokasi Anda : ";
			cin>>dlv;
				tot=tot+dlv2;
			cout<<endl;
			break;
			
		}
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<endl;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 5:
        cout<<'\n'<<"AYAM BAKAR"<<endl;
            pri=25000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<endl;
        cout<<"JASA DELIVERY   " << endl;
			cout<<"1. 1 Km - 3 Km" << endl;
			cout<<"2. 3 Km - 10 Km" << endl;
		cout << endl;
		cout << "Masukan Pilihan Anda : ";
		cin >> dlv;	
        switch (dlv) {
        	
        	case 1:
        	cout<<'\n'<<"1 Km - 3 Km"<< endl;
			dlv1=15000;
			cout<<"Masukan Jarak Lokasi Anda : ";
			cin>>dlv;
				tot=tot+dlv1;
			cout<<endl;
			break;
			case 2:
				cout<<'\n'<<"3 Km - 10 Km"<< endl;
			dlv2=25000;
			cout<<"Masukan Jarak Lokasi Anda : ";
			cin>>dlv;
				tot=tot+dlv2;
			cout<<endl;
			break;
			
		}
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<endl;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    default:
    cout<<"Kode Yang Anda Masukkan Tidak Ada \n";
    }
    }
    while (mad/='Y');
    cout<<"Terimah Kasih Atas Kunjungan Anda";
    return 0;
}
