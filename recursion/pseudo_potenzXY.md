function power(integer k, integer n)
    if n = 0
        return 1
    endif
    if n modulo 2 = 0
        return power(k, n/2) * power(k, n/2)
    endif
    if n modulo 2 = 1
        return k * power(k, (n-1)/2) * power(k, (n-1)/2)
    endif
endfunction