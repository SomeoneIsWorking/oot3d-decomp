// OoT3D decomp @ 00381ecc  name=FUN_00381ecc  size=132

void FUN_00381ecc(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;

  iVar2 = FUN_0036b4ec(param_2 + 0x254,param_1);
  if (iVar2 != 0) {
    if (param_3 != (undefined4 *)0x0) {
      uVar3 = *param_3;
      FUN_00334d6c(param_2);
      uVar1 = DAT_00381f54;
      FUN_00360190(DAT_00381f58,DAT_00381f54,DAT_00381f54,DAT_00381f50,param_2 + 0x254,param_1,uVar3
                   ,0);
      *(undefined4 *)(param_2 + 0x6c) = uVar1;
      *(undefined4 *)(param_2 + 0x221c) = uVar1;
    }
    *(undefined2 *)(DAT_00381f5c + param_2) = 1;
  }
  return;
}
