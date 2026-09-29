// OoT3D decomp @ 0023fab0  name=FUN_0023fab0  size=308

void FUN_0023fab0(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined2 extraout_r2;
  undefined2 uVar5;

  uVar1 = ((uint)*(ushort *)(param_1 + 0x1c) << 0x11) >> 0x1e;
  FUN_003510b0(param_1,DAT_0023fbe4);
  FUN_003532e8(param_1,0);
  *(undefined1 *)(param_1 + 0x19a) = 1;
  iVar4 = DAT_0023fbe8 + uVar1 * 3;
  cVar2 = *(char *)(iVar4 + 2);
  uVar5 = extraout_r2;
  if (cVar2 == '\x01') {
    uVar5 = 0x4000;
  }
  *(char *)(param_1 + 0x244) = cVar2;
  if (cVar2 == '\x01') {
    *(undefined2 *)(param_1 + 0x34) = uVar5;
  }
  if (*(char *)(iVar4 + 1) < '\0') {
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - DAT_0023fbf4;
  }
  else {
    iVar4 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
    if (iVar4 != 0) goto LAB_0023fbd4;
    FUN_00372d4c(DAT_0023fbec,DAT_0023fbec,param_1 + 0xbc,0);
    FUN_00350a98(param_2,param_1 + 0x1c4);
    FUN_00350914(param_2,param_1 + 0x1c4,param_1,DAT_0023fbf0);
  }
  *(undefined1 *)(param_1 + 0x19b) = 2;
  if (uVar1 < 2) {
    uVar3 = FUN_00363c10(param_2 + 0x3a58,DAT_0023fbf8);
    *(undefined1 *)(param_1 + 0x245) = uVar3;
  }
  else {
    uVar3 = FUN_00363c10(param_2 + 0x3a58,0x19);
    *(undefined1 *)(param_1 + 0x245) = uVar3;
  }
  if (-1 < *(char *)(param_1 + 0x245)) {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_0023fbfc;
    return;
  }
LAB_0023fbd4:
  FUN_00374428(param_1);
  return;
}
