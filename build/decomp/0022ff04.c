// OoT3D decomp @ 0022ff04  name=FUN_0022ff04  size=932

void FUN_0022ff04(int param_1,int param_2)

{
  short sVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint in_fpscr;

  uVar3 = DAT_00230214;
  iVar8 = DAT_00230210;
  *(float *)(param_1 + 0xc) =
       (*(float *)(param_1 + 0x88) + *(float *)(param_1 + 0x2c)) - DAT_0023020c;
  if ((*(byte *)(param_1 + 0x7f9) & 2) != 0) {
    *(byte *)(param_1 + 0x7f9) = *(byte *)(param_1 + 0x7f9) & 0xfd;
    FUN_00375fd0(param_1,param_1 + 0x800,1);
    iVar7 = DAT_00230218;
    if (*(char *)(param_1 + 0xb9) == '\0') {
      if (*(char *)(param_1 + 0xb8) == '\0') goto LAB_00230148;
    }
    else if (*(char *)(param_1 + 0xb9) == '\x01') {
      if (*(int *)(param_1 + 0x228) != iVar8) {
        FUN_00375c08(DAT_00230220,uVar3,uVar3,DAT_0023021c,param_1 + 0x1a4,4,0);
        uVar4 = DAT_00230224;
        *(undefined4 *)(param_1 + 0x6c) = uVar3;
        *(undefined4 *)(param_1 + 0x70) = uVar4;
        *(undefined4 *)(param_1 + 100) = uVar3;
        *(undefined2 *)(param_1 + 0x22c) = 0x78;
        *(float *)(param_1 + 0x82c) = *(float *)(iVar7 + 0x24) + DAT_00230228;
        FUN_00375ed8(param_1,0,200,0,0x50);
        *(byte *)(param_1 + 0x7f8) = *(byte *)(param_1 + 0x7f8) & 0xfe;
        FUN_00375bcc(param_1,DAT_0023022c);
        *(int *)(param_1 + 0x228) = iVar8;
      }
      goto LAB_00230148;
    }
    iVar5 = FUN_00375eb8(param_1);
    uVar4 = DAT_00230230;
    if (iVar5 == 0) {
      FUN_00375b70(param_2,param_1);
      FUN_00375bcc(param_1,DAT_00230234);
      uVar6 = DAT_00230238;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      FUN_00370350(uVar6,param_1 + 0x1a4,2);
      *(undefined2 *)(param_1 + 0x22c) = 0x1e;
      FUN_00375ed8(param_1,0x400000,200,0,0x28);
      *(undefined4 *)(param_1 + 0x6c) = uVar4;
      *(byte *)(param_1 + 0x7f8) = *(byte *)(param_1 + 0x7f8) & 0xfe;
      *(byte *)(param_1 + 0x7f9) = *(byte *)(param_1 + 0x7f9) & 0xfe;
      *(undefined4 *)(param_1 + 0x228) = DAT_0023023c;
    }
    else {
      FUN_00375bcc(param_1,DAT_00230240);
      uVar6 = FUN_0036ae14(param_1 + 0x1a4,3);
      uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(DAT_00230248,uVar3,uVar6,DAT_00230244,param_1 + 0x1a4,3,0);
      *(undefined2 *)(param_1 + 0x22c) = 0x3c;
      *(undefined4 *)(param_1 + 0x6c) = uVar4;
      *(undefined4 *)(param_1 + 0x70) = uVar3;
      *(undefined4 *)(param_1 + 100) = uVar3;
      *(byte *)(param_1 + 0x7f8) = *(byte *)(param_1 + 0x7f8) & 0xfe;
      *(byte *)(param_1 + 0x7f9) = *(byte *)(param_1 + 0x7f9) & 0xfe;
      FUN_00375ed8(param_1,0x400000,200,0,0x28);
      uVar4 = DAT_0023024c;
      *(undefined4 *)(param_1 + 0x82c) = *(undefined4 *)(iVar7 + 0x24);
      *(undefined4 *)(param_1 + 0x228) = uVar4;
    }
  }
LAB_00230148:
  (**(code **)(param_1 + 0x228))(param_1,param_2);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  sVar1 = -*(short *)(param_1 + 0xbc);
  *(short *)(param_1 + 0x34) = sVar1;
  iVar7 = 0;
  if (sVar1 != 0) {
    iVar7 = *(int *)(param_1 + 0x228);
  }
  if (sVar1 != 0 && iVar7 != iVar8) {
    FUN_0033bd9c(param_1);
  }
  else {
    FUN_00376864();
  }
  FUN_00376340(DAT_00230258,DAT_00230254,DAT_00230250,param_2,param_1,7);
  FUN_0037322c(uVar3,param_1);
  bVar2 = *(byte *)(param_1 + 0x7f8);
  if ((bVar2 & 2) != 0) {
    *(byte *)(param_1 + 0x7f8) = bVar2 & 0xfc;
    if ((bVar2 & 4) == 0) {
      FUN_00375bcc(param_1,DAT_002302fc);
    }
    else {
      if (*(float *)(param_1 + 0x2c) <= *(float *)(param_1 + 0xc)) {
        FUN_003461f0(param_1);
      }
      else {
        FUN_0034613c();
      }
      FUN_00375bcc(param_1,DAT_002302f8);
    }
  }
  iVar8 = param_1 + 0x7e8;
  FUN_0037632c(param_1);
  iVar7 = param_2 + 0x5c78;
  if ((*(byte *)(param_1 + 0x7f8) & 1) != 0) {
    FUN_003761f0(param_2,iVar7,iVar8);
  }
  if ((*(byte *)(param_1 + 0x7f9) & 1) != 0) {
    FUN_00376168(param_2,iVar7,iVar8);
  }
  FUN_003762a4(param_2,iVar7,iVar8);
  return;
}
