// OoT3D decomp @ 00231488  name=FUN_00231488  size=224

void FUN_00231488(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  float fVar3;

  FUN_003510b0(param_1,DAT_00231568);
  iVar2 = FUN_0037571c(param_2);
  if (iVar2 != 0) {
    *(float *)(param_1 + 0xfc) = *(float *)(param_1 + 0xfc) + DAT_0023156c;
  }
  if (*(short *)(param_1 + 0xbe) == 0) {
    fVar3 = (float)FUN_00371e50(DAT_00231570);
    uVar1 = (undefined2)(int)fVar3;
    *(undefined2 *)(param_1 + 0x16) = uVar1;
    *(undefined2 *)(param_1 + 0x36) = uVar1;
    *(undefined2 *)(param_1 + 0xbe) = uVar1;
  }
  FUN_00353dd0(param_2,param_1 + 0x1a4);
  FUN_00353d24(param_2,param_1 + 0x1a4,param_1,DAT_00231574);
  FUN_0037632c(param_1,param_1 + 0x1a4);
  FUN_00350d20(param_1 + 0xa0,0,DAT_00231578);
  iVar2 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xc4) = DAT_0023157c;
    FUN_00372f38(param_1,param_2,param_1 + 0x20c,4);
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
