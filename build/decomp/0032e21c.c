// OoT3D decomp @ 0032e21c  name=FUN_0032e21c  size=504

int FUN_0032e21c(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_r1;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 auStack_224 [524];

  *(short *)(param_1 + (uint)*param_1 * 0x80 + 4) = (short)param_2;
  iVar7 = DAT_0032e414 + param_2 * 0x44;
  if (*(int *)(iVar7 + 0x40) == 0) {
    uVar5 = FUN_00324fd0(iVar7);
    *(undefined4 *)(iVar7 + 0x40) = uVar5;
  }
  uVar8 = *(undefined4 *)(iVar7 + 0x40);
  *(undefined4 *)(param_1 + (uint)*param_1 * 0x80 + 0xc) = uVar8;
  uVar6 = FUN_0035010c(uVar8);
  uVar5 = DAT_0032e418;
  *(undefined4 *)(param_1 + (uint)*param_1 * 0x80 + 8) = uVar6;
  if (param_2 == 0x14 || param_2 == 0x15) {
    param_2 = 0;
  }
  FUN_00324f44(auStack_224,iVar7,uVar5);
  uVar5 = FUN_00324eac(auStack_224,uVar6,uVar8,param_2,0);
  puVar4 = DAT_0032e420;
  puVar3 = DAT_0032e41c;
  *(undefined4 *)(param_1 + (uint)*param_1 * 0x80 + 0x10) = uVar5;
  while( true ) {
    uVar9 = FUN_0031b9c0(*(undefined4 *)(param_1 + (uint)*param_1 * 0x80 + 0x10),0);
    if ((int)uVar9 != 0) break;
    uVar5 = (int)((ulonglong)uVar9 >> 0x20);
    if ((*puVar3 & 1) == 0) {
      uVar9 = FUN_003679b4(DAT_0032e41c);
      uVar5 = (int)((ulonglong)uVar9 >> 0x20);
      if ((int)uVar9 != 0) {
        FUN_0031ff30(DAT_0032e424);
        uVar5 = DAT_0032e42c;
      }
    }
    FUN_0031fe84(DAT_0032e424,uVar5);
    uVar5 = extraout_r1;
    if ((*puVar4 & 1) == 0) {
      uVar9 = FUN_003679b4(DAT_0032e420);
      uVar5 = (int)((ulonglong)uVar9 >> 0x20);
      if ((int)uVar9 != 0) {
        FUN_0036788c(DAT_0032e430);
        uVar5 = DAT_0032e434;
      }
    }
    uVar6 = DAT_0032e430;
    FUN_0031bebc(DAT_0032e430,uVar5);
    FUN_0031bd30(uVar6);
    FUN_0031bb84(uVar6);
    software_interrupt(10);
  }
  FUN_0031b99c(*(undefined4 *)(param_1 + (uint)*param_1 * 0x80 + 0x10));
  pbVar1 = param_1 + (uint)*param_1 * 0x80 + 0x10;
  pbVar1[0] = 0;
  pbVar1[1] = 0;
  pbVar1[2] = 0;
  pbVar1[3] = 0;
  bVar2 = *param_1;
  if (*(int *)(param_1 + (uint)bVar2 * 0x80 + 0xc) != 0) {
    ObjectBankArchive_0031b124
              (param_1 + (uint)bVar2 * 0x80 + 0x14,*(undefined4 *)(param_1 + (uint)bVar2 * 0x80 + 8)
               ,*(int *)(param_1 + (uint)bVar2 * 0x80 + 0xc),0);
  }
  bVar2 = *param_1;
  *param_1 = bVar2 + 1;
  return (byte)(bVar2 + 1) - 1;
}
