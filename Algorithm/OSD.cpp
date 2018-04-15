//
// Created by Oysha on 05/04/2018.
//

#include "OSD.h"


void switch_column_I(int GG[128][128], int Gg[128][128], double R[128], int permutation_R[128], int permutation_final[128], int K, int N);

void switch_vector(double R[128], int permutation[128], int length, int N);

void switch_matrix(int Gg[128][128], int permutation[], int k, int n, int K, int N);

void peterson_I(int Gg[128][128], double zero[128], int K, int N);

void quick_sort_track(double vals[], int permutation[], int left, int right);

void order(int **Gg_t, int n, int k, double R[128], double out_D[128])
{
    int K = k, N = n;

    double abs_R[N], C[128][2];
    int Dd[N],DD[N],GG[128][128],i,j,Gg[128][128];
    int permutation_final[128],permutation_I[128],permutation_R[128];
    double zero[K];
    void peterson_I(),quick_sort_track();
    void
    ::switch_column_I(int pInt[128][128], int pInt1[128][128], double pDouble[128], int pInt2[128], int pInt3[128], int i1,
                        int i2);
    void switch_vector(),switch_matrix();

    for (i = 0; i < K; i++)
        for (j = 0; j < N; j++)
            Gg[i][j] = Gg_t[i][j];

    for (i = 0; i < N ;i++) {
        abs_R[i] = (double)std::fabs((double)R[i]);
        if (i < K) {
            permutation_I[i] = i;
        }
        permutation_R[i] = i;
    }

    ::quick_sort_track(abs_R, permutation_R, 0, N - 1);

    ::switch_vector(R, permutation_R, N - 1, N);

    ::switch_matrix(Gg, permutation_R, K - 1, N - 1, K, N);

    ::peterson_I(Gg, zero, K , N);

    for (i = 0; i < K; i++) {
        for (j = 0; j < N; j++) {
            GG[i][j] = Gg[permutation_I[i]][j];
        }
    }

    ::switch_column_I(GG, Gg, R, permutation_R, permutation_final, K, N);

    for (i = 0; i < N; i++) {
        C[i][0] = (R[i] - 1.0) * (R[i] - 1.0);
        C[i][1] = (R[i] + 1.0) * (R[i] + 1.0);
        if (i < K) {
            if (C[i][0] < C[i][1]) {
                Dd[i] = 0;
            } else {
                Dd[i] = 1;
            }
        } else {
            Dd[i] = 0;
            for (j = 0; j < K; j++) {
                Dd[i] = Dd[i] + Dd[j] * Gg[j][i];
            }
            Dd[i] = Dd[i] % 2;
        }
    }

    for (i = 0; i < N; i++) {
        DD[permutation_final[i]] = Dd[i];
    }

    for (i = 0; i < N; i++) {
        if (DD[i] == 0)
            out_D[i] = - 1.0;
        else
            out_D[i] = 1.0;
    }
}

void switch_column_I(int GG[128][128], int Gg[128][128], double R[128], int permutation_R[128], int permutation_final[128], int K, int N)
{
    int i,j,index,count,start;
    int record[N],record_I[N];
    double temp[N];

    index = 0;
    count = 0;

    for (i = 0; i < K + index; i++) {
        if (GG[i - index][i] == 0)
        {
            record[index] = i;
            index++;
        }
        else
        {
            record_I[count] = i;
            count++;
        }
    }
    start = K + index - 1;
    i = N - 1;
    while (i > start) {
        for(j = 0; j < K; j++)
        {
            Gg[j][i] = GG[j][i];
            permutation_final[i] = permutation_R[N - 1 - i];
        }
        i--;
    }


    while (index > 0) {
        temp[i] = R[i];
        for(j = 0; j < K; j++) {
            Gg[j][i] = GG[j][record[index - 1]];
            permutation_final[i] = permutation_R[N - 1 - record[index - 1]];
        }
        if (i < record[index - 1]) {
            R[i] = temp[record[index - 1]];
        } else {
            R[i] = R[record[index - 1]];
        }
        i--;
        index--;
    }
    while (count > 0) {
        temp[i] = R[i];
        for(j = 0; j < K; j++) {
            Gg[j][i] = GG[j][record_I[count - 1]];
            permutation_final[i] = permutation_R[N - 1 - record_I[count - 1]];
        }

        if (i < record_I[count - 1]) {
            R[i] = temp[record_I[count - 1]];
        } else {
            R[i] = R[record_I[count - 1]];
        }
        i--;
        count--;
    }
}

void switch_vector(double R[128], int permutation[128], int length, int N)
{
    int i;
    double temp[N];

    for (i = 0;i <= length; i++) {
        temp[i] = R[i];
        if (permutation[length - i] > i) {
            R[i] = R[permutation[length - i]];
        } else {
            R[i] = temp[permutation[length - i]];
        }
    }
}

void switch_matrix(int Gg[128][128], int permutation[], int k, int n, int K, int N)
{
    int i,j;
    double temp[K][N];

    for (j = 0;j <= n;j++) {
        for (i = 0; i <= k; i++) {
            temp[i][j] = Gg[i][j];
            if (permutation[n - j] > j) {
                Gg[i][j] = Gg[i][permutation[n - j]];
            } else {
                Gg[i][j] = temp[i][permutation[n - j]];
            }
        }
    }
}

void peterson_I(int Gg[128][128], double zero[128], int K, int N)
{
    int i, j, l, m;

    for (i = 0; i < K; i++) {
        j = 0;
        zero[i] = 0.0;
        while (Gg[i][j] == 0) {
            j++;
            zero[i] = zero[i] + 1.0;
        }
        for (l = 0; l < K; l++) {
            if ((l != i) && (Gg[l][j] == 1)) {
                for (m = 0; m < N; m++) {
                    Gg[l][m] = (Gg[l][m] + Gg [i][m])%2;
                }
            }
        }
    }
}

void quick_sort_track(double vals[], int permutation[], int left, int right)
{
    int ascending = left - 1, descending = right;
    double ref_val,temp;
    int temp2;

    if (right > left)
    {
        ref_val = vals [right];

        for(;;) {
            while (vals [++ascending] < ref_val);

            while (vals [--descending] > ref_val);

            if (ascending >= descending)
                break;

            temp = vals[ascending];
            temp2 = permutation[ascending];
            vals[ascending] = vals[descending];
            vals[descending] = temp;
            permutation[ascending] = permutation[descending];
            permutation[descending] = temp2;

        }

        temp = vals[ascending];
        temp2 = permutation[ascending];
        vals[ascending] = vals[right];
        vals[right] = temp;
        permutation[ascending] = permutation[right];
        permutation[right] = temp2;

        quick_sort_track( vals, permutation, left, ascending - 1);

        quick_sort_track( vals, permutation, ascending + 1, right);
    }
}
