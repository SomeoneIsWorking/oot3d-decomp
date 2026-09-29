// OoT3D decomp @ 0027aa1c  name=FUN_0027aa1c  size=504

void FUN_0027aa1c(int param_1,int param_2)

{
  undefined8 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;

  uVar5 = 0;
  FUN_003532e8(param_1,1);
  FUN_003510b0(param_1,DAT_0027ac14);
  uVar5 = FUN_00372f38(param_1,param_2,param_1 + 0x1c0,0,param_1 + 0x1c4,1,param_1 + 0x1c8,2,
                       param_1 + 0x1cc,3,param_1 + 0x1d0,4,param_1 + 0x1d4,5,0,uVar5);
  uVar1 = *(undefined8 *)(param_2 + 0x7f80);
  uVar4 = *(undefined4 *)(param_2 + 0x7f88);
  uVar3 = FUN_00372f0c(uVar5,0);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1c0) + 0xc),uVar3);
  piVar2 = DAT_0027ac18;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1c0) + 0xc) + 0x10) = 1;
  if (*piVar2 == 0) {
    *(int *)(*(int *)(*(int *)(param_1 + 0x1c0) + 0xc) + 8) = (int)((ulonglong)uVar1 >> 0x20);
    FUN_003586ec();
  }
  uVar3 = FUN_00372f0c(uVar5,1);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1c4) + 0xc),uVar3);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1c4) + 0xc) + 0x10) = 1;
  if (*piVar2 == 0) {
    *(int *)(*(int *)(*(int *)(param_1 + 0x1c4) + 0xc) + 8) = (int)uVar1;
    FUN_003586ec();
  }
  uVar5 = FUN_00372f0c(uVar5,2);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1d4) + 0xc),uVar5);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1d4) + 0xc) + 0x10) = 1;
  if (*piVar2 == 0) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1d4) + 0xc) + 8) = uVar4;
    FUN_003586ec();
  }
  if (*(int *)(DAT_0027ac1c + 4) == 0) {
    if (*(short *)(param_1 + 0x1c) == 0) {
      uVar5 = FUN_00353fd4(param_1,param_2,0);
    }
    else {
      uVar5 = FUN_00353fd4(param_1,param_2,1);
    }
    uVar5 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar5);
    *(undefined4 *)(param_1 + 0x1a4) = uVar5;
  }
  *(undefined4 *)(param_1 + 0x1bc) = DAT_0027ac20;
  return;
}
