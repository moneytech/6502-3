#include <stdlib.h>
#include <opcodes.h>
#include <addressing_modes.h>
#include <instructions.h>

void* opcodes[] = {

	// 00
	OP(brk, imm8),
	OP(ora, indx_deref),
	ILLEGAL,
	ILLEGAL,
	// 04
	ILLEGAL,
	OP(ora, zp_deref),
	OP(asl, zp),
	ILLEGAL,
	// 08
	OP(php, implied),
	OP(ora, imm8),
	OP(asl_a, implied),
	ILLEGAL,
	// 0C
	ILLEGAL,
	OP(ora, abs_deref),
	OP(asl, abs),
	ILLEGAL,
	// 10
	OP(bpl, relative),
	OP(ora, indy_deref),
	ILLEGAL,
	ILLEGAL,
	// 14
	ILLEGAL,
	OP(ora, zpx_deref),
	OP(asl, zpx),
	ILLEGAL,
	// 18
	OP(clc, implied),
	OP(ora, absy_deref),
	ILLEGAL,
	ILLEGAL,
	// 1C
	ILLEGAL,
	OP(ora, abs_deref),
	OP(asl, absx),
	ILLEGAL,
	// 20
	OP(jsr, abs),
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	// 24
	OP(bit, zp_deref),
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	// 28
	OP(plp, implied),
	OP(and, imm8),
	ILLEGAL,
	ILLEGAL,
	// 2C
	OP(bit, abs_deref),
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	// 30
	OP(bmi, relative),
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	// 34
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	// 38
	OP(sec, implied),
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	// 3C
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	// 40
	OP(rti, implied),
	OP(eor, indx_deref),
	ILLEGAL,
	ILLEGAL,
	// 44
	ILLEGAL,
	OP(eor, zp_deref),
	OP(lsr, zp),
	ILLEGAL,
	// 48
	OP(pha, implied),
	OP(eor, imm8),
	OP(lsr_a, implied),
	ILLEGAL,
	// 4C
	OP(jmp, imm16),
	OP(eor, abs_deref),
	ILLEGAL,
	ILLEGAL,
	// 50
	ILLEGAL,
	OP(eor, indy_deref),
	ILLEGAL,
	ILLEGAL,
	// 54
	ILLEGAL,
	OP(eor, zpx_deref),
	ILLEGAL,
	ILLEGAL,
	// 58
	ILLEGAL,
	OP(eor, absy_deref),
	ILLEGAL,
	ILLEGAL,
	// 5C
	ILLEGAL,
	OP(eor, absx_deref),
	ILLEGAL,
	ILLEGAL,
	// 60
	OP(rts, implied),
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	// 64
	ILLEGAL,
	OP(adc, zp_deref),
	ILLEGAL,
	ILLEGAL,
	// 68
	OP(pla, implied),
	OP(adc, imm8),
	ILLEGAL,
	ILLEGAL,
	// 6C
	OP(jmp, indirect),
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	// 70
	OP(bvs, relative),
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	// 74
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	// 78
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	// 7C
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	// 80
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	// 84
	OP(sty, zp),
	OP(sta, zp),
	OP(stx, zp),
	ILLEGAL,
	// 88
	OP(dey, implied),
	ILLEGAL,
	OP(txa, implied),
	ILLEGAL,
	// 8C
	ILLEGAL,
	OP(sta, abs),
	OP(stx, abs),
	ILLEGAL,
	// 90
	OP(bcc, relative),
	OP(sta, indy),
	ILLEGAL,
	ILLEGAL,
	// 94
	OP(sty, zpx),
	OP(sta, zpx),
	ILLEGAL,
	ILLEGAL,
	// 98
	OP(tya, implied),
	OP(sta, absy),
	OP(txs, implied),
	ILLEGAL,
	// 9C
	ILLEGAL,
	OP(sta, absx),
	ILLEGAL,
	ILLEGAL,
	// A0
	OP(ldy, imm8),
	ILLEGAL,
	OP(ldx, imm8),
	ILLEGAL,
	// A4
	OP(ldy, zp_deref),
	OP(lda, zp_deref),
	OP(ldx, zp_deref),
	ILLEGAL,
	// A8
	OP(tay, implied),
	OP(lda, imm8),
	OP(tax, implied),
	ILLEGAL,
	// AC
	OP(ldy, abs_deref),
	OP(lda, abs_deref),
	ILLEGAL,
	ILLEGAL,
	// B0
	OP(bcs, relative),
	OP(lda, indy_deref),
	ILLEGAL,
	ILLEGAL,
	// B4
	OP(ldy, zpx_deref),
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	// B8
	ILLEGAL,
	OP(lda, absy_deref),
	OP(tsx, implied),
	ILLEGAL,
	// BC
	OP(ldy, absx_deref),
	OP(lda, absx_deref),
	ILLEGAL,
	ILLEGAL,
	// C0
	OP(cpy, imm8),
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	// C4
	OP(cpy, zp_deref),
	OP(cmp, zp_deref),
	OP(dec, zp),
	ILLEGAL,
	// C8
	OP(iny, implied),
	OP(cmp, imm8),
	OP(dex, implied),
	ILLEGAL,
	// CC
	ILLEGAL,
	ILLEGAL,
	OP(dec, abs),
	ILLEGAL,
	// D0
	OP(bne, relative),
	OP(cmp, indy),
	ILLEGAL,
	ILLEGAL,
	// D4
	ILLEGAL,
	ILLEGAL,
	OP(dec, zpx),
	ILLEGAL,
	// D8
	OP(cld, implied),
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	// DC
	ILLEGAL,
	ILLEGAL,
	OP(dec, absx),
	ILLEGAL,
	// E0
	OP(cpx, imm8),
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	// E4
	OP(cpx, zp_deref),
	OP(sbc, zp_deref),
	OP(inc, zp),
	ILLEGAL,
	// E8
	OP(inx, implied),
	OP(sbc, imm8),
	OP(nop, implied),
	ILLEGAL,
	// EC
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	// F0
	OP(beq, relative),
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	// F4
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	// F8
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	// FC
	ILLEGAL,
	ILLEGAL,
	ILLEGAL,
	ILLEGAL
};
