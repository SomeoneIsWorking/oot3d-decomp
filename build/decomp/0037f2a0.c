// OoT3D decomp @ 0037f2a0  name=FUN_0037f2a0  size=672

void FUN_0037f2a0(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;

  fVar1 = DAT_0037f5c4;
  uVar3 = DAT_0037f5c0;
  if (*(int *)(param_1 + 0x640) == 0) {
    FUN_003731e0(param_1 + 0x1a4);
    *(short *)(param_1 + 0x67e) = *(short *)(param_1 + 0x67e) + *(short *)(param_1 + 0x67c);
    FUN_00375a18(param_1 + 0x67c,4000,1,0xfa,0);
    if (*(char *)(param_1 + 0xb7) == '\0') {
      fVar4 = *(float *)(param_1 + 0x54) - DAT_0037f5e0;
      *(float *)(param_1 + 0x54) = fVar4;
      FUN_0037572c(fVar4,param_1);
    }
    fVar4 = (float)FUN_0036e168(*(float *)(param_1 + 0x84) + DAT_0037f5e4,uVar3,param_1 + 0x2c);
    if ((fVar4 == fVar1) &&
       ((int)(*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x84)) < DAT_0037f5ec)) {
      local_34 = *(undefined4 *)(param_1 + 0x28);
      uStack_2c = *(undefined4 *)(param_1 + 0x30);
      local_30 = *(undefined4 *)(param_1 + 0x84);
      FUN_0037378c(DAT_0037f5f0,param_2,&local_34,1,0x96,100,1);
      FUN_0034f3a0(DAT_0037f5fc,DAT_0037f5f8,DAT_0037f5f4,param_2,param_1,&local_34,2);
    }
    if (*(float *)(param_1 + 0x6c) < fVar1) {
      *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) + DAT_0037f600;
    }
    iVar2 = *(int *)(param_1 + 0x660) + -1;
    *(int *)(param_1 + 0x660) = iVar2;
    if (iVar2 < 1) {
      if (*(char *)(param_1 + 0xb7) == '\0') {
        FUN_0036e734(param_1 + 0x1a4,2);
        *(float *)(param_1 + 0x66c) = fVar1;
        *(undefined4 *)(param_1 + 0x63c) = 1;
        uVar3 = DAT_0037f604;
        *(undefined2 *)(param_1 + 0x688) = 5;
      }
      else {
        if (*(short *)(param_1 + 0x1c) < 0) {
          FUN_0036e734(param_1 + 0x1a4,2);
                    /* WARNING: Subroutine does not return */
          FUN_003759d0();
        }
        FUN_0036e734(param_1 + 0x1a4,2);
        uVar3 = DAT_0037f638;
        *(undefined4 *)(param_1 + 0x63c) = 5;
      }
      *(undefined4 *)(param_1 + 0x644) = uVar3;
      return;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x660) + -1;
    *(int *)(param_1 + 0x660) = iVar2;
    if ((0 < iVar2) && (*(char *)(param_1 + 0xb7) != '\0')) {
      if ((*(ushort *)(DAT_0037f5d0 + param_1) & 4) == 0) {
        FUN_0036e168(fVar1,uVar3,DAT_0037f5dc,fVar1,param_1 + 0x678);
        return;
      }
      FUN_0036e168(DAT_0037f5d8,uVar3,DAT_0037f5d4,fVar1,param_1 + 0x678);
      return;
    }
    FUN_00374a58(DAT_0037f5c8,param_1 + 0x1a4,3);
    uVar3 = DAT_0037f5cc;
    *(float *)(param_1 + 0x6c) = fVar1;
    *(undefined4 *)(param_1 + 100) = uVar3;
    *(undefined2 *)(param_1 + 0x67c) = 4000;
    *(undefined4 *)(param_1 + 0x660) = 0x15;
    *(undefined4 *)(param_1 + 0x640) = 0;
    *(undefined2 *)(param_1 + 0xbc) = 0;
    *(undefined2 *)(param_1 + 0xc0) = 0;
  }
  return;
}
