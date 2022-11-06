#include <stdio.h>

int main(){
    int d1, m1, r1,
        d2, m2, r2;

    int d_r, m_r, r_r;         

    printf("Podaj wcześniejszą datę: ");
    scanf("%d-%d-%d", &d1, &m1, &r1);

    printf("Podaj późniejszą date: ");
    scanf("%d-%d-%d", &d2, &m2, &r2);

    if(d1 < d2){      
        if (m2 == 2)
        {
          
            if ((r2 % 4 == 0 && r2 % 100 != 0) || (r2 % 400 == 0)) 
            {
                d2 += 29;
            }

            else
            {
                d2 += 28;
            }                        
        }

        else if (m2 == 5 || m2 == 7 || m2 == 10 || m2 == 12) 
        {
           d2 += 30; 
        }
        else
        {
           d2 += 31;
        }
        m2 = m2 - 1;
    }

    if (m2 < m1)
    {
        m2 += 12;
        r2 -= 1;
    }       

    d_r = d2 - d1;
    m_r = m2 - m1;
    r_r = r2 - r1;

     printf("Różnica: %d dni %02d miesięcy i %02d lata.", d_r, m_r, r_r);

    return 0;
}