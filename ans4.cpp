/*For n = 0:
fun(0) returns 1 (since n <= 1).
For n = 1:
fun(1) returns 1 (since n <= 1).
For n = 2:
fun(2) returns fun(1) which is 1 (since n is even and fun(1) returns 1).
For n = 3:
fun(3) returns fun(1) + fun(2) which is 1 + 1 = 2 (since n is odd, fun(1) and fun(2) both return 1).
For n = 4:
fun(4) returns fun(2) which is 1 (since n is even and fun(2) returns 1).*/