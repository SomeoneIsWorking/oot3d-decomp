// OoT3D decomp @ 0012388c  name=FUN_0012388c  size=320

void FUN_0012388c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 local_18;

  FUN_003731e0(param_1 + 0x1c8);
  iVar2 = DAT_001239cc;
  if (*(short *)(param_1 + 0x252) != 0) {
    *(short *)(param_1 + 0x252) = *(short *)(param_1 + 0x252) + -1;
  }
  if ((((int)ABS(*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x738)) < iVar2) &&
      (fVar5 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x28),
      fVar4 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x30),
      (int)SQRT(fVar5 * fVar5 + fVar4 * fVar4) < iVar2 + 0x800000)) ||
     (*(short *)(param_1 + 0x252) == 0)) {
    FUN_0036d878(param_1);
    return;
  }
  FUN_003705a0(DAT_001239d4,DAT_001239d0,param_1 + 0x6c);
  uVar1 = *(ushort *)(param_1 + 0x90);
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 0x10) == 0) {
      if (*(float *)(param_1 + 0x2c) <= *(float *)(param_1 + 0x738)) goto LAB_00123968;
    }
    *(short *)(param_1 + 0x254) = (short)DAT_001239dc;
  }
  else {
LAB_00123968:
    *(short *)(param_1 + 0x254) = (short)DAT_001239d8;
  }
  if ((uVar1 & 8) == 0) {
    uVar3 = FUN_00367358(param_1,param_1 + 8);
    FUN_00370378(param_1 + 0xbe,uVar3,0x300);
    local_18 = param_4;
  }
  else {
    local_18 = 0x300;
    FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x82),2,0xc00);
  }
  FUN_00370378(param_1 + 0xbc,(int)*(short *)(param_1 + 0x254),0x100,local_18);
  return;
}
