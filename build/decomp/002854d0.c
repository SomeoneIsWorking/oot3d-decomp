// OoT3D decomp @ 002854d0  name=FUN_002854d0  size=668

void FUN_002854d0(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint in_fpscr;

  iVar5 = FUN_003731e0(param_1 + 0x1a4);
  uVar4 = DAT_00285794;
  uVar3 = DAT_00285790;
  uVar2 = DAT_0028578c;
  uVar7 = DAT_00285788;
  iVar6 = DAT_00285784;
  if (iVar5 == 0) {
    if ((DAT_00285784 < *(int *)(param_1 + 0x98)) ||
       (iVar5 = FUN_0036f18c(param_1,DAT_00285788), iVar5 == 0)) {
      FUN_00375c08(uVar4,*(undefined4 *)(param_1 + 0x1e0),uVar3,uVar2,param_1 + 0x1a4,5,2);
      *(undefined1 *)(param_1 + 0x840) = 4;
      *(undefined1 *)(*(int *)(param_1 + 0x8c4) + 0x15) = 0;
      *(undefined1 *)(param_1 + 0x8b8) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x8c4) + 5) = 0;
      **(undefined4 **)(param_1 + 0x8c4) = 0;
    }
  }
  else {
    *(char *)(param_1 + 0x840) = *(char *)(param_1 + 0x840) + '\x01';
  }
  switch(*(undefined1 *)(param_1 + 0x840)) {
  case 1:
    FUN_00373d40(param_1 + 0x1a4,6);
    uVar7 = DAT_00285798;
    *(char *)(param_1 + 0x840) = *(char *)(param_1 + 0x840) + '\x01';
    FUN_00375bcc(param_1,uVar7);
  case 0:
    FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),1,DAT_0028579c,0);
    break;
  case 2:
    if (DAT_002857a0 <= *(int *)(param_1 + 0x1e0)) {
      *(undefined1 *)(param_1 + 0x8b8) = 0x11;
      *(undefined1 *)(*(int *)(param_1 + 0x8c4) + 0x15) = 1;
      **(undefined4 **)(param_1 + 0x8c4) = 0xffcfffff;
      *(undefined1 *)(*(int *)(param_1 + 0x8c4) + 5) = 8;
    }
    uVar7 = DAT_002857a4;
    bVar1 = *(byte *)(param_1 + 0x8b8);
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 2) != 0) {
        *(byte *)(param_1 + 0x8b8) = bVar1 & 0xfd;
        FUN_00374bb8(uVar7,uVar7,param_2,param_1,(int)*(short *)(param_1 + 0xbe));
      }
    }
    else {
      *(undefined1 *)(*(int *)(param_1 + 0x8c4) + 0x15) = 0;
      *(undefined1 *)(param_1 + 0x8b8) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x8c4) + 5) = 0;
      **(undefined4 **)(param_1 + 0x8c4) = 0;
      *(char *)(param_1 + 0x840) = *(char *)(param_1 + 0x840) + '\x01';
    }
    break;
  case 3:
    if ((iVar6 < *(int *)(param_1 + 0x98)) || (iVar6 = FUN_0036f18c(param_1,uVar7), iVar6 == 0)) {
      uVar7 = FUN_0036ae14(param_1 + 0x1a4,5);
      uVar7 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar4,uVar7,uVar3,uVar2,param_1 + 0x1a4,5,2);
      *(char *)(param_1 + 0x840) = *(char *)(param_1 + 0x840) + '\x01';
      *(undefined1 *)(*(int *)(param_1 + 0x8c4) + 0x15) = 0;
      *(undefined1 *)(param_1 + 0x8b8) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x8c4) + 5) = 0;
      **(undefined4 **)(param_1 + 0x8c4) = 0;
    }
    else {
      uVar7 = FUN_0036ae14(param_1 + 0x1a4,5);
      uVar7 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(DAT_002857b0,DAT_002857ac,uVar7,DAT_002857a8,param_1 + 0x1a4,5,2);
      *(undefined1 *)(param_1 + 0x840) = 0;
    }
    break;
  case 5:
    FUN_00393dd4(param_1);
  }
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  return;
}
