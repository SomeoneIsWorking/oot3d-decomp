// OoT3D decomp @ 0015e154  name=FUN_0015e154  size=128

void FUN_0015e154(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_0036bc98();
  if (iVar1 == 0) {
    FUN_0036bbd0(DAT_0015e1d8,param_1,param_2,4);
    return;
  }
  iVar1 = FUN_0036bc84(param_2);
  if (iVar1 == 4) {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_0015e1d4;
    *(byte *)(param_1 + 0x26b) = *(byte *)(param_1 + 0x26b) & 0xf0 | 1;
    *(undefined2 *)(param_1 + 0x228) = 0x5a;
    FUN_00375c10(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
    return;
  }
  return;
}
