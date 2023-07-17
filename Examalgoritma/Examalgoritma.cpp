#include <iostream>
#include <string>
using namespace std;

class mahasiswa {//isi disini
	int front, rear, max = 5;
	int queue_array[5];
public:
	mahasiswa() {
		front = -1;
		rear = -1;
	}
	void insert() {

		int NIM;
		cout << "Masukkan NIM: ";
		cin >> NIM;
		cout << endl;

		string Nama;
		cout << "Masukkan nama: ";
		cin >> Nama;
		cout << endl;

		int tahunMasuk;
		cout << "Masukkan tahun masuk: ";
		cin >> tahunMasuk;
		cout << endl;

		int jumlahMahasiswa = 0;
	}

	void display() {
		int front_position = front;
		int rear_position = rear;

		//cek apakah antrian kosong
		if (front == -1) {
			cout << "queue is empty\n";
			return;
		}

		cout << "\nelements in the queue are ...\n";

		//jika front_position <= rear position,iterasi dari front hingga rear
		if (front_position <= rear_position) {
			while (front_position <= rear_position) {
				cout << queue_array[front_position] << "  ";
				front_position++;
			}
			cout << endl;
		}
		else {
			//jika front position > rear position ,iterasi dari front hingga akhir array
			while (front_position <= max - 1) {
				cout << queue_array[front_position] << "  ";
				front_position++;
			}

			front_position = 0;

			//iterasi dari awal array hingga rear
			while (front_position <= rear_position) {
				cout << queue_array[front_position] << "  ";
				front_position++;
			}
			cout << endl;
	}
};//isi disini

//isi disini
void tampilkanSemuaMahasiswa();


void algorithmacariMahasiswaByNIM() {
	for (int i = 1; i < n; i++) {               //looping dengan i dimulai dari 1 hingga n-1
		for (int j = 0; j < n - i; j++) {       //looping dengan j dimulai dari 0  hingga n -i-1
			if (a[j] > a[j + 1]) {              //jika nilai pada a[j] lebih besar dari a[j+1]
				int temp = a[j];                //simpan nilai a[j] ke variable sementara temp
				a[j] = a[j + 1];                //assign nilai a[j+1] ke a [j]
				a[j + 1] = temp;                //Asign nilai temp ke a[j+1]
			}
		}
	}
};


void algorithmaSortByTahunMasuk() {                        //procedur untuk mengurutkan array dengan metode bubble short
	for (int i = 1; i < n; i++) {               //looping dengan i dimulai dari 1 hingga n-1
		for (int j = 0; j < n - i; j++) {       //looping dengan j dimulai dari 0  hingga n -i-1
			if (a[j] > a[j + 1]) {              //jika nilai pada a[j] lebih besar dari a[j+1]
				int temp = a[j];                //simpan nilai a[j] ke variable sementara temp
				a[j] = a[j + 1];                //assign nilai a[j+1] ke a [j]
				a[j + 1] = temp;                //Asign nilai temp ke a[j+1]
			}
		}
	}
}

int main() {
	queues q;
	char ch;
	
	while (true); {
		try {
			cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
			cout << "1. Tambah Mahasiswa" << endl;
			cout << "2. Tampilkan Semua Mahasiswa" << endl;
			cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
			cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
			cout << "5. Keluar" << endl;
			cout << "Pilihan: ";
			cin >> pilihan;
			cout.ignore();
			switch (pilihan) {
			case 1: {
				q.insert();
				break;
			}

			case 2: {
				q.display();
				break;
			}

			case 3: {
				//isi disini
				break;
			}

			case 4: {
				q.display();
				break;
			}

			case 5: {
				return 0;
			}

			default:
				cout << "Terima kasih! Program selesai." << endl;

			}

		}

	}
	return 0;
}


//2.stack,buble sort
//3.di dalam stack terdapat push dan pop sedangkan di dalam queue terdapat insert dan delete
//4.Item terakhir yang dimasukan ke dalam stacks adalah yang pertama dihapus.oleh karna itu stacks disebut struktur data (LIFO) Last in Firs Out
//5.(a)5
  //(b)1,5,8 merupakan  sub tree dengan root 5. 12,15,10 merupakan sub tree dengan root 10. 20,22,25 merupakan sub tree dengan root 25. 28,30,36 merupakan sub tree dengan root 36. 38 merupakan leaf node dari root 40 dan 48 merupakan sub tree dari 40 dan merupakan root dari 45 dan 50
  

