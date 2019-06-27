#pragma once

struct Datas8{
    unsigned char *data;
    int size;
    bool isCreateByMalloc;
};

struct Datas8 *datas8_create(unsigned char *data, int size, bool deepCopy);
void datas8_copy(struct Datas8 *src, struct Datas8 *dst, bool deepCopy);
void datas8_release(struct Datas8 *datas8);


/// left + right 연산을 합니다. out을 반환하고, out이 0포인터라면, 새롭게 만들고 반환합니다.
struct Datas8 *datas8_add(struct Datas8 *left, struct Datas8 *right, struct Datas8 *out);
/// left += right 연산을 합니다. left을 반환합니다.
struct Datas8 *datas8_iadd(struct Datas8 *left, struct Datas8 *right);
struct Datas8 *datas8_sub(struct Datas8 *left, struct Datas8 *right, struct Datas8 *out);
struct Datas8 *datas8_isub(struct Datas8 *left, struct Datas8 *right);

struct Datas8 *datas8_xor(struct Datas8 *left, struct Datas8 *right, struct Datas8 *out);
struct Datas8 *datas8_and(struct Datas8 *left, struct Datas8 *right, struct Datas8 *out);
struct Datas8 *datas8_or(struct Datas8 *left, struct Datas8 *right, struct Datas8 *out);

struct Datas8 *datas8_lshift(struct Datas8 *left, struct Datas8 *right, struct Datas8 *out);
struct Datas8 *datas8_rshift(struct Datas8 *left, struct Datas8 *right, struct Datas8 *out);

struct Datas8 *datas8_lrotate(struct Datas8 *left, struct Datas8 *right, struct Datas8 *out);
struct Datas8 *datas8_rrotate(struct Datas8 *left, struct Datas8 *right, struct Datas8 *out);

struct Datas8 *datas8_inv(struct Datas8 *left);