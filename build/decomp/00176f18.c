// OoT3D decomp @ 00176f18  name=FUN_00176f18  size=144

void FUN_00176f18(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;

  iVar2 = FUN_003731e0(param_1 + 0x204);
  fVar1 = DAT_00176fa8;
  if (iVar2 == 0) {
    fVar3 = DAT_00176fa8;
    if (*(int *)(param_1 + 0x240) <= DAT_00176fac) {
      fVar3 = *(float *)(param_1 + 0x240);
    }
    *(float *)(param_1 + 0x1f0) = (DAT_00176fa8 - fVar3) * DAT_00176fb0;
  }
  else {
    FUN_001e8ba8(param_1);
  }
  iVar2 = FUN_003736fc(fVar1,DAT_00176fb4,param_1 + 0x204);
  if (iVar2 != 0) {
    *(byte *)(param_1 + 0x1bd) = *(byte *)(param_1 + 0x1bd) & 0xfe;
  }
  return;
}
