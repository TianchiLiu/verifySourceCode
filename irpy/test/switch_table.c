/*
 * Copyright 2017 Hyperkernel Authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int test(uint32_t x)
{
    int32_t y;

    switch (x) {
    case 1:
    case 2:
        y = 10;
        break;
    case 3:
        y = 11;
        break;
    case 4:
        y = 12;
        break;
    case 5:
        y = 13;
        break;
    case 6:
        y = 14;
        break;
    case 7:
        y = 15;
        break;
    case 10:
        y = 703;
        break;
    default:
        y = -1;
        break;
    }

    if (y > 5)
        return y + x;
    return y - x;
}

int main(int argc, char **argv)
{
    int res = test(strtoull(argv[1], NULL, 10));
    printf("%u\n", res);
    return 0;
}
