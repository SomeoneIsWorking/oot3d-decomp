// OoT3D decomp @ 0041b868  name=FUN_0041b868  size=540

/* WARNING: Type propagation algorithm not settling */

int * FUN_0041b868(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_r1;
  int *piVar5;
  int iVar6;
  undefined1 auStack_7b0 [1920];
  int local_30 [2];

  iVar2 = FUN_00350820(param_1 + 4,DAT_0041ba84,0x3c,0x20);
  *(undefined1 *)(iVar2 + 0x780) = 1;
  uVar3 = FUN_002fe0e0();
  iVar2 = FUN_002fe05c(iVar2 + 0x784,uVar3);
  *(undefined4 *)(iVar2 + 0xd38) = param_3;
  piVar5 = (int *)(iVar2 + -0x788);
  *(undefined4 *)(iVar2 + 0xd3c) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0xd40) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0xd44) = 0xffffffff;
  FUN_00423298();
  if (param_2 == 0) {
    *(int *)(iVar2 + 0x94) = iVar2;
  }
  else {
    *(int *)(iVar2 + 0x94) = param_2;
  }
  FUN_004230a4(piVar5);
  piVar1 = DAT_0041ba88;
  local_30[1] = 0;
  if (*DAT_0041ba88 == 0) {
    software_interrupt(0x28);
    *(ulonglong *)(DAT_0041ba88 + 2) =
         (ulonglong)DAT_0041ba90 * ((ulonglong)DAT_0041ba8c * 0x96 >> 0x20) +
         ((ulonglong)DAT_0041ba90 * ((ulonglong)DAT_0041ba8c * 0x96 & 0xffffffff) >> 0x20) +
         CONCAT44(extraout_r1,*DAT_0041ba88);
  }
  else {
    iVar6 = iVar2 + 0x58;
    if (*piVar5 == 0) {
      FUN_002fe0f0(piVar5,iVar6,local_30 + 1,1);
    }
    else {
      local_30[0] = 0;
      FUN_00350820(auStack_7b0,DAT_0041ba84,0x3c,0x20);
      FUN_002fe0f0(piVar5,auStack_7b0,local_30,0x20);
      if (local_30[0] < 1) {
        FUN_00371738(iVar6,auStack_7b0,local_30[0] * 0x3c);
        iVar4 = *piVar5;
        if (1 - local_30[0] <= *piVar5) {
          iVar4 = 1 - local_30[0];
        }
        *piVar5 = iVar4;
        FUN_00371738(iVar6 + local_30[0] * 0x3c,iVar2 + -0x784,iVar4 * 0x3c);
      }
      else {
        FUN_00371738(iVar6,auStack_7b0,0x3c);
      }
      *piVar5 = 0;
    }
  }
  *piVar1 = *piVar1 + 1;
  return piVar5;
}
