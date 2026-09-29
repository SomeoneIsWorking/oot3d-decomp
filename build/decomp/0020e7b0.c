// OoT3D decomp @ 0020e7b0  name=FUN_0020e7b0  size=428

void FUN_0020e7b0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  short local_28 [6];

  uVar2 = DAT_0020e964;
  uVar1 = DAT_0020e960;
  iVar5 = DAT_0020e95c;
  if (((*(uint *)(DAT_0020e95c + 0x18) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_0020e95c + 0x18), puVar3 = DAT_0020e968, iVar4 != 0)) {
    *DAT_0020e968 = uVar1;
    puVar3[1] = uVar2;
    puVar3[2] = uVar1;
  }
  if (((*(uint *)(iVar5 + 0x14) & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_0020e96c), puVar3 = DAT_0020e970, iVar5 != 0)) {
    *DAT_0020e970 = uVar1;
    puVar3[1] = uVar2;
    puVar3[2] = uVar1;
  }
  if ((*(char *)(param_1 + 0x307) != '\0') ||
     (((-1 < *(short *)(param_1 + 0x1c) &&
       (*(char *)(DAT_0020e978 + *(int *)(DAT_0020e974 + param_2)) != '\0')) ||
      (iVar5 = FUN_0035db20(param_2), iVar5 == 0)))) {
    (**(code **)(param_1 + 0x318))(param_1,param_2);
  }
  iVar5 = (int)*(short *)(param_1 + 0x1c);
  if (iVar5 - 3U < 6) {
    if (*(int *)(param_1 + 0x128) == 0) {
      FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                   *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,
                   (int)*(short *)(&stack0xffffffd2 + iVar5 * 2),0,0,0);
    }
  }
  else if (iVar5 == 0) {
    FUN_00365d20(param_2,param_1 + 0x2c0,DAT_0020e970 + -3,DAT_0020e970,DAT_0020e980 + -4,
                 DAT_0020e980,100);
    return;
  }
  return;
}
