// OoT3D decomp @ 002ff8e0  name=FUN_002ff8e0  size=308

void FUN_002ff8e0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;

  FUN_00371738(param_1,param_2,0x48);
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_002d6e20(1,param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  piVar2 = (int *)FUN_002deb7c(1,param_1 + 0x48);
  if (param_3 != 0) {
    piVar2 = *(int **)(param_1 + 0x50);
  }
  uVar3 = 0;
  if (param_3 != 0 && piVar2 != (int *)0x0) {
    uVar3 = (**(code **)(*piVar2 + 0x10))(piVar2,DAT_002ffa14,*(undefined4 *)(param_1 + 0x24));
  }
  uVar1 = DAT_002ffa18;
  FUN_002fb074(DAT_002ffa18,*(undefined4 *)(param_1 + 0x48));
  param_2 = *(int *)(param_2 + 0x14) + param_2;
  if (*(char *)(param_1 + 0x2a) == '\0') {
    FUN_002de990(uVar3 | 0xde1,-(int)*(short *)(param_1 + 0x28),*(undefined2 *)(param_1 + 0x30),
                 (int)*(short *)(param_1 + 0x2c),(int)*(short *)(param_1 + 0x2e),0,
                 *(undefined2 *)(param_1 + 0x30),*(undefined2 *)(param_1 + 0x32),param_2);
  }
  else {
    FUN_002d2ba8(uVar3 | uVar1,-(int)*(short *)(param_1 + 0x28),*(undefined2 *)(param_1 + 0x30),
                 (int)*(short *)(param_1 + 0x2c),(int)*(short *)(param_1 + 0x2e),0,
                 *(undefined4 *)(param_1 + 0x24),param_2);
  }
  FUN_002de76c(uVar1,DAT_002ffa1c,param_1 + 0x4c);
  FUN_0030e604(100000,0);
  return;
}
