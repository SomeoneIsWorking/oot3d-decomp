// OoT3D decomp @ 003508b8  name=FUN_003508b8  size=88

void FUN_003508b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iStack_10;
  int aiStack_c [3];

  piVar1 = DAT_00350910;
  aiStack_c[2] = param_4;
  aiStack_c[1] = param_3;
  aiStack_c[0] = param_2;
  piVar3 = &iStack_10;
  iVar2 = 0;
  iStack_10 = param_1;
  while( true ) {
    piVar3 = piVar3 + 1;
    if ((int *)*piVar3 == (int *)0x0) break;
    (**(code **)(*(int *)*piVar3 + 4))();
    iVar2 = iVar2 + 1;
    *piVar1 = *piVar1 + -1;
  }
  if (0 < iVar2) {
    piVar1[1] = piVar1[1] + -1;
  }
  return;
}
