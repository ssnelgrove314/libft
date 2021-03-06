#ifndef MACROSOFT_H
# define MACROSOFT_H

# define FAC(n) FAC ## n
# define FAC0 1
# define FAC1 1
# define FAC2 2
# define FAC3 6
# define FAC4 24
# define FAC5 120
# define FAC6 720
# define FAC7 5040
# define FAC8 40320
# define FAC9 362880
# define FAC10 3628800
# define FAC11 39916800
# define FAC12 479001600
# define FAC13 6227020800
# define FAC14 87178291200
# define FAC15 137674368000
# define FAC16 20922789888000
# define FAC17 355687428096000
# define FAC18 6402373705728000

# define POW(n, e) POW ## e (n)
# define POW1(n) (n)
# define POW2(n) (n*n)
# define POW3(n) (n*n*n)
# define POW4(n) (n*n*n*n)
# define POW5(n) (n*n*n*n*n)
# define POW6(n) (n*n*n*n*n*n)
# define POW7(n) (n*n*n*n*n*n*n)
# define POW8(n) (n*n*n*n*n*n*n*n)
# define POW9(n) (POW8(n)*POW1(n))
# define POW10(n) (POW8(n)*POW2(n))
# define POW11(n) (POW8(n)*POW3(n))
# define POW12(n) (POW8(n)*POW4(n))
# define POW13(n) (POW8(n)*POW5(n))
# define POW14(n) (POW8(n)*POW6(n))
# define POW15(n) (POW8(n)*POW7(n))
# define POW16(n) (POW8(n)*POW8(n))
# define POW17(n) (POW16(n)*POW1(n))
# define POW18(n) (POW16(n)*POW2(n))
# define POW19(n) (POW16(n)*POW3(n))
# define POW20(n) (POW16(n)*POW4(n))
# define POW21(n) (POW16(n)*POW5(n))
# define POW22(n) (POW16(n)*POW6(n))
# define POW23(n) (POW16(n)*POW7(n))
# define POW24(n) (POW16(n)*POW8(n))
# define POW25(n) (POW24(n)*POW1(n))
# define POW26(n) (POW24(n)*POW2(n))
# define POW27(n) (POW24(n)*POW3(n))
# define POW28(n) (POW24(n)*POW4(n))
# define POW29(n) (POW24(n)*POW5(n))
# define POW30(n) (POW24(n)*POW6(n))
# define POW31(n) (POW24(n)*POW7(n))
# define POW32(n) (POW24(n)*POW8(n))
# define POW33(n) (POW32(n)*POW1(n))
# define POW34(n) (POW32(n)*POW2(n))
# define POW35(n) (POW32(n)*POW3(n))
# define POW36(n) (POW32(n)*POW4(n))
# define POW37(n) (POW32(n)*POW5(n))
# define POW38(n) (POW32(n)*POW6(n))
# define POW39(n) (POW32(n)*POW7(n))
# define POW40(n) (POW32(n)*POW8(n))
# define POW41(n) (POW40(n)*POW1(n))
# define POW42(n) (POW40(n)*POW2(n))
# define POW43(n) (POW40(n)*POW3(n))
# define POW44(n) (POW40(n)*POW4(n))
# define POW45(n) (POW40(n)*POW5(n))
# define POW46(n) (POW40(n)*POW6(n))
# define POW47(n) (POW40(n)*POW7(n))
# define POW48(n) (POW40(n)*POW8(n))
# define POW49(n) (POW48(n)*POW1(n))
# define POW50(n) (POW48(n)*POW2(n))
# define POW51(n) (POW48(n)*POW3(n))
# define POW52(n) (POW48(n)*POW4(n))
# define POW53(n) (POW48(n)*POW5(n))
# define POW54(n) (POW48(n)*POW6(n))
# define POW55(n) (POW48(n)*POW7(n))
# define POW56(n) (POW48(n)*POW8(n))
# define POW57(n) (POW56(n)*POW1(n))
# define POW58(n) (POW56(n)*POW2(n))
# define POW59(n) (POW56(n)*POW3(n))
# define POW60(n) (POW56(n)*POW4(n))
# define POW61(n) (POW56(n)*POW5(n))
# define POW62(n) (POW56(n)*POW6(n))
# define POW63(n) (POW56(n)*POW7(n))

# define PCAT(a, ...) a ## __VA_ARGS__
# define CAT(a, ...) EXP(PCAT(a, __VA_ARGS__))
# define EXP(...) EXP1(EXP1(EXP1(EXP1(__VA_ARGS__))))
# define EXP1(...) EXP2(EXP2(EXP2(EXP2(__VA_ARGS__))))
# define EXP2(...) EXP3(EXP3(EXP3(EXP3(__VA_ARGS__))))
# define EXP3(...) __VA_ARGS__

# define PARAM_SEEK_63(...) N1(__VA_ARGS__)
# define N1(_1, _2, _3, _4, _5, _6, _7, _8, ...) N2(__VA_ARGS__)
# define N2(_9, _10, _11, _12, _13, _14, _15, _16, ...) N3(__VA_ARGS__)
# define N3(_17, _18, _19, _20, _21, _22, _23, _24, ...) N4(__VA_ARGS__)
# define N4(_25, _26, _27, _28, _29, _30, _31, _32, ...) N5(__VA_ARGS__)
# define N5(_33, _34, _35, _36, _37, _38, _39, _40, ...) N6(__VA_ARGS__)
# define N6(_41, _42, _43, _44, _45, _46, _47, _48, ...) N7(__VA_ARGS__)
# define N7(_49, _50, _51, _52, _53, _54, _55, _56, ...) N8(__VA_ARGS__)
# define N8(_57, _58, _59, _60, _61, _62, _63, NUM, ...) NUM

# define REV_SEQ_63() R1()
# define R1() 63, 62, 61, 60, 59, 58, 57, R2()
# define R2() 56, 55, 54, 53, 52, 51, 50, 49, R3()
# define R3() 48, 47, 46, 45, 44, 43, 42, 41, R4()
# define R4() 40, 39, 38, 37, 36, 35, 34, 33, R5()
# define R5() 32, 31, 30, 29, 28, 27, 26, 25, R6()
# define R6() 24, 23, 22, 21, 20, 19, 18, 17, R7()
# define R7() 16, 15, 14, 13, 12, 11, 10, 9, R8()
# define R8() 8, 7, 6, 5, 4, 3, 2, 1, 0

# define ARG_N(...) EXP(PARAM_SEEK_63(__VA_ARGS__, REV_SEQ_63()))
# define VMAC(f, ...) EXP(CAT(f, ARG_N(__VA_ARGS__)))(__VA_ARGS__)

# define MIN(...) EXP(VMAC(MIN, __VA_ARGS__))
# define MIN1(a,...) (a)
# define MIN2(a,...) (MIN1(__VA_ARGS__) < a ? MIN1(__VA_ARGS__) : a)
# define MIN3(a,...) (MIN2(__VA_ARGS__) < a ? MIN2(__VA_ARGS__) : a)
# define MIN4(a,...) (MIN3(__VA_ARGS__) < a ? MIN3(__VA_ARGS__) : a)
# define MIN5(a,...) (MIN4(__VA_ARGS__) < a ? MIN4(__VA_ARGS__) : a)
# define MIN6(a,...) (MIN5(__VA_ARGS__) < a ? MIN5(__VA_ARGS__) : a)
# define MIN7(a,...) (MIN6(__VA_ARGS__) < a ? MIN6(__VA_ARGS__) : a)
# define MIN8(a,...) (MIN7(__VA_ARGS__) < a ? MIN7(__VA_ARGS__) : a)
# define MIN9(a,...) (MIN8(__VA_ARGS__) < a ? MIN8(__VA_ARGS__) : a)
# define MIN10(a,...) (MIN9(__VA_ARGS__) < a ? MIN9(__VA_ARGS__) : a)
# define MIN11(a,...) (MIN10(__VA_ARGS__) < a ? MIN10(__VA_ARGS__) : a)
# define MIN12(a,...) (MIN11(__VA_ARGS__) < a ? MIN11(__VA_ARGS__) : a)
# define MIN13(a,...) (MIN12(__VA_ARGS__) < a ? MIN12(__VA_ARGS__) : a)
# define MIN14(a,...) (MIN13(__VA_ARGS__) < a ? MIN13(__VA_ARGS__) : a)
# define MIN15(a,...) (MIN14(__VA_ARGS__) < a ? MIN14(__VA_ARGS__) : a)
# define MIN16(a,...) (MIN15(__VA_ARGS__) < a ? MIN15(__VA_ARGS__) : a)
# define MIN17(a,...) (MIN16(__VA_ARGS__) < a ? MIN16(__VA_ARGS__) : a)
# define MIN18(a,...) (MIN17(__VA_ARGS__) < a ? MIN17(__VA_ARGS__) : a)
# define MIN19(a,...) (MIN18(__VA_ARGS__) < a ? MIN18(__VA_ARGS__) : a)
# define MIN20(a,...) (MIN19(__VA_ARGS__) < a ? MIN19(__VA_ARGS__) : a)
# define MIN21(a,...) (MIN20(__VA_ARGS__) < a ? MIN20(__VA_ARGS__) : a)
# define MIN22(a,...) (MIN21(__VA_ARGS__) < a ? MIN21(__VA_ARGS__) : a)
# define MIN23(a,...) (MIN22(__VA_ARGS__) < a ? MIN22(__VA_ARGS__) : a)
# define MIN24(a,...) (MIN23(__VA_ARGS__) < a ? MIN23(__VA_ARGS__) : a)
# define MIN25(a,...) (MIN24(__VA_ARGS__) < a ? MIN24(__VA_ARGS__) : a)
# define MIN26(a,...) (MIN25(__VA_ARGS__) < a ? MIN25(__VA_ARGS__) : a)
# define MIN27(a,...) (MIN26(__VA_ARGS__) < a ? MIN26(__VA_ARGS__) : a)
# define MIN28(a,...) (MIN27(__VA_ARGS__) < a ? MIN27(__VA_ARGS__) : a)
# define MIN29(a,...) (MIN28(__VA_ARGS__) < a ? MIN28(__VA_ARGS__) : a)
# define MIN30(a,...) (MIN29(__VA_ARGS__) < a ? MIN29(__VA_ARGS__) : a)
# define MIN31(a,...) (MIN30(__VA_ARGS__) < a ? MIN30(__VA_ARGS__) : a)
# define MIN32(a,...) (MIN31(__VA_ARGS__) < a ? MIN31(__VA_ARGS__) : a)
# define MIN33(a,...) (MIN32(__VA_ARGS__) < a ? MIN32(__VA_ARGS__) : a)
# define MIN34(a,...) (MIN33(__VA_ARGS__) < a ? MIN33(__VA_ARGS__) : a)
# define MIN35(a,...) (MIN34(__VA_ARGS__) < a ? MIN34(__VA_ARGS__) : a)
# define MIN36(a,...) (MIN35(__VA_ARGS__) < a ? MIN35(__VA_ARGS__) : a)
# define MIN37(a,...) (MIN36(__VA_ARGS__) < a ? MIN36(__VA_ARGS__) : a)
# define MIN38(a,...) (MIN37(__VA_ARGS__) < a ? MIN37(__VA_ARGS__) : a)
# define MIN39(a,...) (MIN38(__VA_ARGS__) < a ? MIN38(__VA_ARGS__) : a)
# define MIN40(a,...) (MIN39(__VA_ARGS__) < a ? MIN39(__VA_ARGS__) : a)
# define MIN41(a,...) (MIN40(__VA_ARGS__) < a ? MIN40(__VA_ARGS__) : a)
# define MIN42(a,...) (MIN41(__VA_ARGS__) < a ? MIN41(__VA_ARGS__) : a)
# define MIN43(a,...) (MIN42(__VA_ARGS__) < a ? MIN42(__VA_ARGS__) : a)
# define MIN44(a,...) (MIN43(__VA_ARGS__) < a ? MIN43(__VA_ARGS__) : a)
# define MIN45(a,...) (MIN44(__VA_ARGS__) < a ? MIN44(__VA_ARGS__) : a)
# define MIN46(a,...) (MIN45(__VA_ARGS__) < a ? MIN45(__VA_ARGS__) : a)
# define MIN47(a,...) (MIN46(__VA_ARGS__) < a ? MIN46(__VA_ARGS__) : a)
# define MIN48(a,...) (MIN47(__VA_ARGS__) < a ? MIN47(__VA_ARGS__) : a)
# define MIN49(a,...) (MIN48(__VA_ARGS__) < a ? MIN48(__VA_ARGS__) : a)
# define MIN50(a,...) (MIN49(__VA_ARGS__) < a ? MIN49(__VA_ARGS__) : a)
# define MIN51(a,...) (MIN50(__VA_ARGS__) < a ? MIN50(__VA_ARGS__) : a)
# define MIN52(a,...) (MIN51(__VA_ARGS__) < a ? MIN51(__VA_ARGS__) : a)
# define MIN53(a,...) (MIN52(__VA_ARGS__) < a ? MIN52(__VA_ARGS__) : a)
# define MIN54(a,...) (MIN53(__VA_ARGS__) < a ? MIN53(__VA_ARGS__) : a)
# define MIN55(a,...) (MIN54(__VA_ARGS__) < a ? MIN54(__VA_ARGS__) : a)
# define MIN56(a,...) (MIN55(__VA_ARGS__) < a ? MIN55(__VA_ARGS__) : a)
# define MIN57(a,...) (MIN56(__VA_ARGS__) < a ? MIN56(__VA_ARGS__) : a)
# define MIN58(a,...) (MIN57(__VA_ARGS__) < a ? MIN57(__VA_ARGS__) : a)
# define MIN59(a,...) (MIN58(__VA_ARGS__) < a ? MIN58(__VA_ARGS__) : a)
# define MIN60(a,...) (MIN59(__VA_ARGS__) < a ? MIN59(__VA_ARGS__) : a)
# define MIN61(a,...) (MIN60(__VA_ARGS__) < a ? MIN60(__VA_ARGS__) : a)
# define MIN62(a,...) (MIN61(__VA_ARGS__) < a ? MIN61(__VA_ARGS__) : a)
# define MIN63(a,...) (MIN62(__VA_ARGS__) < a ? MIN62(__VA_ARGS__) : a)

# define MAX(...) EXP(VMAC(MAX, __VA_ARGS__))
# define MAX1(a,...) (a)
# define MAX2(a,...) (MAX1(__VA_ARGS__) > a ? MAX1(__VA_ARGS__) : a)
# define MAX3(a,...) (MAX2(__VA_ARGS__) > a ? MAX2(__VA_ARGS__) : a)
# define MAX4(a,...) (MAX3(__VA_ARGS__) > a ? MAX3(__VA_ARGS__) : a)
# define MAX5(a,...) (MAX4(__VA_ARGS__) > a ? MAX4(__VA_ARGS__) : a)
# define MAX6(a,...) (MAX5(__VA_ARGS__) > a ? MAX5(__VA_ARGS__) : a)
# define MAX7(a,...) (MAX6(__VA_ARGS__) > a ? MAX6(__VA_ARGS__) : a)
# define MAX8(a,...) (MAX7(__VA_ARGS__) > a ? MAX7(__VA_ARGS__) : a)
# define MAX9(a,...) (MAX8(__VA_ARGS__) > a ? MAX8(__VA_ARGS__) : a)
# define MAX10(a,...) (MAX9(__VA_ARGS__) > a ? MAX9(__VA_ARGS__) : a)
# define MAX11(a,...) (MAX10(__VA_ARGS__) > a ? MAX10(__VA_ARGS__) : a)
# define MAX12(a,...) (MAX11(__VA_ARGS__) > a ? MAX11(__VA_ARGS__) : a)
# define MAX13(a,...) (MAX12(__VA_ARGS__) > a ? MAX12(__VA_ARGS__) : a)
# define MAX14(a,...) (MAX13(__VA_ARGS__) > a ? MAX13(__VA_ARGS__) : a)
# define MAX15(a,...) (MAX14(__VA_ARGS__) > a ? MAX14(__VA_ARGS__) : a)
# define MAX16(a,...) (MAX15(__VA_ARGS__) > a ? MAX15(__VA_ARGS__) : a)
# define MAX17(a,...) (MAX16(__VA_ARGS__) > a ? MAX16(__VA_ARGS__) : a)
# define MAX18(a,...) (MAX17(__VA_ARGS__) > a ? MAX17(__VA_ARGS__) : a)
# define MAX19(a,...) (MAX18(__VA_ARGS__) > a ? MAX18(__VA_ARGS__) : a)
# define MAX20(a,...) (MAX19(__VA_ARGS__) > a ? MAX19(__VA_ARGS__) : a)
# define MAX21(a,...) (MAX20(__VA_ARGS__) > a ? MAX20(__VA_ARGS__) : a)
# define MAX22(a,...) (MAX21(__VA_ARGS__) > a ? MAX21(__VA_ARGS__) : a)
# define MAX23(a,...) (MAX22(__VA_ARGS__) > a ? MAX22(__VA_ARGS__) : a)
# define MAX24(a,...) (MAX23(__VA_ARGS__) > a ? MAX23(__VA_ARGS__) : a)
# define MAX25(a,...) (MAX24(__VA_ARGS__) > a ? MAX24(__VA_ARGS__) : a)
# define MAX26(a,...) (MAX25(__VA_ARGS__) > a ? MAX25(__VA_ARGS__) : a)
# define MAX27(a,...) (MAX26(__VA_ARGS__) > a ? MAX26(__VA_ARGS__) : a)
# define MAX28(a,...) (MAX27(__VA_ARGS__) > a ? MAX27(__VA_ARGS__) : a)
# define MAX29(a,...) (MAX28(__VA_ARGS__) > a ? MAX28(__VA_ARGS__) : a)
# define MAX30(a,...) (MAX29(__VA_ARGS__) > a ? MAX29(__VA_ARGS__) : a)
# define MAX31(a,...) (MAX30(__VA_ARGS__) > a ? MAX30(__VA_ARGS__) : a)
# define MAX32(a,...) (MAX31(__VA_ARGS__) > a ? MAX31(__VA_ARGS__) : a)
# define MAX33(a,...) (MAX32(__VA_ARGS__) > a ? MAX32(__VA_ARGS__) : a)
# define MAX34(a,...) (MAX33(__VA_ARGS__) > a ? MAX33(__VA_ARGS__) : a)
# define MAX35(a,...) (MAX34(__VA_ARGS__) > a ? MAX34(__VA_ARGS__) : a)
# define MAX36(a,...) (MAX35(__VA_ARGS__) > a ? MAX35(__VA_ARGS__) : a)
# define MAX37(a,...) (MAX36(__VA_ARGS__) > a ? MAX36(__VA_ARGS__) : a)
# define MAX38(a,...) (MAX37(__VA_ARGS__) > a ? MAX37(__VA_ARGS__) : a)
# define MAX39(a,...) (MAX38(__VA_ARGS__) > a ? MAX38(__VA_ARGS__) : a)
# define MAX40(a,...) (MAX39(__VA_ARGS__) > a ? MAX39(__VA_ARGS__) : a)
# define MAX41(a,...) (MAX40(__VA_ARGS__) > a ? MAX40(__VA_ARGS__) : a)
# define MAX42(a,...) (MAX41(__VA_ARGS__) > a ? MAX41(__VA_ARGS__) : a)
# define MAX43(a,...) (MAX42(__VA_ARGS__) > a ? MAX42(__VA_ARGS__) : a)
# define MAX44(a,...) (MAX43(__VA_ARGS__) > a ? MAX43(__VA_ARGS__) : a)
# define MAX45(a,...) (MAX44(__VA_ARGS__) > a ? MAX44(__VA_ARGS__) : a)
# define MAX46(a,...) (MAX45(__VA_ARGS__) > a ? MAX45(__VA_ARGS__) : a)
# define MAX47(a,...) (MAX46(__VA_ARGS__) > a ? MAX46(__VA_ARGS__) : a)
# define MAX48(a,...) (MAX47(__VA_ARGS__) > a ? MAX47(__VA_ARGS__) : a)
# define MAX49(a,...) (MAX48(__VA_ARGS__) > a ? MAX48(__VA_ARGS__) : a)
# define MAX50(a,...) (MAX49(__VA_ARGS__) > a ? MAX49(__VA_ARGS__) : a)
# define MAX51(a,...) (MAX50(__VA_ARGS__) > a ? MAX50(__VA_ARGS__) : a)
# define MAX52(a,...) (MAX51(__VA_ARGS__) > a ? MAX51(__VA_ARGS__) : a)
# define MAX53(a,...) (MAX52(__VA_ARGS__) > a ? MAX52(__VA_ARGS__) : a)
# define MAX54(a,...) (MAX53(__VA_ARGS__) > a ? MAX53(__VA_ARGS__) : a)
# define MAX55(a,...) (MAX54(__VA_ARGS__) > a ? MAX54(__VA_ARGS__) : a)
# define MAX56(a,...) (MAX55(__VA_ARGS__) > a ? MAX55(__VA_ARGS__) : a)
# define MAX57(a,...) (MAX56(__VA_ARGS__) > a ? MAX56(__VA_ARGS__) : a)
# define MAX58(a,...) (MAX57(__VA_ARGS__) > a ? MAX57(__VA_ARGS__) : a)
# define MAX59(a,...) (MAX58(__VA_ARGS__) > a ? MAX58(__VA_ARGS__) : a)
# define MAX60(a,...) (MAX59(__VA_ARGS__) > a ? MAX59(__VA_ARGS__) : a)
# define MAX61(a,...) (MAX60(__VA_ARGS__) > a ? MAX60(__VA_ARGS__) : a)
# define MAX62(a,...) (MAX61(__VA_ARGS__) > a ? MAX61(__VA_ARGS__) : a)
# define MAX63(a,...) (MAX62(__VA_ARGS__) > a ? MAX62(__VA_ARGS__) : a)

# define INFIX_OP(op, ...) EXP(VMAC(INFIX, op, __VA_ARGS__))
# define INFIX1(op,a,...) DUMMY
# define INFIX2(op,a,...) a
# define INFIX3(op,a,...) a op INFIX2(op, __VA_ARGS__)
# define INFIX4(op,a,...) a op INFIX3(op, __VA_ARGS__)
# define INFIX5(op,a,...) a op INFIX4(op, __VA_ARGS__)
# define INFIX6(op,a,...) a op INFIX5(op, __VA_ARGS__)
# define INFIX7(op,a,...) a op INFIX6(op, __VA_ARGS__)
# define INFIX8(op,a,...) a op INFIX7(op, __VA_ARGS__)
# define INFIX9(op,a,...) a op INFIX8(op, __VA_ARGS__)
# define INFIX10(op,a,...) a op INFIX9(op, __VA_ARGS__)
# define INFIX11(op,a,...) a op INFIX10(op, __VA_ARGS__)
# define INFIX12(op,a,...) a op INFIX11(op, __VA_ARGS__)
# define INFIX13(op,a,...) a op INFIX12(op, __VA_ARGS__)
# define INFIX14(op,a,...) a op INFIX13(op, __VA_ARGS__)
# define INFIX15(op,a,...) a op INFIX14(op, __VA_ARGS__)
# define INFIX16(op,a,...) a op INFIX15(op, __VA_ARGS__)
# define INFIX17(op,a,...) a op INFIX16(op, __VA_ARGS__)
# define INFIX18(op,a,...) a op INFIX17(op, __VA_ARGS__)
# define INFIX19(op,a,...) a op INFIX18(op, __VA_ARGS__)
# define INFIX20(op,a,...) a op INFIX19(op, __VA_ARGS__)
# define INFIX21(op,a,...) a op INFIX20(op, __VA_ARGS__)
# define INFIX22(op,a,...) a op INFIX21(op, __VA_ARGS__)
# define INFIX23(op,a,...) a op INFIX22(op, __VA_ARGS__)
# define INFIX24(op,a,...) a op INFIX23(op, __VA_ARGS__)
# define INFIX25(op,a,...) a op INFIX24(op, __VA_ARGS__)
# define INFIX26(op,a,...) a op INFIX25(op, __VA_ARGS__)
# define INFIX27(op,a,...) a op INFIX26(op, __VA_ARGS__)
# define INFIX28(op,a,...) a op INFIX27(op, __VA_ARGS__)
# define INFIX29(op,a,...) a op INFIX28(op, __VA_ARGS__)
# define INFIX30(op,a,...) a op INFIX29(op, __VA_ARGS__)
# define INFIX31(op,a,...) a op INFIX30(op, __VA_ARGS__)
# define INFIX32(op,a,...) a op INFIX31(op, __VA_ARGS__)
# define INFIX33(op,a,...) a op INFIX32(op, __VA_ARGS__)
# define INFIX34(op,a,...) a op INFIX33(op, __VA_ARGS__)
# define INFIX35(op,a,...) a op INFIX34(op, __VA_ARGS__)
# define INFIX36(op,a,...) a op INFIX35(op, __VA_ARGS__)
# define INFIX37(op,a,...) a op INFIX36(op, __VA_ARGS__)
# define INFIX38(op,a,...) a op INFIX37(op, __VA_ARGS__)
# define INFIX39(op,a,...) a op INFIX38(op, __VA_ARGS__)
# define INFIX40(op,a,...) a op INFIX39(op, __VA_ARGS__)
# define INFIX41(op,a,...) a op INFIX40(op, __VA_ARGS__)
# define INFIX42(op,a,...) a op INFIX41(op, __VA_ARGS__)
# define INFIX43(op,a,...) a op INFIX42(op, __VA_ARGS__)
# define INFIX44(op,a,...) a op INFIX43(op, __VA_ARGS__)
# define INFIX45(op,a,...) a op INFIX44(op, __VA_ARGS__)
# define INFIX46(op,a,...) a op INFIX45(op, __VA_ARGS__)
# define INFIX47(op,a,...) a op INFIX46(op, __VA_ARGS__)
# define INFIX48(op,a,...) a op INFIX47(op, __VA_ARGS__)
# define INFIX49(op,a,...) a op INFIX48(op, __VA_ARGS__)
# define INFIX50(op,a,...) a op INFIX49(op, __VA_ARGS__)
# define INFIX51(op,a,...) a op INFIX50(op, __VA_ARGS__)
# define INFIX52(op,a,...) a op INFIX51(op, __VA_ARGS__)
# define INFIX53(op,a,...) a op INFIX52(op, __VA_ARGS__)
# define INFIX54(op,a,...) a op INFIX53(op, __VA_ARGS__)
# define INFIX55(op,a,...) a op INFIX54(op, __VA_ARGS__)
# define INFIX56(op,a,...) a op INFIX55(op, __VA_ARGS__)
# define INFIX57(op,a,...) a op INFIX56(op, __VA_ARGS__)
# define INFIX58(op,a,...) a op INFIX57(op, __VA_ARGS__)
# define INFIX59(op,a,...) a op INFIX58(op, __VA_ARGS__)
# define INFIX60(op,a,...) a op INFIX59(op, __VA_ARGS__)
# define INFIX61(op,a,...) a op INFIX60(op, __VA_ARGS__)
# define INFIX62(op,a,...) a op INFIX61(op, __VA_ARGS__)
# define INFIX63(op,a,...) a op INFIX62(op, __VA_ARGS__)

# define APPLY(f, ...) EXP(VMAC(APPLY, f, __VA_ARGS__))
# define APPLY1(f,a) DUMMY
# define APPLY2(f,a,...) f(a)
# define APPLY3(f,a,...) f(a), APPLY2(f, __VA_ARGS__)
# define APPLY4(f,a,...) f(a), APPLY3(f, __VA_ARGS__)
# define APPLY5(f,a,...) f(a), APPLY4(f, __VA_ARGS__)
# define APPLY6(f,a,...) f(a), APPLY5(f, __VA_ARGS__)
# define APPLY7(f,a,...) f(a), APPLY6(f, __VA_ARGS__)
# define APPLY8(f,a,...) f(a), APPLY7(f, __VA_ARGS__)
# define APPLY9(f,a,...) f(a), APPLY8(f, __VA_ARGS__)
# define APPLY10(f,a,...) f(a), APPLY9(f, __VA_ARGS__)
# define APPLY11(f,a,...) f(a), APPLY10(f, __VA_ARGS__)
# define APPLY12(f,a,...) f(a), APPLY11(f, __VA_ARGS__)
# define APPLY13(f,a,...) f(a), APPLY12(f, __VA_ARGS__)
# define APPLY14(f,a,...) f(a), APPLY13(f, __VA_ARGS__)
# define APPLY15(f,a,...) f(a), APPLY14(f, __VA_ARGS__)
# define APPLY16(f,a,...) f(a), APPLY15(f, __VA_ARGS__)
# define APPLY17(f,a,...) f(a), APPLY16(f, __VA_ARGS__)
# define APPLY18(f,a,...) f(a), APPLY17(f, __VA_ARGS__)
# define APPLY19(f,a,...) f(a), APPLY18(f, __VA_ARGS__)
# define APPLY20(f,a,...) f(a), APPLY19(f, __VA_ARGS__)
# define APPLY21(f,a,...) f(a), APPLY20(f, __VA_ARGS__)
# define APPLY22(f,a,...) f(a), APPLY21(f, __VA_ARGS__)
# define APPLY23(f,a,...) f(a), APPLY22(f, __VA_ARGS__)
# define APPLY24(f,a,...) f(a), APPLY23(f, __VA_ARGS__)
# define APPLY25(f,a,...) f(a), APPLY24(f, __VA_ARGS__)
# define APPLY26(f,a,...) f(a), APPLY25(f, __VA_ARGS__)
# define APPLY27(f,a,...) f(a), APPLY26(f, __VA_ARGS__)
# define APPLY28(f,a,...) f(a), APPLY27(f, __VA_ARGS__)
# define APPLY29(f,a,...) f(a), APPLY28(f, __VA_ARGS__)
# define APPLY30(f,a,...) f(a), APPLY29(f, __VA_ARGS__)
# define APPLY31(f,a,...) f(a), APPLY30(f, __VA_ARGS__)
# define APPLY32(f,a,...) f(a), APPLY31(f, __VA_ARGS__)
# define APPLY33(f,a,...) f(a), APPLY32(f, __VA_ARGS__)
# define APPLY34(f,a,...) f(a), APPLY33(f, __VA_ARGS__)
# define APPLY35(f,a,...) f(a), APPLY34(f, __VA_ARGS__)
# define APPLY36(f,a,...) f(a), APPLY35(f, __VA_ARGS__)
# define APPLY37(f,a,...) f(a), APPLY36(f, __VA_ARGS__)
# define APPLY38(f,a,...) f(a), APPLY37(f, __VA_ARGS__)
# define APPLY39(f,a,...) f(a), APPLY38(f, __VA_ARGS__)
# define APPLY40(f,a,...) f(a), APPLY39(f, __VA_ARGS__)
# define APPLY41(f,a,...) f(a), APPLY40(f, __VA_ARGS__)
# define APPLY42(f,a,...) f(a), APPLY41(f, __VA_ARGS__)
# define APPLY43(f,a,...) f(a), APPLY42(f, __VA_ARGS__)
# define APPLY44(f,a,...) f(a), APPLY43(f, __VA_ARGS__)
# define APPLY45(f,a,...) f(a), APPLY44(f, __VA_ARGS__)
# define APPLY46(f,a,...) f(a), APPLY45(f, __VA_ARGS__)
# define APPLY47(f,a,...) f(a), APPLY46(f, __VA_ARGS__)
# define APPLY48(f,a,...) f(a), APPLY47(f, __VA_ARGS__)
# define APPLY49(f,a,...) f(a), APPLY48(f, __VA_ARGS__)
# define APPLY50(f,a,...) f(a), APPLY49(f, __VA_ARGS__)
# define APPLY51(f,a,...) f(a), APPLY50(f, __VA_ARGS__)
# define APPLY52(f,a,...) f(a), APPLY51(f, __VA_ARGS__)
# define APPLY53(f,a,...) f(a), APPLY52(f, __VA_ARGS__)
# define APPLY54(f,a,...) f(a), APPLY53(f, __VA_ARGS__)
# define APPLY55(f,a,...) f(a), APPLY54(f, __VA_ARGS__)
# define APPLY56(f,a,...) f(a), APPLY55(f, __VA_ARGS__)
# define APPLY57(f,a,...) f(a), APPLY56(f, __VA_ARGS__)
# define APPLY58(f,a,...) f(a), APPLY57(f, __VA_ARGS__)
# define APPLY59(f,a,...) f(a), APPLY58(f, __VA_ARGS__)
# define APPLY60(f,a,...) f(a), APPLY59(f, __VA_ARGS__)
# define APPLY61(f,a,...) f(a), APPLY60(f, __VA_ARGS__)
# define APPLY62(f,a,...) f(a), APPLY61(f, __VA_ARGS__)
# define APPLY63(f,a,...) f(a), APPLY62(f, __VA_ARGS__)

# define NOT(x) (EXP(!(x)))
# define OR(...) (EXP(INFIX_OP(||, __VA_ARGS__)))
# define AND(...) (EXP(INFIX_OP(&&, __VA_ARGS__)))
# define DO(...) EXP(INFIX_OP(;, __VA_ARGS__);)

# define ASM __asm__
# define ASMV __asm__ volatile
# define BREAK break
# define CONTINUE continue
# define GOTO(label) EXP(goto label)
# define DECL(type_, name) EXP(type_ name)
# define VAR(type_, name, value) EXP(type_ name = value)
# define TERN(cond, a, b) (EXP(cond ? a : b))
# define SWITCH(exp, ...) EXP(switch (exp) { DO(__VA_ARGS__)})
# define CASE(lit, ...) EXP(case lit : { DO(__VA_ARGS__)})
# define DEFAULT(...) EXP(default : { DO(__VA_ARGS__)})
# define IF(cond, ...) EXP(if (cond) { DO(__VA_ARGS__) })
# define ELSEIF(cond, ...) EXP(else if (cond) { DO(__VA_ARGS__) })
# define ELSE(...) EXP(else { DO(__VA_ARGS__) })
# define WHILE(cond, ...) EXP(while (cond) { DO(__VA_ARGS__) })
# define DOWHILE(cond, ...) EXP(do { DO(__VA_ARGS__) } while (cond))
# define FOR(i, c, u, ...) EXP(for (i; c; u) { DO(__VA_ARGS__) })
# define LOOP(...) EXP(for (;;) { DO(__VA_ARGS__) })

# define RET(ret) EXP(return (ret))
# define RETIF(ret, cond) EXP(if (cond) RET(ret))
# define NULLIF(cond) EXP(RETIF(NULL, cond))
# define NULLCHECK(...) EXP(RETIF(NULL, (NOT(AND(__VA_ARGS__)))))
# define RNULLCHECK(ret, ...) EXP(RETIF(ret, (NOT(AND(__VA_ARGS__)))))
# define FREE(...) EXP(APPLY(free, __VA_ARGS__))
# define CHKALLOC(...) EXP(IF(NOT(AND(__VA_ARGS__)), CHKALLOC2(__VA_ARGS__)))
# define CHKALLOC2(...) FREE(__VA_ARGS__), RET(NULL)

#endif