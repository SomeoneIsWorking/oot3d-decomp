// OoT3D decomp @ 0026d630  name=FUN_0026d630  size=188

void FUN_0026d630(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fpscr;

  iVar1 = FUN_00370734(param_1 + 0x1e0);
  uVar3 = DAT_0026d6ec;
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x124) == 0) {
      uVar2 = FUN_0036ae14(param_1 + 0x1e0,4);
      uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar3,uVar3,uVar2,uVar3,param_1 + 0x1e0,4,2);
      *(undefined1 *)(param_1 + 0x964) = 7;
      uVar3 = DAT_0026d6fc;
    }
    else {
      uVar2 = FUN_0036ae14(param_1 + 0x1e0,5);
      uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(DAT_0026d6f4,uVar3,uVar2,DAT_0026d6f0,param_1 + 0x1e0,5,1);
      *(undefined1 *)(param_1 + 0x964) = 3;
      *(undefined1 *)(param_1 + 0x94d) = 1;
      uVar3 = DAT_0026d6f8;
    }
    *(undefined4 *)(param_1 + 0x950) = uVar3;
  }
  return;
}
