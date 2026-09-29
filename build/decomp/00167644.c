// OoT3D decomp @ 00167644  name=FUN_00167644  size=1396

void FUN_00167644(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_44 [4];
  undefined4 local_40;
  float local_3c [3];

  fVar4 = DAT_001679a8;
  uVar3 = DAT_001679a4;
  uVar2 = DAT_001679a0;
  iVar7 = *(int *)(DAT_0016799c + param_2);
  if (*(short *)(param_1 + 0x1c) < 1) {
    if (((*(byte *)(param_1 + 0x69d) & 0x80) != 0) || ((*(byte *)(param_1 + 0x765) & 0x80) != 0)) {
      *(byte *)(param_1 + 0x765) = *(byte *)(param_1 + 0x765) & 0x7f;
      *(byte *)(param_1 + 0x69d) = *(byte *)(param_1 + 0x69d) & 0x7f;
      *(byte *)(param_1 + 0x6f5) = *(byte *)(param_1 + 0x6f5) & 0xfd;
      goto LAB_001678a0;
    }
    if ((*(byte *)(param_1 + 0x6f5) & 2) == 0) goto LAB_001678a0;
    *(byte *)(param_1 + 0x6f5) = *(byte *)(param_1 + 0x6f5) & 0xfd;
    FUN_003742c4(param_1,param_1 + 0x6e4,1);
    cVar1 = *(char *)(param_1 + 0xb9);
    if (cVar1 == '\x0f') goto LAB_001678ac;
    if (cVar1 != '\x06') {
      if (cVar1 == '\r') {
        *(undefined1 *)(param_1 + 0xb7) = 0;
LAB_00167854:
        iVar5 = DAT_001679ac;
        *(float *)(param_1 + 0x6c) = fVar4;
        *(undefined2 *)(iVar5 + param_1) = 0;
        *(undefined4 *)(param_1 + 0x640) = 1;
        FUN_00375ed8(param_1,0x400000,0xff,0,8);
        *(undefined4 *)(param_1 + 0x63c) = 0;
        *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
        *(float *)(param_1 + 0x678) = fVar4;
        *(undefined4 *)(param_1 + 0x644) = DAT_001679c0;
      }
      else if (cVar1 == '\x0e') {
        if (*(int *)(param_1 + 0x63c) == 0xd) goto LAB_001678ac;
        *(undefined4 *)(param_1 + 0x63c) = 0xd;
        iVar5 = DAT_001679ac;
        if (*(float *)(param_1 + 0x84) < *(float *)(param_1 + 0x2c)) {
          *(undefined4 *)(param_1 + 0x6c) = uVar2;
        }
        *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
        *(undefined2 *)(iVar5 + param_1) = 0;
        FUN_00375ed8(param_1,0,200,0,0x50);
        FUN_00375bcc(param_1,DAT_001679b0);
        *(undefined4 *)(param_1 + 0x644) = DAT_001679b4;
      }
      else {
        FUN_00375eb8();
        FUN_00375ed8(param_1,0x400000,0xff,0,8);
        FUN_00375bcc(param_1,DAT_001679b8);
        if (*(char *)(param_1 + 0xb9) == '\f') {
          local_3c[0] = (float)FUN_003738a8(DAT_001679bc);
          local_3c[0] = local_3c[0] + *(float *)(param_1 + 0x28);
                    /* WARNING: Subroutine does not return */
          FUN_003759d0();
        }
        if (*(char *)(param_1 + 0xb7) == '\0') goto LAB_00167854;
      }
      goto LAB_001678a0;
    }
  }
  else {
LAB_001678a0:
    if (*(char *)(param_1 + 0xb9) != '\x06') {
LAB_001678ac:
      bVar8 = false;
      if (*(float *)(param_1 + 0x6c) == fVar4) {
        bVar8 = *(float *)(param_1 + 100) == fVar4;
      }
      if (!bVar8) {
        FUN_00376864(param_1);
        FUN_00376340(uVar3,DAT_001679c4,DAT_001679c4,param_2,param_1,5);
      }
      (**(code **)(param_1 + 0x644))(param_1,param_2);
      if ((*(uint *)(DAT_001679c8 + param_2) & 0x7f) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      *(float *)(param_1 + 0x670) = *(float *)(param_1 + 0x670) + *(float *)(param_1 + 0x674);
    }
  }
  if (*(short *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(*(int *)(param_1 + 0x700) + 0x38);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(*(int *)(param_1 + 0x700) + 0x3c);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(*(int *)(param_1 + 0x700) + 0x40);
    if (*(int *)(param_1 + 0x63c) == 0xe) {
      FUN_00375a18(param_1 + 0xbc,DAT_001679d4,1,300,0);
    }
    else {
      FUN_00375a18(param_1 + 0xbc,0,1,300,0);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  }
  iVar5 = param_1 + 0x68c;
  FUN_0037632c(param_1);
  if (*(char *)(param_1 + 0xb7) == '\0') {
LAB_00167af0:
    iVar7 = *(int *)(param_1 + 0x63c);
    if ((((iVar7 == 0xf || iVar7 == 0xe) || iVar7 == 5) || iVar7 == 0xc) || iVar7 == 1) {
      if (*(short *)(param_1 + 0x1c) != 0) {
        FUN_003761f0(param_2);
        FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x754);
        uVar3 = DAT_00167c88;
        uVar2 = DAT_00167c84;
        if (*(short *)(param_1 + 0x1c) < 0) {
          if ((*(uint *)(param_1 + 4) & 0x40) != 0) {
            iVar7 = 1;
            do {
              local_40 = 0;
              iVar5 = FUN_00369f9c(param_2 + 0xa98,param_1 + 0x28,param_1 + iVar7 * 0xc + 0x648,
                                   local_3c,&local_40,1,1,0,1,auStack_44);
              if (iVar5 == 1) {
                FUN_0037378c(fVar4,param_2,local_3c,1,300,0x96,1);
                FUN_0034f3a0(fVar4,uVar3,uVar2,param_2,param_1,local_3c,3);
              }
              iVar7 = iVar7 + -1;
            } while (-1 < iVar7);
            goto LAB_00167c50;
          }
        }
        else if (*(short *)(param_1 + 0x1c) == 0) goto LAB_00167c50;
        FUN_00376168(param_2,param_2 + 0x5c78,iVar5);
      }
      goto LAB_00167c50;
    }
  }
  else {
    if (*(short *)(param_1 + 0x1c) < 1) {
      iVar6 = param_2 + 0x5c78;
      FUN_003762a4(param_2,iVar6,iVar5);
      FUN_003762a4(param_2,iVar6);
      if (((*(short *)(DAT_00167c78 + param_1) == 0) ||
          ((*(uint *)(param_1 + 0x11c) & 0x400000) == 0)) && (*(int *)(param_1 + 0x63c) != 1)) {
        FUN_00376168(param_2,iVar6,param_1 + 0x6e4);
      }
      if (*(short *)(param_1 + 0x1c) == 0) goto LAB_00167af0;
    }
    if (((*(byte *)(param_1 + 0x764) & 2) == 0) ||
       (*(byte *)(param_1 + 0x764) = *(byte *)(param_1 + 0x764) & 0xfd,
       *(int *)(param_1 + 0x758) != iVar7)) goto LAB_00167af0;
    FUN_00374a58(DAT_00167c7c,param_1 + 0x1a4,3);
    *(undefined4 *)(param_1 + 0x63c) = 7;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
    *(undefined4 *)(param_1 + 0x644) = DAT_00167c80;
  }
  FUN_00376168(param_2,param_2 + 0x5c78,iVar5);
LAB_00167c50:
  FUN_0036e168(fVar4,DAT_00167c90,DAT_00167c8c,fVar4,param_1 + 0x678);
  return;
}
