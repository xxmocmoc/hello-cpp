#include "Math1.h"
#include "Math2.h"
#include "Math3.h"
#include "Log/Log.h"

#define MESSAGE "Hello World!"
#define NUM_A 100
#define NUM_B 200
#define A_GREATER_THAN_B(A, B) (A > B)
#define MUL(A, B) ((A * B) > 0)
#define ENABLE_LOG true

#define DEBUG




int main()
{
    int x = sum1(NUM_A, NUM_B);
#if ENABLE_LOG
    log(MESSAGE);
#endif // ENABLE_LOG
    int c = A_GREATER_THAN_B(NUM_A, NUM_B) ? 1 : 0;
    int d = MUL(NUM_A, NUM_B);

#ifdef DEBUG
    int m = 1;
#endif // DEBUG

}
