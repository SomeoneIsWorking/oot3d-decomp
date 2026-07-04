// OoT3D decomp @ 004535b8  name=FUN_004535b8  size=288

void FUN_004535b8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  
  iVar1 = DAT_00453678;
  uVar6 = *(uint *)(DAT_00453678 + 0x14);
  FUN_00466620(DAT_0045367c,param_1);
  iVar3 = DAT_00453680;
  uVar5 = 0;
  do {
    if (uVar6 == 0) break;
    iVar2 = iVar3 + uVar5 * 0xa0;
    if (*(int *)(iVar2 + 0x84) != 0) {
      if (*(int *)(iVar2 + 0x9c) == 0) {
        *(undefined4 *)(iVar2 + 0x84) = 0;
        *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) & ~(1 << (uVar5 & 0xff));
        if (*(char *)(iVar2 + 0x99) == '\x01') {
          FUN_0033c950(0);
        }
      }
      else {
        FUN_004647f0();
      }
    }
    uVar5 = uVar5 + 1;
    uVar6 = uVar6 >> 1;
  } while ((int)uVar5 < 0x20);
  FUN_00465514();
  FUN_0046534c();
  iVar1 = DAT_004654c8;
  if (*(int *)(DAT_004654c8 + 0x1c) == 0) {
    return;
  }
  iVar3 = *(int *)(DAT_004654c8 + 0x1c) + -1;
  *(int *)(DAT_004654c8 + 0x1c) = iVar3;
  if (iVar3 == 0) {
    fVar7 = *(float *)(iVar1 + 0x24);
  }
  else {
    fVar7 = *(float *)(iVar1 + 0x20) - *(float *)(iVar1 + 0x18);
  }
  *(float *)(iVar1 + 0x20) = fVar7;
  uVar4 = FUN_0030f0ec();
  FUN_0030f0c0(uVar4,DAT_004654cc);
  FUN_002d3d44(*(undefined4 *)(iVar1 + 0x20));
  uVar4 = FUN_0030f0ec();
  FUN_0030f0c0(uVar4,DAT_004654d0);
  FUN_002d3d44(*(undefined4 *)(iVar1 + 0x20));
  return;
}

