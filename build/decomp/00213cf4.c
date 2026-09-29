// OoT3D decomp @ 00213cf4  name=FUN_00213cf4  size=84

void FUN_00213cf4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;

  uVar1 = DAT_00213d4c;
  *(undefined4 *)(param_1 + 0x1a4) = DAT_00213d48;
  FUN_0037572c(uVar1,param_1);
  iVar2 = FUN_003a0e88(*(undefined4 *)(param_1 + 0x178),param_2,*(ushort *)(param_1 + 0x1c) & 0xff,0
                      );
  *(int *)(param_1 + 0x1a8) = iVar2;
  if (iVar2 == 0) {
    FUN_00374428(param_1);
    return;
  }
  return;
}
