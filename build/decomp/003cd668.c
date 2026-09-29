// OoT3D decomp @ 003cd668  name=FUN_003cd668  size=100

void FUN_003cd668(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar2 == 4) && (iVar2 = FUN_00346964(param_2), iVar2 != 0)) {
    FUN_0036be34(param_2,DAT_003cd6cc);
    uVar1 = DAT_003cd6d4;
    *(undefined4 *)(param_1 + 0xbac) = DAT_003cd6d0;
    *(undefined4 *)(param_1 + 0xbb0) = uVar1;
  }
  if ((*(ushort *)(param_1 + 0xc3c) & 0x10) != 0) {
    *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) | 1;
  }
  return;
}
