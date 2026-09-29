// OoT3D decomp @ 00217ed8  name=FUN_00217ed8  size=124

void FUN_00217ed8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  iVar2 = *(int *)(DAT_00217f54 + param_2);
  if ((iVar1 == 6) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    *(short *)(DAT_00217f5c + param_1) = (short)DAT_00217f58;
    FUN_003686a8(param_1,9);
    FUN_003729b8(param_1,10);
    *(uint *)(iVar2 + 0x1714) = *(uint *)(iVar2 + 0x1714) | 0x800000;
    *(undefined4 *)(iVar2 + 0x1740) = *(undefined4 *)(DAT_00217f60 + 4);
  }
  return;
}
