// OoT3D decomp @ 00249af8  name=FUN_00249af8  size=156

void FUN_00249af8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  if (((*(int *)(param_2 + 0x7fa0) == 0) && (*(short *)(DAT_00249b94 + 100) < 1)) &&
     (iVar3 = FUN_0036e864(param_2,0x36), iVar3 != 0)) {
    FUN_0036f4f0(param_2);
    *(undefined4 *)(DAT_00249b98 + 0x4ec) = 0xfffffffe;
    FUN_003655d0(0);
    uVar2 = DAT_00249ba4;
    uVar1 = DAT_00249ba0;
    *(undefined1 *)(DAT_00249b9c + param_2) = 2;
    FUN_0037547c(DAT_00249ba8,0,4,uVar2,uVar2,uVar1);
    *(undefined4 *)(param_2 + 0x7fa0) = 1;
  }
  return;
}
