// OoT3D decomp @ 0023bd78  name=FUN_0023bd78  size=556

void FUN_0023bd78(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint in_fpscr;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;

  if (*(char *)(param_1 + 0x4c36) != '\0') {
    uVar7 = *DAT_0023bfa4;
    uVar8 = DAT_0023bfa4[1];
    uVar9 = *(undefined4 *)(DAT_0023bfa4 + 2);
    uVar6 = *(undefined4 *)((int)DAT_0023bfa4 + 0x14);
    iVar2 = FUN_00350cf4(0xbb);
    uVar4 = DAT_0023bfa8;
    if (iVar2 != 0) {
      uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),DAT_0023bfa8);
    }
    iVar2 = FUN_00350cf4(0xbc);
    if (iVar2 != 0) {
      uVar7 = CONCAT44(uVar4,(int)uVar7);
    }
    iVar2 = FUN_00350cf4(0xbd);
    if (iVar2 != 0) {
      uVar8 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),uVar4);
    }
    iVar2 = FUN_00350cf4(0xbe);
    if (iVar2 != 0) {
      uVar8 = CONCAT44(uVar4,(int)uVar8);
    }
    iVar2 = FUN_00350cf4(0xbf);
    if (iVar2 != 0) {
      uVar9 = uVar4;
    }
    iVar2 = FUN_00350cf4(0xad);
    if (iVar2 != 0) {
      uVar6 = uVar4;
    }
    cVar1 = *(char *)(DAT_0023bfac + param_1);
    if (cVar1 == '\f') {
      uVar6 = (undefined4)uVar8;
      uVar3 = *(undefined4 *)(param_1 + 0x4c3c);
      uVar5 = 10;
    }
    else if (cVar1 < '\r') {
      if (cVar1 == '\x03') {
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        uVar3 = *(undefined4 *)(param_1 + 0x4c3c);
        uVar5 = 5;
      }
      else if (cVar1 == '\x06') {
        uVar6 = (undefined4)uVar7;
        uVar3 = *(undefined4 *)(param_1 + 0x4c3c);
        uVar5 = 7;
      }
      else {
        if (cVar1 != '\b') goto LAB_0023bea8;
        uVar3 = *(undefined4 *)(param_1 + 0x4c3c);
        uVar5 = 4;
        uVar6 = uVar9;
      }
    }
    else if (cVar1 == '\x0e') {
      uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
      uVar3 = *(undefined4 *)(param_1 + 0x4c3c);
      uVar5 = 0x13;
    }
    else {
      if (cVar1 != '\x12') goto LAB_0023bea8;
      uVar3 = *(undefined4 *)(param_1 + 0x4c3c);
      uVar5 = 8;
    }
    FUN_003695cc(uVar4,uVar4,uVar4,uVar6,uVar3,uVar5,4,2);
  }
LAB_0023bea8:
  if (*(short *)(param_1 + 0x53f0) == 0) {
    uVar4 = FUN_003687a8(*(undefined4 *)(param_2 + 0xc));
    FUN_00331284(*(undefined4 *)(param_1 + 0x20ac),uVar4);
  }
  else {
    uVar4 = FUN_003687a8(*(undefined4 *)(param_2 + 0xc));
    uVar6 = VectorSignedToFloat((int)*(short *)(param_1 + 0x53f0),(byte)(in_fpscr >> 0x15) & 3);
    FUN_003312f4(uVar6,*(undefined4 *)(param_1 + 0x20ac),uVar4);
  }
  *(undefined2 *)(param_1 + 0x53f0) = 0;
  return;
}
