// OoT3D decomp @ 00369bec  name=FUN_00369bec  size=144

undefined4 FUN_00369bec(int param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;

  uVar1 = *(ushort *)(param_1 + 0xca2);
  bVar2 = (uVar1 & 4) == 0;
  if (bVar2) {
    uVar1 = *(ushort *)(param_1 + 0xc00);
  }
  bVar3 = bVar2 && uVar1 == 0;
  if (bVar2 && uVar1 == 0) {
    bVar3 = *(short *)(param_1 + 0xc0e) == 0;
  }
  bVar2 = false;
  if (bVar3) {
    bVar2 = *(short *)(param_1 + 0xc0c) == 0;
  }
  if (!bVar2) {
    return 1;
  }
  if (*(int *)(param_1 + 0x98) <= DAT_00369c7c) {
    fVar5 = *(float *)(*(int *)(param_2 + 0x20ac) + 0x2c);
    fVar4 = *(float *)(param_1 + 0x2c) - fVar5;
    if (((DAT_00369c80 <= fVar4) && ((int)fVar4 <= DAT_00369c84)) &&
       (*(float *)(param_1 + 0x84) <= fVar5)) {
      return 1;
    }
  }
  return 0;
}
