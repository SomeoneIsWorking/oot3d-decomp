// OoT3D decomp @ 00154dac  name=FUN_00154dac  size=996

void FUN_00154dac(int param_1,int param_2)

{
  short sVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  uint in_fpscr;
  undefined4 local_30;

  iVar3 = param_2 + 0x3a58;
  iVar4 = FUN_00373074(iVar3,(int)*(char *)(param_1 + 0x1c0));
  if (((iVar4 != 0) && (iVar4 = FUN_00373074(iVar3,(int)*(char *)(param_1 + 0x1c1)), iVar4 != 0)) &&
     ((*(char *)(param_1 + 0x1c2) < '\0' || (iVar4 = FUN_00373074(iVar3), iVar4 != 0)))) {
    *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_1 + 0x1c0);
    uVar5 = DAT_00155198;
    if (*(short *)(param_1 + 0x1c) < 4) {
      *(undefined4 *)(param_1 + 0x140) = DAT_00155194;
      sVar1 = *(short *)(param_1 + 0x1c);
      if (sVar1 == 0) {
        *(undefined4 *)(param_1 + 0x1bc) = uVar5;
        local_30 = FUN_00353fd4(param_1,param_2,0);
        uVar7 = 0x5c;
        uVar8 = 0x6f;
      }
      else if (sVar1 == 1) {
        *(undefined4 *)(param_1 + 0x1bc) = DAT_0015519c;
        local_30 = FUN_00353fd4(param_1,param_2,0);
        uVar7 = 0x6f;
        uVar8 = 0x5c;
      }
      else if (sVar1 == 2) {
        *(undefined4 *)(param_1 + 0x1bc) = DAT_001551a0;
        local_30 = FUN_00353fd4(param_1,param_2,0);
        uVar7 = 0x70;
        uVar8 = 0x71;
      }
      else {
        *(undefined4 *)(param_1 + 0x1bc) = uVar5;
        local_30 = FUN_00353fd4(param_1,param_2,0);
        uVar7 = 0x71;
        uVar8 = 0x70;
      }
      FUN_00372f38(param_1,param_2,0);
      uVar5 = FUN_0036a924(param_1,param_2,uVar7,0);
      *(undefined4 *)(param_1 + 0x248) = uVar5;
      uVar5 = FUN_0036a924(param_1,param_2,uVar8,0);
      *(undefined4 *)(param_1 + 0x24c) = uVar5;
      *(undefined4 *)(param_1 + 0x250) = 0;
      uVar5 = FUN_0036a924(param_1,param_2,1,0x21);
      *(undefined4 *)(param_1 + 0x254) = uVar5;
      if (*(char *)(param_1 + 0x1c2) != -1) {
        *(char *)(param_1 + 0x1e) = *(char *)(param_1 + 0x1c2);
        FUN_00353c9c(param_1,param_2,param_1 + 0x1c4,1,2,0,0,0);
        *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_1 + 0x1c0);
        iVar3 = FUN_0036bcb4(param_2,0xe);
        uVar5 = DAT_001551a4;
        uVar6 = DAT_001551a4;
        if (iVar3 != 0) {
          uVar6 = FUN_0036ae14(param_1 + 0x1c4,2);
          uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
        }
        FUN_00375c08(DAT_001551a8,uVar6,uVar6,uVar5,param_1 + 0x1c4,2);
        FUN_0037266c(*(undefined4 *)(param_1 + 0x1ec),2);
        FUN_0037266c(*(undefined4 *)(param_1 + 0x1ec),0);
        FUN_0036932c(*(undefined4 *)(param_1 + 0x1ec),3);
        FUN_0036932c(*(undefined4 *)(param_1 + 0x1ec),1);
      }
      uVar5 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,local_30);
      *(undefined4 *)(param_1 + 0x1a4) = uVar5;
      return;
    }
    sVar1 = *(short *)(param_1 + 0x1c) + -4;
    *(short *)(param_1 + 0x1c) = sVar1;
    if (sVar1 == 0) {
      uVar2 = FUN_00363c10(iVar3,0x6f);
      uVar7 = 0x5c;
      uVar8 = 0x6f;
      *(undefined1 *)(param_1 + 0x1c0) = uVar2;
    }
    else if (sVar1 == 1) {
      uVar2 = FUN_00363c10(iVar3,0x5c);
      uVar7 = 0x6f;
      uVar8 = 0x5c;
      *(undefined1 *)(param_1 + 0x1c0) = uVar2;
    }
    else if (sVar1 == 2) {
      uVar2 = FUN_00363c10(iVar3,0x71);
      uVar7 = 0x70;
      uVar8 = 0x71;
      *(undefined1 *)(param_1 + 0x1c0) = uVar2;
    }
    else {
      uVar2 = FUN_00363c10(iVar3,0x70);
      uVar7 = 0x71;
      uVar8 = 0x70;
      *(undefined1 *)(param_1 + 0x1c0) = uVar2;
    }
    if (*(char *)(param_1 + 0x1c0) < '\0') {
      FUN_00374428(param_1);
    }
    else {
      *(undefined4 *)(param_1 + 0x1bc) = DAT_00155190;
    }
    FUN_00372f38(param_1,param_2,0);
    uVar5 = FUN_0036a924(param_1,param_2,uVar7,0);
    *(undefined4 *)(param_1 + 0x248) = uVar5;
    uVar5 = FUN_0036a924(param_1,param_2,uVar8,0);
    *(undefined4 *)(param_1 + 0x24c) = uVar5;
    *(undefined4 *)(param_1 + 0x250) = 0;
  }
  return;
}
