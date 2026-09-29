// OoT3D decomp @ 001d4114  name=FUN_001d4114  size=912

void FUN_001d4114(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  undefined4 uVar6;
  int unaff_r8;
  uint in_fpscr;

  FUN_0037632c(param_1,param_1 + 0x1a4);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
  FUN_00376864(param_1);
  uVar2 = DAT_001d44b8;
  FUN_00376340(DAT_001d44b8,DAT_001d44b8,DAT_001d44b8,param_2,param_1,4);
  iVar4 = FUN_0037571c(param_2);
  uVar6 = DAT_001d44c0;
  uVar3 = DAT_001d44bc;
  psVar5 = (short *)0x0;
  if (iVar4 != 0) {
    unaff_r8 = param_2 + 0x2000;
    psVar5 = *(short **)(&DAT_000022dc + param_2);
  }
  if (iVar4 == 0 || psVar5 == (short *)0x0) {
    iVar4 = FUN_00370734(param_1 + 0x1fc);
    if (iVar4 != 0) {
      FUN_003428d0(uVar2,param_1 + 0x1fc);
    }
    (**(code **)(param_1 + 0x8ac))(param_1,param_2);
    goto LAB_001d43a4;
  }
  switch(*(undefined2 *)(param_1 + 0x8a6)) {
  case 0:
    iVar4 = FUN_00370734(param_1 + 0x1fc);
    if (iVar4 != 0) {
      FUN_003428d0(uVar2,param_1 + 0x1fc);
    }
    if (**(short **)(unaff_r8 + 0x2dc) == 2) {
      uVar6 = FUN_0036ae14(param_1 + 0x1fc,0);
      uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar3,uVar2,uVar6,uVar2,param_1 + 0x1fc,0,2);
      *(undefined2 *)(param_1 + 0x8b0) = 6;
      *(short *)(param_1 + 0x8a6) = *(short *)(param_1 + 0x8a6) + 1;
      *(undefined4 *)(param_1 + 200) = 0;
    }
    break;
  case 1:
    iVar4 = FUN_00370734(param_1 + 0x1fc);
    if (iVar4 != 0) {
      *(short *)(param_1 + 0x8a6) = *(short *)(param_1 + 0x8a6) + 1;
    }
    if (*(short *)(param_1 + 0x8b0) != 0) {
      sVar1 = *(short *)(param_1 + 0x8b0) + -1;
      *(short *)(param_1 + 0x8b0) = sVar1;
joined_r0x001d4314:
      if (sVar1 == 0) {
        FUN_0037547c(uVar6,0,4,DAT_001d44d0,DAT_001d44d0,DAT_001d44cc);
      }
    }
    break;
  case 2:
    if (*psVar5 == 4) {
      uVar6 = FUN_0036ae14(param_1 + 0x1fc,1);
      uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar3,uVar2,uVar6,DAT_001d44c4,param_1 + 0x1fc,1,2);
      *(undefined2 *)(param_1 + 0x8b0) = 0;
      uVar2 = DAT_001d44c8;
      *(short *)(param_1 + 0x8a6) = *(short *)(param_1 + 0x8a6) + 1;
      *(undefined4 *)(param_1 + 200) = uVar2;
    }
    break;
  case 3:
    iVar4 = FUN_00370734(param_1 + 0x1fc);
    if (iVar4 != 0) {
      *(short *)(param_1 + 0x8a6) = *(short *)(param_1 + 0x8a6) + 1;
    }
    if (*(short *)(param_1 + 0x8b0) != 0) {
      sVar1 = *(short *)(param_1 + 0x8b0) + -1;
      *(short *)(param_1 + 0x8b0) = sVar1;
      goto joined_r0x001d4314;
    }
  }
  if (*(short *)(DAT_001d44d4 + param_2) == 0x96) {
    FUN_0037547c(DAT_001d44d8,0,4,DAT_001d44d0,DAT_001d44d0,DAT_001d44cc);
  }
LAB_001d43a4:
  uVar2 = DAT_001d44dc;
  if ((*(ushort *)(param_1 + 0x8a4) & 1) == 0) {
    FUN_00375a18(param_1 + 0x898,0,6,DAT_001d44dc,100);
    FUN_00375a18(param_1 + 0x89a,0,6,uVar2,100);
    FUN_00375a18(param_1 + 0x89e,0,6,uVar2,100);
    FUN_00375a18(param_1 + 0x8a0,0,6,uVar2,100);
  }
  else {
    FUN_0036bcc8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                 *(undefined4 *)(param_1 + 0x44),param_2,param_1,param_1 + 0x898,param_1 + 0x89e,
                 0x4300);
    *(undefined2 *)(param_1 + 0x8a2) = 0;
    *(undefined2 *)(param_1 + 0x8a0) = 0;
    *(undefined2 *)(param_1 + 0x89e) = 0;
  }
  if ((*(short *)(param_1 + 0x8aa) != 0) &&
     (sVar1 = *(short *)(param_1 + 0x8aa) + -1, *(short *)(param_1 + 0x8aa) = sVar1, sVar1 != 0)) {
    *(short *)(param_1 + 0x8a8) = *(short *)(param_1 + 0x8aa);
    if (2 < *(short *)(param_1 + 0x8aa)) {
      *(undefined2 *)(param_1 + 0x8a8) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(0x3c);
}
