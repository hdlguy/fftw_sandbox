#include <fftw3.h>

int main()
{
    const int N = 96*1024;

    fftw_complex *in, *out;
    fftw_plan p;
    //...
    in = (fftw_complex*) fftw_malloc(sizeof(fftw_complex) * N);
    out = (fftw_complex*) fftw_malloc(sizeof(fftw_complex) * N);

    fftw_import_wisdom_from_filename("./wisdomf");
    p = fftw_plan_dft_1d(N, in, out, FFTW_FORWARD, FFTW_ESTIMATE);
    //...
    for (int i=0; i<1000; i++){
        fftw_execute(p); /* repeat as needed */
    }
    //...
    fftw_destroy_plan(p);
    fftw_free(in); fftw_free(out);

}
