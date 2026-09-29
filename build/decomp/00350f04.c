// OoT3D decomp @ 00350f04  name=FUN_00350f04  size=48

void FUN_00350f04(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar5;
  int iStack_c;
  int *piVar4;

  FUN_00351034(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
  piVar1 = DAT_00350fa8;
  iStack_c = param_1 + 0x1c4;
  iVar5 = 0;
  piVar3 = &iStack_c;
  while( true ) {
    piVar4 = piVar3 + 1;
    piVar2 = (int *)*piVar3;
    if (piVar2 == (int *)0x0) break;
    piVar3 = piVar4;
    if (*piVar2 != 0) {
      iVar5 = iVar5 + 1;
      *piVar1 = *piVar1 + -1;
      if ((int *)*piVar2 != (int *)0x0) {
        (**(code **)(*(int *)*piVar2 + 4))();
      }
      *piVar2 = 0;
    }
  }
  if (0 < iVar5) {
    piVar1[1] = piVar1[1] + -1;
  }
  return;
}
