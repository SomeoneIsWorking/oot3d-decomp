// OoT3D decomp @ 0028c2d8  name=FUN_0028c2d8  size=536

void FUN_0028c2d8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;

  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  if (*(short *)(param_1 + 0x1c) == -1) {
    FUN_003510b0(param_1,DAT_0028c4f0);
    uVar3 = DAT_0028c4f4;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    FUN_0037322c(uVar3,param_1);
    FUN_00372f38(param_1,param_2,param_1 + 0x238,4,0);
    FUN_00350eb8(param_2,param_1 + 0x1bc);
    FUN_00350d48(param_2,param_1 + 0x1bc,param_1,DAT_0028c4f8,param_1 + 0x1dc);
    fVar4 = DAT_0028c4fc;
    *(undefined4 *)(*(int *)(param_1 + 0x1d8) + 0x38) = *(undefined4 *)(param_1 + 0x28);
    *(float *)(*(int *)(param_1 + 0x1d8) + 0x3c) = *(float *)(param_1 + 0x2c) + fVar4;
    *(undefined4 *)(*(int *)(param_1 + 0x1d8) + 0x40) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(*(int *)(param_1 + 0x1d8) + 0x44) = DAT_0028c500;
    if (*(short *)(param_1 + 0x1c) == -1) {
      fVar4 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
      fVar5 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
      iVar2 = FUN_0036aa20(*(float *)(param_1 + 0x28) + fVar5 * DAT_0028c504,
                           *(float *)(param_1 + 0x2c) + DAT_0028c508,
                           *(float *)(param_1 + 0x30) + fVar4 * DAT_0028c504,param_2 + 0x208c,
                           param_1,param_2,0xe2,(int)*(short *)(param_1 + 0x34),
                           (int)*(short *)(param_1 + 0x36),(int)*(short *)(param_1 + 0x38),0);
      if (iVar2 == 0) goto LAB_0028c4d0;
    }
  }
  else if (*(short *)(param_1 + 0x1c) == 0) {
    FUN_00372f38(param_1,param_2,param_1 + 0x23c,3,0);
    uVar3 = FUN_00353fd4(param_1,param_2,3);
    FUN_003532e8(param_1,0);
    uVar3 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar3);
    *(undefined4 *)(param_1 + 0x1a4) = uVar3;
    FUN_003510b0(param_1,DAT_0028c50c);
  }
  cVar1 = FUN_00363c10(param_2 + 0x3a58,0x73);
  *(char *)(param_1 + 0x234) = cVar1;
  if (-1 < cVar1) {
    *(undefined4 *)(param_1 + 0x22c) = DAT_0028c510;
    return;
  }
LAB_0028c4d0:
  FUN_00374428(param_1);
  return;
}
