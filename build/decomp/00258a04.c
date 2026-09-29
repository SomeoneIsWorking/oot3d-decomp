// OoT3D decomp @ 00258a04  name=FUN_00258a04  size=304

void FUN_00258a04(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;

  iVar4 = *(int *)(DAT_00258b34 + param_2);
  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == 0) || (iVar1 = FUN_003769d8(param_2 + 0x28a0), iVar1 == 6)) {
    *(undefined2 *)(param_1 + 0x85e) = 0xb;
  }
  iVar1 = FUN_0036bc98(param_1,param_2);
  if (iVar1 == 0) {
    FUN_0036bbd0(DAT_00258b54,param_1,param_2,6);
    return;
  }
  iVar2 = FUN_0036bc84(param_2);
  iVar1 = DAT_00258b38;
  if (iVar2 == 6) {
    if ((*(ushort *)(DAT_00258b3c + 0xf8) & 0x400) != 0) {
      FUN_00372244(param_2 + 0x5fcc,0x1e,DAT_00258b40);
      *(undefined2 *)(DAT_00258b44 + iVar4) = *(undefined2 *)(iVar1 + 10);
      *(short *)(param_1 + 0x85e) = *(short *)(param_1 + 0x86a) + 0x15;
      *(undefined2 *)(param_1 + 0x852) = 4;
      uVar3 = DAT_00258b48;
LAB_00258b14:
      *(undefined4 *)(param_1 + 0x840) = uVar3;
      return;
    }
  }
  else if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x864) = 1;
    *(short *)(param_1 + 0x85e) = *(short *)(param_1 + 0x86a) + 0x15;
    uVar3 = DAT_00258b50;
    if (*(char *)(param_1 + 0x863) == '\0') {
      *(undefined4 *)(param_1 + 0x840) = DAT_00258b4c;
      return;
    }
    goto LAB_00258b14;
  }
  *(undefined2 *)(DAT_00258b44 + iVar4) = *(undefined2 *)(DAT_00258b38 + 0xe);
  *(short *)(param_1 + 0x85e) = *(short *)(param_1 + 0x86a) + 0x15;
  return;
}
