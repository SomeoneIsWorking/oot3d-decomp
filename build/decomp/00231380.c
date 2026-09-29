// OoT3D decomp @ 00231380  name=FUN_00231380  size=200

void FUN_00231380(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  float fVar2;

  FUN_003510b0(param_1,DAT_00231448,param_3,param_4,param_4);
  FUN_00372f38(param_1,param_2,param_1 + 0x1fc,0,0);
  FUN_00353dd0(param_2,param_1 + 0x1a4);
  FUN_00353d24(param_2,param_1 + 0x1a4,param_1,DAT_0023144c);
  FUN_0037632c(param_1,param_1 + 0x1a4);
  iVar1 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
  if (iVar1 == 0) {
    FUN_00350d20(param_1 + 0xa0,0,DAT_00231450);
    if (*(short *)(param_1 + 0xbe) == 0) {
      fVar2 = (float)FUN_00371e50(DAT_00231454);
      *(short *)(param_1 + 0x36) = (short)(int)fVar2;
      *(short *)(param_1 + 0xbe) = (short)(int)fVar2;
    }
    fVar2 = DAT_0023145c;
    *(undefined4 *)(param_1 + 0xc4) = DAT_00231458;
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + fVar2;
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
