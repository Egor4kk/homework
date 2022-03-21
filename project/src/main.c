// #include "utils.c"
#ifndef UTILS_H
#define UTILS_H
#include "utils.h"
#endif
#ifndef UTILS1_H
#define UTILS1_H
#include "utils1.h"
#endif

#define ERR_ARGS_COUNT (-1)
#define ERR_WRONG_FLG (-2)

#define TST_FOO_FIX     1
#define TST_FOO_IMPL    2
#define TST_MOD_IMPL    3
#define TST_MMM_TRY     4


/* NOTE(stitaevskiy):
 * We use `atoi` function just for simplification and code reducing.
 * This function doesn't report conversation errors.
 * For safety program we recommend using `strtol` and its analogs.
 * (See `man atoi` and `man strtol` for more info).
const char str_num[] = "1234";
char* end = NULL;
int val = (int) strtol(str_num, &end, 0);
if (end != '\0') {
     //ERROR
}
*/

int main(int argc, const char** argv) {
    if (argc < 3) {
        return ERR_ARGS_COUNT;
    }

    int Test_case = atoi(argv[1]);
    const char* data;
    data = argv[2];

    switch (Test_case) {
        case TST_FOO_FIX: {
            if (argc == 3) {
                int to = atoi(data);
                size_t ticks_count = timer_from(to);
                printf("%zu\n", ticks_count);
            } else {
                return ERR_ARGS_COUNT;
            }
            break;
        }
        case TST_FOO_IMPL: {
            if (argc == 4) {
                int base = atoi(data);
                int power = atoi(argv[3]);
                int res = custom_power(base, power);    // TODO(Kosan4kk): Implement me
                printf("%i\n", res);
            } else {
                return ERR_ARGS_COUNT;
            }
            break;
        }
        case TST_MOD_IMPL: {
            if (argc == 3) {
            int num = atoi(data);
            int res = isPrime(num);
            printf("%i\n", res);
            } else {
                return ERR_ARGS_COUNT;
            }
            break;
        }
        case TST_MMM_TRY: {
            if (argc == 3) {
            int num = atoi(data);
            Factorial(num);
            } else {
                return ERR_ARGS_COUNT;
            }
            break;
        }
        default: {
            return ERR_WRONG_FLG;
        }
    }
}
