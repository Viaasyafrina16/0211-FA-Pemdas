#include <iostream>

using namespace std;

class MasukUniversitas {
public: // isi access modifier disini
    int uangPendaftaran;

    MasukUniversitas(int pUangPendaftaran):// isi daftar variable yang dibutuhkan di bawah ini
                    uangPendaftaran(pUangPendaftaran)
                    {
                        cout << "uangPendaftaran dibuat dengan  MasukUniversitas"<<uangPendaftaran<<"\n"<<endl;
                    }
public:
    MasukUniversitas() {
    uangPendaftaran = 0;
    string uangPendaftaran[100000]; // isi nilai default variable yang dibutuhkan di bawah ini
}

virtual void namaJalurMasuk() {  // polimorpi
    cout << "nama jalur masuk" << endl;
    return; 
}  // isi disini dengan fungsi virtual yang dibutuhkan

void setUangPendaftaran(int nilai,string value) {
    this->uangPendaftaran = nilai;
        uangPendaftaran(nilai) = value;
    }
    float getUangPendaftaran(int nilai) {
    return uangPendaftaran[nilai];
    }
// isi setter dan getter variable yang dibutuhkan di bawah ini
};

class SNBT : public MasukUniversitas {
private:

int biaya 
public: 
    SNBT(int pBiaya)
    
     {
        cout <<" uang pendaftaran " << uangPendaftaran << endl;
    }
    


    
    // isi disini untuk melengkapi class SNBT
};
class SNBP : public MasukUniversitas {
// isi disini untuk melengkapi class SNBP
};
int main() {
// isi disini untuk fungsi main