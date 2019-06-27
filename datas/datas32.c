#include "datas32.h"
#include <malloc.h>

struct Datas32 *datas32_create(unsigned long *data, int size, unsigned char deepCopy){
    struct Datas32 *retval = malloc(sizeof(struct Datas32));
    retval->data = data;
    retval->size = size;
    retval->isCreateByMalloc = 0;
    if(deepCopy){
        retval->data = malloc(sizeof(unsigned long) * size);
        retval->isCreateByMalloc = 1;
        for(int i = 0; i < size; i ++){
            retval->data[i] = data[i];
        }
    }
    return retval;
}
void datas32_copy(struct Datas32 *src, struct Datas32 *dst, unsigned char deepCopy){
    if(deepCopy)
}
void datas32_release(struct Datas32 *datas32);


/// left + right 연산을 합니다. out을 반환하고, out이 0포인터라면, 새롭게 만들고 반환합니다.
struct Datas32 *datas32_add(struct Datas32 *left, struct Datas32 *right, struct Datas32 *out);
/// left += right 연산을 합니다. left을 반환합니다.
struct Datas32 *datas32_iadd(struct Datas32 *left, struct Datas32 *right);
struct Datas32 *datas32_sub(struct Datas32 *left, struct Datas32 *right, struct Datas32 *out);
struct Datas32 *datas32_isub(struct Datas32 *left, struct Datas32 *right);

struct Datas32 *datas32_xor(struct Datas32 *left, struct Datas32 *right, struct Datas32 *out);
struct Datas32 *datas32_and(struct Datas32 *left, struct Datas32 *right, struct Datas32 *out);
struct Datas32 *datas32_or(struct Datas32 *left, struct Datas32 *right, struct Datas32 *out);

struct Datas32 *datas32_lshift(struct Datas32 *left, struct Datas32 *right, struct Datas32 *out);
struct Datas32 *datas32_rshift(struct Datas32 *left, struct Datas32 *right, struct Datas32 *out);

struct Datas32 *datas32_lrotate(struct Datas32 *left, struct Datas32 *right, struct Datas32 *out);
struct Datas32 *datas32_rrotate(struct Datas32 *left, struct Datas32 *right, struct Datas32 *out);

struct Datas32 *datas32_inv(struct Datas32 *left);