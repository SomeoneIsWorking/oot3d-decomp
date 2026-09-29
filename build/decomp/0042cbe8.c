// OoT3D decomp @ 0042cbe8  name=FUN_0042cbe8  size=248

int FUN_0042cbe8(int *param_1)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = DAT_0042cce0;
  *param_1 = DAT_0042cce0;
  param_1[1] = iVar2 + 0x78;
  FUN_0030748c(param_1);
  if (param_1[4] != 0) {
    FUN_00301260();
    FUN_0031b99c(param_1[4]);
    param_1[4] = 0;
  }
  if (param_1[5] != 0) {
    FUN_00301260();
    FUN_0031b99c(param_1[5]);
    param_1[5] = 0;
  }
  if (param_1[6] != 0) {
    FUN_00301260();
    FUN_0031b99c(param_1[6]);
    param_1[6] = 0;
  }
  FUN_002ffacc(param_1 + 0x11);
  param_1[0x3cf] = 0;
  iVar2 = FUN_00307674(param_1 + 0x3b9);
  iVar2 = FUN_00442154(iVar2 + -0x38);
  iVar2 = FUN_00442274(iVar2 + -1000);
  iVar2 = FUN_00305340(iVar2 + -0xe8);
  iVar2 = FUN_004421e8(iVar2 + -0x998);
  uVar1 = DAT_0042cce4;
  *(undefined4 *)(iVar2 + -0xc) = DAT_0042cce4;
  FUN_003051bc();
  *(undefined4 *)(iVar2 + -0x18) = uVar1;
  FUN_003051bc(iVar2 + -0x18);
  iVar2 = FUN_00442134(iVar2 + -0x28);
  return iVar2 + -0x1c;
}
