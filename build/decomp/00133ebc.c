// OoT3D decomp @ 00133ebc  name=FUN_00133ebc  size=292

void FUN_00133ebc(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  iVar3 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar3 != 6) || (iVar3 = FUN_00346964(param_2), iVar3 == 0)) {
    return;
  }
  *(undefined2 *)(param_1 + 0xbc0) = 0;
  uVar2 = DAT_00133fe4;
  uVar1 = DAT_00133fe0;
  iVar3 = *(int *)(param_1 + 0xef8);
  if (iVar3 != 0x33) {
    if (iVar3 < 0x34) {
      if (iVar3 == 0x26) {
        FUN_0012e0b0();
        FUN_003717ac(param_1 + 0x1a4,DAT_00133fec,1);
        *(undefined4 *)(param_1 + 0x1e4) = uVar2;
        *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1ec);
        *(undefined4 *)(param_1 + 0x6c) = uVar2;
        *(undefined1 *)(param_1 + 0xc49) = 1;
        *(undefined4 *)(param_1 + 0xbbc) = uVar1;
        return;
      }
      if (iVar3 == 0x2c) {
        *(ushort *)(DAT_00133fe8 + 0x30) = *(ushort *)(DAT_00133fe8 + 0x30) | 0x200;
        FUN_003717ac(param_1 + 0x1a4,DAT_00133fec,1);
        *(undefined4 *)(param_1 + 0x1e4) = uVar2;
        *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1ec);
        *(undefined4 *)(param_1 + 0x6c) = uVar2;
        *(undefined1 *)(param_1 + 0xc49) = 1;
        *(undefined4 *)(param_1 + 0xbbc) = uVar1;
        return;
      }
    }
    else {
      if (iVar3 == 0x34) goto LAB_00133fc4;
      if (iVar3 == 0x57) {
        *(undefined1 *)(DAT_00133ff0 + 0x52) = 1;
      }
    }
    *(undefined4 *)(param_1 + 0xbbc) = uVar1;
    return;
  }
LAB_00133fc4:
  FUN_00367640(param_1,param_2);
  *(undefined4 *)(param_1 + 0xbbc) = DAT_00133ff4;
  return;
}
