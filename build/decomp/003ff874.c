// OoT3D decomp @ 003ff874  name=FUN_003ff874  size=88

void FUN_003ff874(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  if (*param_1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(undefined4 *)(*param_1 + 0x9c);
  }
  iVar1 = FUN_0030f0ec();
  iVar2 = FUN_00481a68(*(undefined4 *)(iVar1 + 4),uVar3);
  iVar1 = 0;
  if (iVar2 < 0) {
    iVar1 = *param_1;
  }
  if (iVar2 >= 0 || iVar1 == 0) {
    return;
  }
  FUN_0030f0d4(iVar1,DAT_003ff8cc);
  return;
}
