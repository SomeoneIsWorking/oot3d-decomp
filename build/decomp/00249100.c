// OoT3D decomp @ 00249100  name=FUN_00249100  size=340

void FUN_00249100(int param_1,int param_2)

{
  short sVar1;
  int iVar2;

  if (*(int *)(param_1 + 0x1e0) < DAT_00249254) {
    if (*(short *)(param_1 + 0x1c) == 0) {
      FUN_0036595c(param_1,param_2);
    }
  }
  else if (*(short *)(DAT_00249258 + param_1) == 0) {
    FUN_00375ed8(param_1,0x400000,0x78,0,4);
  }
  iVar2 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar2 == 0) {
    if ((int)*(float *)(param_1 + 0x1e0) == 0x34) {
      FUN_00375bcc(param_1,DAT_0024925c);
    }
  }
  else {
    if (*(short *)(param_1 + 0x980) != 0) goto LAB_00249210;
    iVar2 = z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                             *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0x10,0,0,6,0,1
                            );
    if (iVar2 != 0) {
      *(undefined2 *)(iVar2 + 0x26c) = 0;
      *(undefined2 *)(param_1 + 0x980) = 1;
      goto LAB_00249210;
    }
  }
  if (*(short *)(param_1 + 0x980) == 0) {
    return;
  }
LAB_00249210:
  sVar1 = *(short *)(param_1 + 0x980) + -1;
  *(short *)(param_1 + 0x980) = sVar1;
  if (sVar1 != 0) {
    return;
  }
  FUN_00374444(param_2,param_1,param_1 + 0x28,0x40);
  FUN_00374428(param_1);
  return;
}
