// OoT3D decomp @ 002787fc  name=FUN_002787fc  size=356

void FUN_002787fc(int param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  ushort uVar3;
  float fVar4;
  float fVar5;
  undefined6 uVar6;
  undefined4 uVar7;

  uVar7 = 0;
  FUN_003510b0(param_1,DAT_00278960);
  FUN_003532e8(param_1,0);
  uVar3 = *(ushort *)(param_1 + 0x1c) & 0xff;
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) >> 8;
  FUN_00372f38(param_1,param_2,param_1 + 0x1c0,6,0,uVar7);
  uVar7 = FUN_00353fd4(param_1,param_2,3);
  uVar6 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar7);
  fVar5 = DAT_00278964;
  uVar2 = (undefined2)((uint6)uVar6 >> 0x20);
  if (uVar3 == 2) {
    uVar2 = 0xc000;
  }
  *(int *)(param_1 + 0x1a4) = (int)uVar6;
  if (uVar3 == 2) {
    *(undefined2 *)(param_1 + 0xbc) = uVar2;
  }
  else if (uVar3 == 1) {
    iVar1 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0x1c));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1bc) = DAT_0027896c;
    }
    else {
      FUN_00374428(param_1);
    }
    goto LAB_00278948;
  }
  iVar1 = FUN_0036cf6c(param_2,(int)*(char *)(param_1 + 3));
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_00278968;
  }
  else {
    FUN_00374428(param_1);
  }
  if (uVar3 == 2) {
    fVar4 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbc));
    fVar4 = fVar4 * fVar5;
    fVar5 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 8) + fVar4 * fVar5;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0xc);
    fVar5 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x10) + fVar4 * fVar5;
    return;
  }
LAB_00278948:
  FUN_0037322c(fVar5,param_1);
  return;
}
