// OoT3D decomp @ 0044a9f0  name=FUN_0044a9f0  size=680

void FUN_0044a9f0(int param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iStack_a8;
  int *piStack_a4;
  int *piStack_a0;
  int *piStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int *piStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  undefined1 auStack_4c [4];
  ushort auStack_48 [2];
  ushort auStack_44 [16];
  undefined2 auStack_24 [2];
  
  if (*(char *)(param_1 + 0x1318) == '\0') {
    if (param_2 == 0) {
      auStack_24[0] = 0;
    }
    else {
      auStack_24[0] = 2;
      FUN_0034338c(*(undefined4 *)(param_1 + 0x10a8),param_1 + 0x18,0x1080);
      coproc_moveto_Data_Synchronization(0);
    }
    FUN_002e1d14(2,auStack_24,4);
    FUN_002e1ce8(0x4000);
    FUN_002e1ba0(param_1);
    FUN_002e1b58(2,auStack_48,2,auStack_4c);
    FUN_002e1b58(2,auStack_44,UNK_0044ac98 & (uint)auStack_48[0] << 1,auStack_4c);
    iStack_a8 = param_1 + 0x1098;
    piStack_a4 = &iStack_54;
    piStack_a0 = &iStack_5c;
    piStack_9c = &iStack_64;
    iStack_98 = param_1 + 0x10a0;
    iStack_94 = param_1 + 0x10a8;
    piStack_8c = &iStack_6c;
    iStack_88 = param_1 + 0x1308;
    iStack_84 = param_1 + 0x1310;
    iStack_80 = param_1 + 0x1320;
    iStack_90 = param_1 + 0x1300;
    iStack_7c = param_1 + 0x1328;
    iStack_78 = param_1 + 0x1330;
    iStack_74 = param_1 + 0x1338;
    iStack_70 = param_1 + 0x1340;
    iVar6 = 0;
    if (auStack_48[0] != 0) {
      do {
        FUN_002e1b1c(auStack_44[iVar6],(&iStack_a8)[iVar6]);
        FUN_002e1b1c(auStack_44[iVar6] | 0x10000,(&iStack_a8)[iVar6] + 4);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)(uint)auStack_48[0]);
    }
    *(int *)(param_1 + 0x12f0) = iStack_6c;
    *(int *)(param_1 + 0x12f4) = iStack_6c + 0xa00;
    *(int *)(param_1 + 0x12f8) = iStack_68;
    *(int *)(param_1 + 0x12fc) = iStack_68 + 0xa00;
    iVar6 = 0;
    do {
      iVar4 = param_1 + iVar6 * 4;
      *(int *)(iVar4 + 0x10b0) = iStack_54 + iVar6 * 0xc0;
      *(int *)(iVar4 + 0x1170) = iStack_5c + iVar6 * 0xc;
      *(int *)(iVar4 + 0x1230) = iStack_64 + iVar6 * 0x20;
      *(int *)(iVar4 + 0x1110) = iStack_50 + iVar6 * 0xc0;
      *(int *)(iVar4 + 0x11d0) = iStack_58 + iVar6 * 0xc;
      iVar1 = iVar6 * 0x20;
      iVar6 = iVar6 + 1;
      *(int *)(iVar4 + 0x1290) = iStack_60 + iVar1;
    } while (iVar6 < 0x18);
    FUN_00453ed0(param_1,(int)*(char *)(param_1 + 0x1319));
    FUN_002e1ce8(0x4000);
    *(undefined2 *)(param_1 + 0x131a) = 4;
    **(undefined2 **)(param_1 + 0x1098) = 4;
    *(short *)(param_1 + 0x131a) = *(short *)(param_1 + 0x131a) + 1;
    software_interrupt(0x18);
    uVar5 = *(uint *)(param_1 + 4) >> 0x1b;
    if ((*(uint *)(param_1 + 4) & 0x80000000) != 0) {
      uVar5 = uVar5 - 0x20;
    }
    if ((uVar5 != 0xfffffff9 && uVar5 != 0) && uVar5 != 1) {
      FUN_003351b4();
    }
    uVar3 = UNK_0044ac9c;
    uVar5 = *(ushort *)(param_1 + 0x131a) & 1;
    uVar2 = (undefined2)uVar5;
    *(undefined2 *)(param_1 + 0x131e) = uVar2;
    *(undefined2 *)(param_1 + 0x131c) = uVar2;
    FUN_00453bf8(uVar3,param_1,10,*(undefined4 *)(param_1 + uVar5 * 4 + 0x1308));
    *(undefined1 *)(param_1 + 0x1318) = 1;
  }
  return;
}

