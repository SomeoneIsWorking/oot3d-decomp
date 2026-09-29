// OoT3D decomp @ 0019f174  name=FUN_0019f174  size=380

void FUN_0019f174(int param_1,int param_2)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  undefined8 uVar5;

  FUN_003731e0(param_1 + 0x5b0);
  fVar1 = DAT_0019f2f4;
  uVar4 = DAT_0019f2f0;
  if (*(short *)(param_1 + 0x1a8) != 0) {
    *(short *)(param_1 + 0x1a8) = *(short *)(param_1 + 0x1a8) + -1;
  }
  iVar3 = FUN_003736fc(fVar1,uVar4,param_1 + 0x5b0);
  if ((iVar3 != 0) ||
     (uVar5 = FUN_003736fc(DAT_0019f2f8,uVar4,param_1 + 0x5b0),
     uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20), (int)uVar5 != 0)) {
    FUN_00375bcc(param_1,DAT_0019f2fc);
    uVar4 = extraout_r1;
  }
  if ((*(ushort *)(param_1 + 0x90) & 8) == 0) {
    sVar2 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54),uVar4);
    iVar3 = (int)(short)((*(short *)(param_1 + 0x92) - sVar2) + -0x8000);
    uVar4 = *(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54);
    if (iVar3 + 0x4000U < 0x8001) {
      sVar2 = FUN_0036e70c(uVar4);
      iVar3 = (int)(short)((sVar2 - (short)(iVar3 >> 1)) + -0x8000);
    }
    else {
      sVar2 = FUN_0036e70c(uVar4);
      iVar3 = (int)(short)(sVar2 + -0x8000);
    }
  }
  else {
    iVar3 = (int)*(short *)(param_1 + 0x82);
  }
  FUN_00370378(param_1 + 0xbe,iVar3,0x800);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  if ((*(short *)(param_1 + 0x1a8) != 0) && (fVar1 <= *(float *)(param_1 + 0xf4))) {
    return;
  }
  FUN_003725e0(param_2);
  if (*(short *)(param_1 + 0x1c) == 3) {
    FUN_0036ec14(param_2,(int)*(char *)(param_1 + 3));
    *DAT_0019f300 = 3;
  }
  if (*(int *)(param_1 + 0x128) != 0) {
    FUN_00375d3c(param_2,param_2 + 0x208c,*(int *)(param_1 + 0x128),6);
  }
  FUN_00374428(param_1);
  return;
}
