#include <stdio.h>

int main() {
    double thunhap;
    
    while (scanf("%lf", &thunhap) == 1) {
        
        double muc[] = {0, 5, 10, 18, 32, 52, 80, 1e9};
        double suat[] = {0.05, 0.10, 0.15, 0.20, 0.25, 0.30, 0.35};
        double tongthue = 0;
        
        for (int i = 0; i < 7; i++) {
            double duoi = muc[i];
            double tren = muc[i + 1];
            
            if (thunhap > duoi) {
                double phan = (thunhap < tren) ? (thunhap - duoi) : (tren - duoi);
                
                if (phan > 1e-7) {
                    double thue = phan * suat[i];
                    tongthue += thue;
                    printf("%.3f %.3f(%.0f%%)\n", phan, thue, suat[i] * 100);
                }
            }
        }
        
        printf("TONG THUE %.3f\n", tongthue);
    }
    
    return 0;
}
