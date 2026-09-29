// OoT3D decomp @ 00497e74  name=FUN_00497e74  size=112

undefined4 FUN_00497e74(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;

  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = iVar1 + -0x58;
    if (*(int *)(iVar1 + -0x18) <= param_2) {
      pcVar3 = *(code **)(iVar1 + -0x4c);
      uVar4 = *(undefined4 *)(iVar1 + -0x48);
      uVar5 = *(undefined4 *)(iVar1 + -0x50);
      FUN_0030a474(iVar2);
      FUN_0030a40c(iVar2);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(iVar2,2,uVar4);
      }
      return uVar5;
    }
  }
  return 0;
}
