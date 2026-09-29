// OoT3D decomp @ 001218c4  name=FUN_001218c4  size=104

void FUN_001218c4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  uVar1 = DAT_00121930;
  FUN_003705a0(DAT_00121930,DAT_0012192c,param_1 + 0x6c);
  iVar3 = FUN_003731e0(param_1 + 0x208);
  if (iVar3 != 0) {
    FUN_00373d40(param_1 + 0x208,*(undefined4 *)(DAT_00121934 + 0xc));
    uVar2 = DAT_00121938;
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    uVar1 = DAT_0012193c;
    *(undefined4 *)(param_1 + 0x1a4) = uVar2;
    FUN_00375bcc(param_1,uVar1);
    return;
  }
  return;
}
