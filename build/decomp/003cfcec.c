// OoT3D decomp @ 003cfcec  name=FUN_003cfcec  size=28

/* WARNING: Removing unreachable block (ram,0x003729d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003cfcec(float param_1,undefined4 param_2,float param_3,undefined4 param_4,int param_5,
                 uint param_6,undefined4 param_7,uint param_8)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 unaff_lr;
  int unaff_pc;
  uint in_fpscr;
  undefined4 in_cr0;
  undefined4 in_cr1;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s16;

  if (*(short *)(param_5 + 0x1c) == 0) {
    uVar3 = param_8 >> 0xb;
    *(float *)(uVar3 + 0x368) = param_3;
    *(undefined4 *)(uVar3 + 0x10) = param_4;
    uVar1 = DAT_003cf500;
    coprocessor_loadlong(0,in_cr0,param_6 + 0x1e0);
    coprocessor_load(0,in_cr1,unaff_pc + 0xd0);
    fVar5 = (float)VectorSignedToFloat(_DAT_00000021,(byte)(in_fpscr >> 0x15) & 3);
    param_3 = *(float *)(uVar3 + 0x28) - param_3;
    fVar4 = *(float *)(uVar3 + 0x2c) - param_1;
    fVar6 = *(float *)(uVar3 + 0x30) - fVar5;
    if ((int)SQRT(param_3 * param_3 + fVar4 * fVar4 + fVar6 * fVar6) < 0x41000001) {
      *(undefined4 *)(uVar3 + 0x28) = unaff_lr;
      *(float *)(uVar3 + 0x2c) = param_1;
      *(float *)(uVar3 + 0x30) = fVar5;
      *(undefined4 *)(uVar3 + 0x6c) = uVar1;
    }
    else {
      FUN_003326f0(uVar3,&stack0xffffffe4,DAT_003cf4f4,param_8,param_6 & 1);
      *(undefined4 *)(uVar3 + 0x6c) = DAT_003cf4f8;
      FUN_003731e8(DAT_003cf4fc,uVar3 + 0x1c4);
    }
    iVar2 = FUN_003731e0(uVar3 + 0x1c4);
    if (iVar2 != 0) {
      if (*(char *)(DAT_003cf504 + uVar3) == '\0') {
        FUN_0037547c(DAT_003cf510,uVar3 + 0x28,4,DAT_003cf50c,DAT_003cf50c,DAT_003cf508);
      }
      FUN_0037422c(*(float *)(uVar3 + 0x6c) * unaff_s16,uVar3 + 0x1c4,
                   *(undefined4 *)
                    (*(int *)(DAT_003cf514 + (uint)*(byte *)(uVar3 + 0x1b0) * 4) +
                    (uint)*(byte *)(uVar3 + 0xe74) * 4));
    }
    return;
  }
  if ((*(float *)(param_5 + 0xa30) <= *(float *)(param_5 + 0x98)) ||
     (iVar2 = FUN_0036cd8c(), iVar2 == 0)) {
    iVar2 = (int)(short)(*(short *)(param_5 + 0x92) - *(short *)(param_5 + 0x36));
    if ((*(short *)(param_5 + 0xa0c) <= iVar2) || (iVar2 <= -(int)*(short *)(param_5 + 0xa0c))) {
      return;
    }
  }
  *(undefined4 *)(param_5 + 0xa30) = uRam003cfea8;
  *(undefined2 *)(param_5 + 0xa0c) = 0x2000;
  *(undefined2 *)(param_5 + 0xa0e) = 600;
  FUN_003686a8(param_5,6);
  iVar2 = DAT_00372a5c;
  *(undefined1 *)(param_5 + 0xa15) = 6;
  *(undefined4 *)(param_5 + 0x9ac) = *(undefined4 *)(iVar2 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x003729cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_caseD_1_003729ec)();
  return;
}
