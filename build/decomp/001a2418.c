// OoT3D decomp @ 001a2418  name=FUN_001a2418  size=172

void FUN_001a2418(int param_1,undefined4 param_2)

{
  float fVar1;
  bool bVar2;

  FUN_00376864();
  fVar1 = DAT_001a24cc;
  bVar2 = true;
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    bVar2 = DAT_001a24cc <= *(float *)(param_1 + 100);
  }
  if (bVar2) {
    FUN_00376340(DAT_001a24cc,DAT_001a24cc,DAT_001a24cc,param_2,param_1,0x1c);
    return;
  }
  if (*(short *)(param_1 + 0x232) < 3) {
    FUN_00376340(DAT_001a24cc,DAT_001a24cc,DAT_001a24cc,param_2,param_1,0x1c);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(DAT_001a24d0 + *(short *)(param_1 + 0x232) * 4)
    ;
    *(short *)(param_1 + 0x232) = *(short *)(param_1 + 0x232) + 1;
    return;
  }
  *(float *)(param_1 + 0x70) = DAT_001a24cc;
  *(float *)(param_1 + 100) = fVar1;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_1 + 0x22c) = 0;
  return;
}
