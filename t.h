// based on http://www.jera.com/techinfo/jtns/jtn002.html

#ifndef T_H
#define T_H

#define t_assert(test, message) do { if (!(test)) return message; } while (0)
#define t_run_test(test) do { char *message = test(); \
    if (message) return message; } while (0)

#endif
