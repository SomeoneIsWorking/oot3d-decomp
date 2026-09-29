// OoT3D decomp @ 00239ad8  name=FUN_00239ad8  size=168

void FUN_00239ad8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;

  if ((*(ushort *)(param_1 + 0x1c) & 0x1f) - 0x14 < 0xc) {
    FUN_00353484(param_1,param_2);
  }
  iVar1 = FUN_0036ec2c(param_2,(int)*(char *)(param_1 + 3));
  if (((iVar1 != 0) && (iVar1 = FUN_0036a7a0(param_2), iVar1 == 0)) &&
     (*(int *)(DAT_00239b80 + 0x4ec) < 1)) {
    FUN_0036ec14(param_2,(int)*(char *)(param_1 + 3));
    *(undefined4 *)(param_1 + 0x24c) = DAT_00239b84;
    FUN_0036cf80(param_2,param_1,0);
    iVar1 = FUN_0038a2cc(param_2,*(undefined1 *)(param_1 + 2));
    if (iVar1 == 0) {
      uVar2 = 0xffffffd3;
    }
    else {
      uVar2 = 0;
    }
    *(undefined4 *)(param_1 + 0x240) = uVar2;
  }
  return;
}
