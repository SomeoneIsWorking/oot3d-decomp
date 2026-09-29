// OoT3D decomp @ 0035f5e4  name=FUN_0035f5e4  size=420

undefined4 FUN_0035f5e4(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;

  uVar6 = FUN_0036ae14(param_2 + 0x1a4,*(undefined4 *)(DAT_0035f788 + 4));
  uVar4 = DAT_0035f794;
  uVar3 = DAT_0035f790;
  uVar2 = DAT_0035f78c;
  fVar10 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
  if ((*(short *)(param_2 + 0x740) != 0) &&
     (sVar1 = *(short *)(param_2 + 0x740) + -1, *(short *)(param_2 + 0x740) = sVar1, sVar1 != 0)) {
    FUN_0036e168(DAT_0035f798,uVar4,uVar3,uVar2,param_2 + 0x1e4);
    return 0;
  }
  FUN_0036e168(param_1,uVar4,uVar3,uVar2,param_2 + 0x1e4);
  if ((param_4 == 1) && (fVar10 < *(float *)(param_2 + 0x1e0) + *(float *)(param_2 + 0x1e4))) {
    return 0;
  }
  iVar7 = *(int *)(param_5 + *(short *)(DAT_0035f79c + param_5) * 4 + 0xa54);
  fVar9 = *(float *)(iVar7 + 0x8c) - *(float *)(param_2 + 0x28);
  fVar10 = *(float *)(iVar7 + 0x90) - *(float *)(param_2 + 0x2c);
  fVar8 = *(float *)(iVar7 + 0x94) - *(float *)(param_2 + 0x30);
  if ((int)SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8) < DAT_0035f7a0) {
    if ((*(short *)(param_2 + 0x7d4) != 0) &&
       (sVar1 = *(short *)(param_2 + 0x7d4) + -1, *(short *)(param_2 + 0x7d4) = sVar1, sVar1 != 0))
    goto LAB_0035f728;
    FUN_00375bcc(param_2,DAT_0035f7a4);
    uVar5 = 4;
  }
  else {
    uVar5 = 0;
  }
  *(undefined2 *)(param_2 + 0x7d4) = uVar5;
LAB_0035f728:
  FUN_00375a18(param_2 + 0xc0,(int)*(short *)(param_2 + 0x7d8),4,param_3,param_3);
  *(undefined2 *)(param_2 + 0x34) = *(undefined2 *)(param_2 + 0xbc);
  *(undefined2 *)(param_2 + 0x36) = *(undefined2 *)(param_2 + 0xbe);
  *(short *)(param_2 + 0x38) = *(short *)(param_2 + 0xc0);
  if (*(short *)(param_2 + 0xc0) != *(short *)(param_2 + 0x7d8)) {
    return 0;
  }
  return 1;
}
