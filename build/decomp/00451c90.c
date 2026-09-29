// OoT3D decomp @ 00451c90  name=FUN_00451c90  size=72

void FUN_00451c90(int *param_1)

{
  undefined4 uVar1;
  int iVar2;

  if (*param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(*param_1 + 0x9c);
  }
  iVar2 = FUN_002ddfb0(uVar1);
  if ((iVar2 == 0) && (*param_1 != 0)) {
    FUN_003102dc(*param_1,0);
    return;
  }
  return;
}
