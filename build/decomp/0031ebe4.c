// OoT3D decomp @ 0031ebe4  name=FUN_0031ebe4  size=200

void FUN_0031ebe4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;

  puVar2 = DAT_0031ecb0;
  uVar1 = DAT_0031ecac;
  iVar3 = FUN_003736fc(*DAT_0031ecb0,DAT_0031ecac,param_1 + 0x1a4);
  if ((((iVar3 != 0) || (iVar3 = FUN_003736fc(puVar2[1],uVar1,param_1 + 0x1a4), iVar3 != 0)) &&
      ((*(ushort *)(param_1 + 0x90) & 1) != 0)) && (*(int *)(param_1 + 0xbb0) == 0)) {
    *(undefined4 *)(param_1 + 0xbb0) = 1;
    iVar3 = FUN_00341df0(param_2 + 0xa98,*(undefined4 *)(param_1 + 0x7c),
                         *(undefined1 *)(param_1 + 0x81));
    FUN_0037547c(iVar3 + 0x1000001,param_1 + 0x28,4,DAT_0031ecb8,DAT_0031ecb8,DAT_0031ecb4);
    return;
  }
  *(undefined4 *)(param_1 + 0xbb0) = 0;
  return;
}
