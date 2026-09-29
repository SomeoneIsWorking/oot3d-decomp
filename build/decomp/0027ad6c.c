// OoT3D decomp @ 0027ad6c  name=FUN_0027ad6c  size=288

void FUN_0027ad6c(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;

  FUN_00372f38(param_1,param_2,param_1 + 0x1c4,1,0);
  uVar3 = FUN_00353fd4(param_1,param_2,1);
  FUN_003532e8(param_1,0);
  uVar3 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar3);
  *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  FUN_003510b0(param_1,DAT_0027ae8c);
  iVar4 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
  uVar2 = DAT_0027aea0;
  uVar3 = DAT_0027ae94;
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_0027ae90;
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    fVar5 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0xbe) + 0x4000));
    fVar1 = DAT_0027ae98;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) - fVar5 * DAT_0027ae98;
    fVar5 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0xbe) + 0x4000));
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) - fVar5 * fVar1;
    return;
  }
  *(undefined4 *)(param_1 + 0x1bc) = DAT_0027ae9c;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x10);
  return;
}
