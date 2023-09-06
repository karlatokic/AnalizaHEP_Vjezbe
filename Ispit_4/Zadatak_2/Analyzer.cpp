#include <Analyzer.h>

 
Analyzer::Analyzer() {
    // Constructor
}

void Analyzer::PoissonCI(double CL, int n) {
    lambda_plus = 50;
    lambda_minus = 0;
    increment = 0.001;
    sum_up = 0;
    sum_down = 0;
    r = 0;

    while (sum_up <= (1 - CL)) {
        sum_up = 0;

        for (r = 0; r <= n; r++) {
            sum_up += TMath::Poisson(r, lambda_plus);
        }
        
        lambda_plus -= increment;
    }

    while (sum_down <= (1 - CL)) {
        sum_down = 0;
        for (r = n; r <= n + 1000; r++) {
            sum_down += TMath::Poisson(r, lambda_minus);
        }
        
        lambda_minus += increment;
        if (n == n + 1000) {
            break;
        }
    }

    cout << "lambda_minus = " << lambda_minus << "\n";
    cout << "lambda_plus = " << lambda_plus << "\n";
}


