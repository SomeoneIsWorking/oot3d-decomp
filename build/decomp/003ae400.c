// OoT3D decomp @ 003ae400  name=FUN_003ae400  size=160

void FUN_003ae400(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  iVar2 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar2 == 5) && (iVar3 = FUN_00346964(param_2), iVar2 = DAT_003ae4a0, iVar3 != 0)) {
    *(ushort *)(DAT_003ae4a0 + 0x1e) = *(ushort *)(DAT_003ae4a0 + 0x1e) | 0x4000;
    if ((*(ushort *)(iVar2 + 8) & 4) == 0) {
      FUN_0036be34(param_2,DAT_003ae4b0);
      uVar1 = DAT_003ae4ac;
      *(undefined4 *)(param_1 + 0xbac) = DAT_003ae4b4;
      *(undefined4 *)(param_1 + 0xbb0) = uVar1;
    }
    else {
      FUN_0036be34(param_2,DAT_003ae4a4);
      uVar1 = DAT_003ae4a8;
      *(undefined4 *)(param_1 + 0xbb0) = DAT_003ae4ac;
      *(undefined4 *)(param_1 + 0xbac) = uVar1;
    }
  }
  if ((*(ushort *)(param_1 + 0xc3c) & 0x10) != 0) {
    *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) | 1;
  }
  return;
}
