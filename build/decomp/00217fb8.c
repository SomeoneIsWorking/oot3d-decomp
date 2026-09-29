// OoT3D decomp @ 00217fb8  name=FUN_00217fb8  size=660

void FUN_00217fb8(int param_1,int param_2)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;

  iVar6 = *(int *)(param_2 + 0x20ac);
  FUN_00375a18(iVar6 + 0xbe,(int)*(short *)(param_1 + 0x36),5,2000,0);
  iVar4 = DAT_0021824c;
  *(undefined2 *)(iVar6 + 0x36) = *(undefined2 *)(iVar6 + 0xbe);
  uVar5 = DAT_00218250;
  *(undefined2 *)(iVar4 + iVar6) = *(undefined2 *)(iVar6 + 0xbe);
  if (*(short *)(param_2 + 0x2b7e) == 3) {
    FUN_003725e0(param_2);
    *(undefined2 *)(param_2 + 0x2b7e) = 4;
    *(int *)(iVar6 + 0x1740) = param_1;
    FUN_0036bb28(uVar5,param_1,param_2);
    *(short *)(param_1 + 0xa08) = (short)DAT_00218254;
    *(undefined4 *)(param_1 + 0x9ac) = DAT_00218258;
  }
  else {
    if (*(short *)(param_2 + 0x2b7e) == 0xf) {
      FUN_0037547c(DAT_00218264,0,4,DAT_00218260,DAT_00218260,DAT_0021825c);
      FUN_003725e0(param_2);
      *(undefined2 *)(param_2 + 0x2b7e) = 4;
      *(int *)(iVar6 + 0x1740) = param_1;
      FUN_0036bb28(uVar5,param_1,param_2);
      *(short *)(param_1 + 0xa08) = (short)DAT_00218268;
      uVar5 = DAT_0021826c;
LAB_0021823c:
      *(undefined4 *)(param_1 + 0x9ac) = uVar5;
      return;
    }
    iVar3 = FUN_00357378(param_2);
    iVar4 = DAT_00218274;
    uVar1 = DAT_00218270;
    if (iVar3 == 0x2b) {
      if (*(int *)(DAT_00218274 + 4) != 0) {
        *(undefined1 *)(*(int *)(DAT_00218274 + 4) + 0xa1c) = 0;
      }
      iVar6 = FUN_004896d4(uVar1);
      if (iVar6 == 0) {
        iVar4 = *(int *)(iVar4 + 0xc);
        if (iVar4 != 0) {
          *(undefined1 *)(iVar4 + 0xa1c) = 1;
        }
        FUN_00334fa0(param_2);
        return;
      }
    }
    else if (iVar3 == 0x2d) {
      if (*(int *)(DAT_00218274 + 0xc) != 0) {
        *(undefined1 *)(*(int *)(DAT_00218274 + 0xc) + 0xa1c) = 0;
      }
      iVar4 = FUN_004896d4(uVar1);
      if (iVar4 == 0) {
        FUN_00334fa0(param_2);
        sVar2 = 0xf0;
        goto LAB_002181d8;
      }
    }
    else {
      if (iVar3 == 0x2e) {
        if (*(short *)(param_1 + 0xa0e) == 0) {
          FUN_0037547c(DAT_00218278,0,4,DAT_00218260,DAT_00218260,DAT_0021825c);
          FUN_003725e0(param_2);
          *(undefined2 *)(param_2 + 0x2b7e) = 4;
          *(int *)(iVar6 + 0x1740) = param_1;
          FUN_0036bb28(uVar5,param_1,param_2);
          *(short *)(param_1 + 0xa08) = (short)DAT_00218254;
          uVar5 = DAT_00218258;
          goto LAB_0021823c;
        }
        sVar2 = *(short *)(param_1 + 0xa0e) + -1;
LAB_002181d8:
        *(short *)(param_1 + 0xa0e) = sVar2;
        return;
      }
      if ((iVar3 == 0x30) && (iVar6 = FUN_004896d4(DAT_00218270), iVar6 == 0)) {
        iVar4 = *(int *)(iVar4 + 4);
        if (iVar4 != 0) {
          *(undefined1 *)(iVar4 + 0xa1c) = 1;
        }
        *(undefined2 *)(param_1 + 0xa0e) = 0xf0;
        FUN_003523dc(6);
        FUN_0033f248(0xe,1);
        FUN_00340bdc(param_2,0x2a);
        *(undefined1 *)(param_2 + 0x2b73) = 2;
        return;
      }
    }
  }
  return;
}
