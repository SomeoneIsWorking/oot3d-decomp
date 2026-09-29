// OoT3D decomp @ 0034fe20  name=FUN_0034fe20  size=132

undefined4
FUN_0034fe20(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;

  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar1 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_0034fea4 + iVar1) != 0)
     ) {
    iVar1 = iVar1 + 0x3a5c;
  }
  else {
    iVar1 = 0;
  }
  uVar2 = ObjectBankArchive_00358ef8(iVar1 + 0x10,param_4);
  FUN_003220f4(param_3,iVar1 + 0x10,param_2,uVar2,*(undefined4 *)(param_1 + 0x178),param_5,param_6,
               param_7,param_8);
  return 0;
}
