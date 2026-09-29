// OoT3D decomp @ 0010aa20  name=FUN_0010aa20  size=296

void FUN_0010aa20(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = DAT_0010ab48;
  if (*(short *)(param_1 + 0x1c) != 0) {
    uVar3 = DAT_0010ab4c;
  }
  iVar2 = FUN_003705a0(DAT_0010ab50,uVar3,param_1 + 0x54);
  piVar1 = DAT_0010ab54;
  if (iVar2 != 0) {
    if (*(short *)(param_1 + 0x1c) == 0) {
      *DAT_0010ab54 = *DAT_0010ab54 + 1;
      FUN_00374444(param_2,param_1,param_1 + 0x28,0);
    }
    else {
      FUN_0036df58(param_2,param_1 + 0x28,2);
    }
    iVar2 = DAT_0010ab58;
    if (*piVar1 == 10) {
      *(undefined2 *)(param_1 + 0x1c) = 1;
      *piVar1 = 0;
      *(float *)(*(int *)(param_1 + 0x5c0) + 0x44) =
           *(float *)(*(int *)(iVar2 + 0xc) + 0x28) * DAT_0010ab5c;
    }
    else {
      *(undefined2 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x5c0) + 0x44) =
           *(undefined4 *)(*(int *)(iVar2 + 0xc) + 0x28);
    }
    FUN_0036e734(param_1 + 0x1d4,0);
    FUN_0036df4c(param_1 + 0x28,param_1 + 8);
    uVar3 = DAT_0010ab60;
    *(undefined2 *)(param_1 + 0xbc) = 0;
    *(undefined2 *)(param_1 + 0xc0) = 0;
    iVar2 = DAT_0010ab6c;
    *(undefined4 *)(param_1 + 0xc4) = uVar3;
    uVar3 = DAT_0010ab68;
    *(undefined4 *)(param_1 + 0x50) = DAT_0010ab64;
    *(short *)(iVar2 + param_1) = (short)uVar3;
    *(undefined4 *)(param_1 + 0x598) = DAT_0010ab70;
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  return;
}
