// OoT3D decomp @ 001de320  name=FUN_001de320  size=1056

void FUN_001de320(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  int iVar7;

  uVar4 = DAT_001de72c;
  uVar3 = DAT_001de728;
  uVar2 = DAT_001de724;
  if (*(byte *)(param_1 + 0xdf0) == 1) goto LAB_001de668;
  if (((*(ushort *)(param_1 + 0x90) & 0x60) == 0) || (*(int *)(param_1 + 0x88) < DAT_001de730)) {
    if ((*(byte *)(param_1 + 0xdf0) < 3) || ((*(byte *)(param_1 + 0xe21) & 2) == 0))
    goto LAB_001de668;
    *(byte *)(param_1 + 0xe21) = *(byte *)(param_1 + 0xe21) & 0xfd;
    if (*(char *)(param_1 + 0xb9) == '\x06') goto LAB_001de668;
    *(char *)(param_1 + 0xdf2) = *(char *)(param_1 + 0xb9);
    FUN_00375fd0(param_1,*(int *)(param_1 + 0xe2c) + 0x50,1);
    *(undefined1 *)(param_1 + 0xdf1) = 0;
    uVar5 = DAT_001de744;
    if (*(char *)(param_1 + 0xb9) == '\x01') {
      if (*(char *)(param_1 + 0xdf0) != '\x06') {
        FUN_00375ed8(param_1,0,0x78,0,0x50);
        FUN_00375eb8(param_1);
        uVar2 = DAT_001de738;
        if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
          *(undefined4 *)(param_1 + 0x6c) = DAT_001de734;
        }
        FUN_00375bcc(param_1,uVar2);
        uVar2 = DAT_001de73c;
        *(undefined1 *)(param_1 + 0xdf1) = 0;
        *(undefined1 *)(param_1 + 0xdf0) = 6;
        *(undefined4 *)(param_1 + 0xdf4) = uVar2;
      }
      goto LAB_001de668;
    }
    if (*(char *)(param_1 + 0xb9) == '\a') {
      FUN_003738a8(DAT_001de744,DAT_001de740);
      FUN_003738a8(uVar5);
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    FUN_00375ed8(param_1,0x400000,0xff,0,8);
    iVar7 = FUN_00375eb8(param_1);
    if (iVar7 != 0) {
      if ((*(char *)(param_1 + 0xdf3) == '\0') &&
         ((*(char *)(param_1 + 0xb9) == '\r' ||
          ((*(char *)(param_1 + 0xb9) == '\x0e' &&
           ((iVar7 = (int)*(char *)(DAT_001de754 + *(int *)(DAT_001de750 + param_2)), iVar7 - 4U < 8
            || (iVar7 == 0x14 || iVar7 == 0x15)))))))) {
        FUN_00375e18(param_1 + 0xdfc,3,param_2);
        *(undefined1 *)(param_1 + 0xdf3) = 1;
      }
      FUN_00374a58(uVar4,param_1 + 0x1a4,2);
      if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
        *(undefined4 *)(param_1 + 0x6c) = uVar4;
      }
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
      FUN_00375bcc(param_1,DAT_001de758);
      uVar2 = DAT_001de75c;
      *(undefined1 *)(param_1 + 0xdf0) = 2;
      *(undefined4 *)(param_1 + 0xdf4) = uVar2;
      goto LAB_001de668;
    }
    FUN_00374a58(uVar4,param_1 + 0x1a4,1);
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
    uVar1 = *(ushort *)(param_1 + 0x90);
  }
  else {
    *(undefined1 *)(param_1 + 0xb7) = 0;
    *(undefined1 *)(param_1 + 0xdf1) = 0;
    FUN_00374a58(uVar4,param_1 + 0x1a4,1);
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
    uVar1 = *(ushort *)(param_1 + 0x90);
  }
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
  }
  *(undefined1 *)(param_1 + 0xdf0) = 1;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  FUN_00375e18(param_1 + 0xdfc,0x1d,param_2);
  *(byte *)(param_1 + 0xdf3) = *(byte *)(param_1 + 0xdf3) | 4;
  FUN_0035e4f4(param_2,param_1 + 0x28,uVar3,1,1,0x28);
  *(undefined4 *)(param_1 + 0xdf4) = DAT_001de74c;
LAB_001de668:
  FUN_00376864(param_1);
  FUN_00376340(DAT_001de768,DAT_001de764,DAT_001de760,param_2,param_1,0x1d);
  (**(code **)(param_1 + 0xdf4))(param_1,param_2);
  fVar6 = DAT_001de76c;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x58) * fVar6;
  if (*(char *)(param_1 + 0xed0) != '\0') {
    *(char *)(param_1 + 0xed0) = *(char *)(param_1 + 0xed0) + -1;
  }
  if (((*(byte *)(param_1 + 0xe20) & 2) != 0) && (*(char *)(param_1 + 0xed0) == '\0')) {
    *(byte *)(param_1 + 0xe20) = *(byte *)(param_1 + 0xe20) & 0xfd;
    *(undefined1 *)(param_1 + 0xed0) = 0xf;
  }
  if ((*(char *)(param_1 + 0xdf1) != '\0') && (*(char *)(param_1 + 0xed0) == '\0')) {
    FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0xe10);
  }
  if ((2 < *(byte *)(param_1 + 0xdf0)) &&
     ((*(short *)(DAT_001de7d0 + param_1) == 0 || ((*(uint *)(param_1 + 0x11c) & 0x400000) == 0))))
  {
    FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0xe10);
  }
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0xe10);
  return;
}
