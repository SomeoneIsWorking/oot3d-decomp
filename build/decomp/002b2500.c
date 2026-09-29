// OoT3D decomp @ 002b2500  name=FUN_002b2500  size=180

void FUN_002b2500(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  iVar1 = DAT_002b25c4;
  if (*(short *)(param_1 + 0x1c) == 8) {
    if (((uint)*(ushort *)(DAT_002b25c0 + 0xb6) &
        *(int *)(DAT_002b25b8 + 4) << (uint)*(byte *)(DAT_002b25bc + 3)) == 0) {
      return;
    }
    if ((*(ushort *)(DAT_002b25c4 + 0xf6) & 4) != 0 ||
        (*(uint *)(*(int *)(DAT_002b25b4 + param_2) + 0x1710) & 0x20000000) != 0) {
      return;
    }
    iVar2 = FUN_0037577c(param_2);
    if (iVar2 != 0) {
      return;
    }
    uVar3 = FUN_00375750(param_2 + 0x118,0);
    FUN_0037573c(param_2,uVar3);
    *(undefined1 *)(DAT_002b25c8 + 0x5a2) = 1;
    *(ushort *)(iVar1 + 0xf6) = *(ushort *)(iVar1 + 0xf6) | 4;
    FUN_00376a78(param_2,0x5c);
  }
  *(undefined4 *)(param_1 + 3000) = 0x1e;
  return;
}
